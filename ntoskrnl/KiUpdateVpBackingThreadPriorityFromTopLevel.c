/*
 * XREFs of KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14056BAF0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056C4D8 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiComputePriorityFloor @ 0x140229E28 (KiComputePriorityFloor.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14040A618 (KiReadGuestSchedulerAssistPriority.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x14056B928 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1405FB458 (EtwTraceXSchedulerPriorityUpdate.c)
 */

char __fastcall KiUpdateVpBackingThreadPriorityFromTopLevel(ULONG_PTR BugCheckParameter1, unsigned __int64 a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // r12d
  char v7; // cl
  char v8; // al
  char v9; // al
  int v10; // r15d
  char v11; // al
  int v12; // r14d
  volatile signed __int32 *v13; // rax
  char v14; // r13
  _QWORD *v15; // rdi
  volatile signed __int32 *v16; // r14
  char v17; // al
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // ecx
  volatile signed __int32 **v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // ecx
  unsigned int v29; // ecx
  volatile signed __int32 **v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r8
  int v34; // [rsp+30h] [rbp-30h] BYREF
  __int64 v35; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v37; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-10h] BYREF
  int v39; // [rsp+A0h] [rbp+40h] BYREF
  int v40; // [rsp+B0h] [rbp+50h]
  int v41; // [rsp+B8h] [rbp+58h]

  v19 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v36 = 0LL;
  if ( !v19 )
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v4 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v36);
  v5 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v6 = v4;
  if ( v4 != v5 )
  {
    v7 = *(_BYTE *)((char)v4 + BugCheckParameter1 + 824);
    if ( v7 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v4, 1uLL, 0LL);
    *(_BYTE *)((char)v4 + BugCheckParameter1 + 824) = v7 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v4;
    if ( v5 != 32 )
    {
      v8 = *(_BYTE *)((char)v5 + BugCheckParameter1 + 824);
      if ( !v8 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v5, 2uLL, 0LL);
      v9 = v8 - 1;
      *(_BYTE *)((char)v5 + BugCheckParameter1 + 824) = v9;
      if ( !v9 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v5;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v6;
  }
  v10 = *(char *)(BugCheckParameter1 + 195);
  v41 = v10;
  v11 = KiComputePriorityFloor(BugCheckParameter1, v6);
  v12 = v11;
  v40 = v11;
  if ( v11 != v10 )
  {
    KiSetBasePriorityAndClearDecrement(BugCheckParameter1, 0LL, 0);
    KiSetPriorityThread(BugCheckParameter1, a2, v12);
  }
  v39 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v39);
  LODWORD(v13) = *(_DWORD *)(BugCheckParameter1 + 512);
  if ( v39 == (unsigned __int8)v13 )
    goto LABEL_67;
  v35 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE *)(BugCheckParameter1 + 388);
      v15 = 0LL;
      v16 = 0LL;
      if ( v14 == 1 )
        break;
      switch ( *(_BYTE *)(BugCheckParameter1 + 388) )
      {
        case 2:
LABEL_23:
          v18 = *(unsigned int *)(BugCheckParameter1 + 536);
          if ( (int)v18 >= 0 )
          {
            v15 = (_QWORD *)KiProcessorBlock[v18];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v35);
            v19 = BugCheckParameter1 == v15[1];
LABEL_40:
            if ( v19 )
              goto LABEL_42;
LABEL_41:
            KiReleasePrcbLocksForIsolationUnit(&v35);
          }
          break;
        case 3:
          v20 = *(unsigned int *)(BugCheckParameter1 + 536);
          if ( (int)v20 >= 0 )
          {
            v15 = (_QWORD *)KiProcessorBlock[v20];
            KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v35);
            if ( BugCheckParameter1 == v15[2] )
              goto LABEL_42;
            if ( *(_BYTE *)(BugCheckParameter1 + 388) == 3 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v20 )
              __fastfail(0x1Eu);
            goto LABEL_41;
          }
          break;
        case 5:
          v17 = *(_BYTE *)(BugCheckParameter1 + 112) & 7;
          if ( v17 == 1 || (unsigned __int8)(v17 - 3) <= 3u )
            goto LABEL_42;
          v14 = 2;
          goto LABEL_23;
        default:
          goto LABEL_42;
      }
    }
    v21 = *(unsigned int *)(BugCheckParameter1 + 536);
    if ( (int)v21 >= 0 )
    {
      v15 = (_QWORD *)KiProcessorBlock[v21];
      KiAcquirePrcbLocksForIsolationUnit((__int64)v15, 0, &v35);
      if ( *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
        goto LABEL_41;
      v19 = *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v21;
      goto LABEL_40;
    }
    v22 = (unsigned int)v21;
    LODWORD(v22) = v21 & 0x7FFFFFFF;
    v34 = 0;
    v16 = *(volatile signed __int32 **)(KiProcessorBlock[v22] + 34888);
    while ( _interlockedbittestandset64(v16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(_QWORD *)v16 );
    }
    if ( *(_BYTE *)(BugCheckParameter1 + 388) == 1 && *(_DWORD *)(BugCheckParameter1 + 536) == (_DWORD)v21 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
  }
LABEL_42:
  LOBYTE(v13) = KiSetThreadQosLevelUnsafe(BugCheckParameter1, v39);
  if ( v14 == 2 )
  {
    if ( v15[2] )
      goto LABEL_62;
    v28 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
    v38 = v15;
    if ( (v28 & 1) != 0 )
    {
      v13 = (volatile signed __int32 *)v15[4363];
      v29 = *(unsigned __int8 *)v13;
      v30 = (volatile signed __int32 **)(v13 + 2);
      if ( !*(_BYTE *)v13 )
        goto LABEL_62;
    }
    else
    {
      v30 = (volatile signed __int32 **)&v38;
      v29 = 1;
    }
    v31 = v29;
    do
    {
      v13 = *v30;
      v32 = *((_QWORD *)*v30 + 7);
      if ( KeHeteroSystem )
      {
        LOBYTE(v13) = (*(_BYTE *)(BugCheckParameter1 + 512) ^ *(_BYTE *)(v32 + 64)) & 7 ^ *(_BYTE *)(v32 + 64);
        *(_BYTE *)(v32 + 64) = (_BYTE)v13;
      }
      ++v30;
      --v31;
    }
    while ( v31 );
  }
  else if ( v14 == 3 )
  {
    v23 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
    v37 = v15;
    if ( (v23 & 1) != 0 )
    {
      v13 = (volatile signed __int32 *)v15[4363];
      v24 = *(unsigned __int8 *)v13;
      v25 = (volatile signed __int32 **)(v13 + 2);
      if ( *(_BYTE *)v13 )
        goto LABEL_48;
    }
    else
    {
      v25 = (volatile signed __int32 **)&v37;
      v24 = 1;
LABEL_48:
      v26 = v24;
      do
      {
        v13 = *v25;
        v27 = *((_QWORD *)*v25 + 7);
        if ( KeHeteroSystem )
        {
          LOBYTE(v13) = (*(_BYTE *)(BugCheckParameter1 + 512) ^ *(_BYTE *)(v27 + 64)) & 7 ^ *(_BYTE *)(v27 + 64);
          *(_BYTE *)(v27 + 64) = (_BYTE)v13;
        }
        ++v25;
        --v26;
      }
      while ( v26 );
    }
  }
LABEL_62:
  if ( v15 )
    LOBYTE(v13) = KiReleasePrcbLocksForIsolationUnit(&v35);
  v10 = v41;
  if ( v16 )
    _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
  v12 = v40;
LABEL_67:
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v13 = *(volatile signed __int32 **)(BugCheckParameter1 + 968);
    _InterlockedAnd(v13, 0xFFEFFFFF);
  }
  if ( v10 != v12 )
  {
    LOBYTE(v13) = BYTE4(xmmword_140D1EAD0);
    if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
      LOBYTE(v13) = EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v10, v6, v12, (__int64)&v36);
  }
  return (char)v13;
}
