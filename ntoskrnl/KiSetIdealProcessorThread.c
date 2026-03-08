/*
 * XREFs of KiSetIdealProcessorThread @ 0x1403C93BC
 * Callers:
 *     KeSetIdealProcessorThreadEx @ 0x1403C9248 (KeSetIdealProcessorThreadEx.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140574290 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140238A10 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiCheckPrcbAffinityEx @ 0x1402ADF54 (KiCheckPrcbAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiSetIdealProcessorThread(__int64 a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  _WORD *v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 *v13; // r11
  __int64 v14; // rbp
  volatile signed __int32 *v15; // rsi
  __int64 v16; // rax
  bool v17; // zf
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v24 = 0LL;
  if ( !a3 && (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v9 = *(_WORD **)(a1 + 552);
    v8 = *(_DWORD *)(a1 + 196);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 588);
    v9 = *(_WORD **)(a1 + 576);
  }
  if ( a4 )
    *a4 = v8;
  v10 = KiProcessorBlock[a2];
  if ( !KiCheckPrcbAffinityEx(v9, v10) )
    return (unsigned int)-1073741823;
  if ( (*(_DWORD *)(v12 + v11) & 8) != 0 && !a3 )
  {
    *(_DWORD *)(a1 + 196) = a2;
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
    return v4;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = 0LL;
      v15 = 0LL;
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_10:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v14 = v13[v16];
            KiAcquirePrcbLocksForIsolationUnit(v14, 0, &v24);
            v17 = a1 == *(_QWORD *)(v14 + 8);
            goto LABEL_12;
          }
          break;
        case 3:
          v20 = *(unsigned int *)(a1 + 536);
          if ( (int)v20 >= 0 )
          {
            v14 = v13[v20];
            KiAcquirePrcbLocksForIsolationUnit(v14, 0, &v24);
            if ( a1 == *(_QWORD *)(v14 + 16) )
              goto LABEL_13;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v20 )
              __fastfail(0x1Eu);
            goto LABEL_44;
          }
          break;
        case 5:
          v19 = *(_BYTE *)(a1 + 112) & 7;
          if ( v19 == 1 || (unsigned __int8)(v19 - 3) <= 3u )
            goto LABEL_13;
          goto LABEL_10;
        default:
          goto LABEL_13;
      }
    }
    v21 = *(unsigned int *)(a1 + 536);
    if ( (int)v21 < 0 )
      break;
    v14 = v13[v21];
    KiAcquirePrcbLocksForIsolationUnit(v14, 0, &v24);
    if ( *(_BYTE *)(a1 + 388) == 1 )
    {
      v17 = *(_DWORD *)(a1 + 536) == (_DWORD)v21;
LABEL_12:
      if ( v17 )
        goto LABEL_13;
    }
LABEL_44:
    KiReleasePrcbLocksForIsolationUnit(&v24);
LABEL_45:
    v13 = KiProcessorBlock;
  }
  v22 = (unsigned int)v21;
  v23 = 0;
  LODWORD(v22) = v21 & 0x7FFFFFFF;
  v15 = *(volatile signed __int32 **)(v13[v22] + 34888);
  while ( _interlockedbittestandset64(v15, 0LL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(_QWORD *)v15 );
  }
  if ( *(_BYTE *)(a1 + 388) != 1 || *(_DWORD *)(a1 + 536) != (_DWORD)v21 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    goto LABEL_45;
  }
LABEL_13:
  *(_DWORD *)(a1 + 588) = a2;
  *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 196) = a2;
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
  }
  KiUpdateSharedReadyQueueAffinityThread(v10, a1);
  if ( v14 )
    KiReleasePrcbLocksForIsolationUnit(&v24);
  if ( v15 )
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
  return v4;
}
