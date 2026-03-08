/*
 * XREFs of PopDirectedDripsInitializeBroadcast @ 0x1409806E8
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x1403BDF5C (IoControlPnpDeviceActionQueue.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x140586764 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405878B4 (PopFxDestroyDirectedDripsCandidateDeviceList.c)
 *     PopPowerAggregatorHandleIntent @ 0x140757228 (PopPowerAggregatorHandleIntent.c)
 *     PopDirectedDripsQueryMitigationStatus @ 0x140880DE0 (PopDirectedDripsQueryMitigationStatus.c)
 *     PoInitializeBroadcast @ 0x140988BE4 (PoInitializeBroadcast.c)
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x14099CDB8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopDirectedDripsInitializeBroadcast(volatile signed __int32 *a1)
{
  char v2; // r15
  char v3; // si
  unsigned int v4; // r13d
  int v5; // ebx
  volatile signed __int32 *v6; // rdx
  volatile signed __int32 *i; // rax
  unsigned int v8; // eax
  volatile signed __int32 *v9; // rax
  __int128 *v10; // rdi
  int v11; // r14d
  int v12; // eax
  char v13; // dl
  PVOID v14; // rcx
  _QWORD *j; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v24; // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+80h] [rbp+48h] BYREF
  int v26; // [rsp+88h] [rbp+50h] BYREF
  int v27; // [rsp+90h] [rbp+58h] BYREF
  int v28; // [rsp+98h] [rbp+60h] BYREF

  v28 = 0;
  v24 = 0LL;
  v27 = 0;
  v25 = 0;
  _InterlockedOr(a1, 0);
  v2 = 0;
  PopDirectedDripsQueryMitigationStatus(&v27, &v28, &v25);
  v3 = v25;
  v4 = v25 | v28 & v27;
  if ( v4 )
  {
    IoControlPnpDeviceActionQueue(1);
    v6 = (volatile signed __int32 *)IopRootDeviceNode;
    for ( i = (volatile signed __int32 *)*((_QWORD *)IopRootDeviceNode + 1);
          i;
          i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
    {
      v6 = i;
    }
    if ( v6 != IopRootDeviceNode )
    {
      do
      {
        _InterlockedAnd(v6 + 74, 0xFFFFFEFF);
        *((_QWORD *)v6 + 92) = v6 + 182;
        *((_QWORD *)v6 + 94) = v6 + 186;
        *((_QWORD *)v6 + 93) = v6 + 186;
        v8 = v6[190] & 0xFFF8FFFF;
        *((_QWORD *)v6 + 91) = v6 + 182;
        *((_DWORD *)v6 + 190) = v8;
        *((_DWORD *)v6 + 191) = 0;
        v9 = *(volatile signed __int32 **)v6;
        if ( *(_QWORD *)v6 )
        {
          do
          {
            v6 = v9;
            v9 = (volatile signed __int32 *)*((_QWORD *)v9 + 1);
          }
          while ( v9 );
        }
        else
        {
          v6 = (volatile signed __int32 *)*((_QWORD *)v6 + 2);
        }
      }
      while ( v6 != IopRootDeviceNode );
      v3 = v25;
    }
    PopFxBuildDirectedDripsCandidateDeviceList(&v24);
    v10 = (__int128 *)v24;
    v26 = 0;
    v11 = 0;
    if ( (__int128 *)v24 == &v24 )
      goto LABEL_42;
    do
    {
      v12 = PopDirectedDripsBuildBroadcastTreePartial(*((_QWORD *)v10 - 103), v4, &v26);
      v5 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741637 )
          goto LABEL_43;
      }
      else
      {
        ++v11;
      }
      v10 = *(__int128 **)v10;
    }
    while ( v10 != &v24 );
    if ( v11 && (v13 = v26, v26) )
    {
      if ( (v26 & 1) != 0 && (v3 & 1) == 0 )
      {
        _InterlockedOr(a1, 0x400u);
        v3 = v25;
        v13 = v26;
      }
      if ( (v13 & 2) != 0 && (v3 & 2) == 0 )
      {
        v2 = 1;
        v5 = -1073741267;
      }
      else
      {
        v14 = IopRootDeviceNode;
        for ( j = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); j; j = (_QWORD *)j[1] )
          v14 = j;
        while ( v14 != IopRootDeviceNode )
        {
          if ( (*((_DWORD *)v14 + 190) & 0x30000) != 0 )
          {
            if ( (*((_DWORD *)v14 + 190) & 0x20000) != 0 )
            {
              v16 = *((_QWORD *)v14 + 97);
              if ( v16 )
                ++*(_DWORD *)(v16 + 160);
            }
            else if ( (*((_DWORD *)v14 + 190) & 0x10000) != 0 )
            {
              v17 = *((_QWORD *)v14 + 97);
              if ( v17 )
                ++*(_DWORD *)(v17 + 156);
            }
            _InterlockedOr((volatile signed __int32 *)v14 + 74, 0x100u);
          }
          v18 = *(_QWORD **)v14;
          if ( *(_QWORD *)v14 )
          {
            do
            {
              v14 = v18;
              v18 = (_QWORD *)v18[1];
            }
            while ( v18 );
          }
          else
          {
            v14 = (PVOID)*((_QWORD *)v14 + 2);
          }
        }
        v5 = PoInitializeBroadcast(1LL);
      }
    }
    else
    {
LABEL_42:
      v5 = -1073741823;
    }
LABEL_43:
    PopFxDestroyDirectedDripsCandidateDeviceList((struct _KEVENT **)&v24);
    if ( v5 < 0 )
      IoControlPnpDeviceActionQueue(0);
    if ( v2 )
    {
      PopAcquirePolicyLock(v19);
      PopPowerAggregatorHandleIntent(4u, 0LL, 0, 0x2Au);
      PopReleasePolicyLock(v21, v20, v22);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
