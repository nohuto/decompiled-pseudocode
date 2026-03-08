/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1403557B8
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1403556A4 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140226178 (KiDeferredReadyThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402AE13C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402AF3E4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402AF670 (KiUpdateThreadSchedulingProperties.c)
 *     KiEnterDeferredReadyState @ 0x140341110 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

char __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  __int64 *v5; // rdx
  char v6; // r15
  __int64 v7; // rsi
  volatile signed __int32 *v8; // rdi
  char v9; // al
  char result; // al
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r14
  int v16; // [rsp+78h] [rbp+48h] BYREF
  int v17; // [rsp+80h] [rbp+50h] BYREF
  __int64 v18; // [rsp+88h] [rbp+58h] BYREF

  v18 = 0LL;
  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = 0LL;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v5 = KiProcessorBlock;
      while ( 1 )
      {
        v6 = *(_BYTE *)(a1 + 388);
        v7 = 0LL;
        v8 = 0LL;
        if ( v6 == 1 )
          break;
        switch ( *(_BYTE *)(a1 + 388) )
        {
          case 2:
LABEL_29:
            v13 = *(unsigned int *)(a1 + 536);
            if ( (int)v13 >= 0 )
            {
              v7 = KiProcessorBlock[v13];
              KiAcquirePrcbLocksForIsolationUnit(v7, 0, &v18);
              v14 = a1 == *(_QWORD *)(v7 + 8);
LABEL_31:
              if ( v14 )
                goto LABEL_10;
              goto LABEL_46;
            }
            break;
          case 3:
            v15 = *(unsigned int *)(a1 + 536);
            if ( (int)v15 >= 0 )
            {
              v7 = KiProcessorBlock[v15];
              KiAcquirePrcbLocksForIsolationUnit(v7, 0, &v18);
              if ( a1 == *(_QWORD *)(v7 + 16) )
                goto LABEL_10;
              if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
                __fastfail(0x1Eu);
              goto LABEL_46;
            }
            break;
          case 5:
            v9 = *(_BYTE *)(a1 + 112) & 7;
            if ( v9 == 1 || (unsigned __int8)(v9 - 3) <= 3u )
              goto LABEL_10;
            v6 = 2;
            goto LABEL_29;
          default:
            goto LABEL_10;
        }
      }
      v11 = *(unsigned int *)(a1 + 536);
      if ( (int)v11 >= 0 )
      {
        v7 = KiProcessorBlock[v11];
        KiAcquirePrcbLocksForIsolationUnit(v7, 0, &v18);
        if ( *(_BYTE *)(a1 + 388) == 1 )
        {
          v14 = *(_DWORD *)(a1 + 536) == (_DWORD)v11;
          goto LABEL_31;
        }
LABEL_46:
        KiReleasePrcbLocksForIsolationUnit(&v18);
        continue;
      }
      break;
    }
    v12 = (unsigned int)v11;
    LODWORD(v12) = v11 & 0x7FFFFFFF;
    v17 = 0;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v12] + 34888);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v11 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      continue;
    }
    break;
  }
LABEL_10:
  *(_QWORD *)(a1 + 104) = a2;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  LOBYTE(v5) = v6;
  result = KiUpdateThreadSchedulingProperties(a1, (__int64)v5, v7);
  if ( v6 == 1 && v8 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue((__int64)v8, a1, *(_BYTE *)(a1 + 195));
    result = KiEnterDeferredReadyState(a1);
  }
  if ( v7 )
    result = KiReleasePrcbLocksForIsolationUnit(&v18);
  if ( v8 )
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( CurrentPrcb )
    return KiDeferredReadyThread((__int64)CurrentPrcb, a1);
  return result;
}
