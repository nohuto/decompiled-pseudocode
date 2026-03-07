__int64 __fastcall PopDirectedDripsBuildPs4BroadcastTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r8d
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  int v14; // eax
  __int64 *v15; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v17[1] = v17;
  v17[0] = v17;
  PopDirectedDripsInsertQueueDevice(v17);
  while ( 1 )
  {
    v5 = v17[0];
    if ( (_QWORD *)v17[0] == v17 )
      return 0;
    if ( *(_QWORD **)(v17[0] + 8LL) != v17 || (v6 = *(_QWORD *)v17[0], *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0]) )
      __fastfail(3u);
    v17[0] = *(_QWORD *)v17[0];
    *(_QWORD *)(v6 + 8) = v17;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    if ( (*(_DWORD *)(v5 + 32) & 0x20000) == 0 )
    {
      PopDirectedDripsVisitDevice(a2, v5, a3, 4LL);
      v7 = (__int64 *)(v5 - 728);
      if ( v5 == 728 )
      {
LABEL_9:
        *(_DWORD *)(v5 + 32) |= 0x40000u;
        PopDirectedDripsDiagTraceProblemDevice(v5 - 728, a3, 3);
        v9 = 3221225659LL;
LABEL_10:
        PopDirectedDripsFlushDeviceQueue(v17, v8, v9);
        return v10;
      }
      while ( (v7[95] & 1) == 0 )
      {
        v7 = (__int64 *)v7[2];
        if ( !v7 )
          goto LABEL_9;
      }
      v11 = PopDirectedDripsVisitPs4Device(v7, v17, a2, a3);
      v9 = (unsigned int)v11;
      if ( v11 < 0 )
        goto LABEL_10;
      v12 = (__int64 *)v7[1];
      v13 = v7;
      while ( v12 )
      {
        v7 = v12;
        v12 = (__int64 *)v12[1];
      }
      while ( v7 != v13 )
      {
        v14 = PopDirectedDripsVisitPs4Device(v7, v17, a2, a3);
        v9 = (unsigned int)v14;
        if ( v14 < 0 )
          goto LABEL_10;
        v15 = (__int64 *)*v7;
        if ( *v7 )
        {
          do
          {
            v7 = v15;
            v15 = (__int64 *)v15[1];
          }
          while ( v15 );
        }
        else
        {
          v7 = (__int64 *)v7[2];
        }
      }
    }
  }
}
