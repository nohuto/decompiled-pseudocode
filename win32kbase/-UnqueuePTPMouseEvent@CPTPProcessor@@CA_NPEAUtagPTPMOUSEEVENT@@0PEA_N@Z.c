/*
 * XREFs of ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C00F3750
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00F35E0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

char __fastcall CPTPProcessor::UnqueuePTPMouseEvent(
        struct tagPTPMOUSEEVENT *a1,
        struct tagPTPMOUSEEVENT *a2,
        bool *a3,
        __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r14
  __int64 v18; // r13
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rax
  unsigned __int64 v32; // rcx

  v7 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v7 + 3600);
  *a3 = 0;
  v14 = SGDGetUserSessionState(v9, v8, v10, v11);
  if ( *(_DWORD *)(v14 + 3596) )
  {
    v17 = 1;
    v18 = SGDGetUserSessionState(v13, v12, v15, v16);
    v19 = (*(_BYTE *)(v18 + 3592) - *(_BYTE *)(v14 + 3596) + 1) & 0x3F;
    v24 = SGDGetUserSessionState(v21, v20, v22, v23);
    v28 = (unsigned __int64)v19 << 7;
    *(_OWORD *)a1 = *(_OWORD *)(v28 + v24 + 3616);
    *((_OWORD *)a1 + 1) = *(_OWORD *)(v28 + v24 + 3632);
    *((_OWORD *)a1 + 2) = *(_OWORD *)(v28 + v24 + 3648);
    *((_OWORD *)a1 + 3) = *(_OWORD *)(v28 + v24 + 3664);
    *((_OWORD *)a1 + 4) = *(_OWORD *)(v28 + v24 + 3680);
    *((_OWORD *)a1 + 5) = *(_OWORD *)(v28 + v24 + 3696);
    *((_OWORD *)a1 + 6) = *(_OWORD *)(v28 + v24 + 3712);
    *((_OWORD *)a1 + 7) = *(_OWORD *)(v28 + v24 + 3728);
    v29 = *(_DWORD *)(v14 + 3596) - 1;
    *(_DWORD *)(v14 + 3596) = v29;
    if ( v29 )
    {
      v30 = ((unsigned __int8)*(_DWORD *)(v18 + 3592) - (_BYTE)v29 + 1) & 0x3F;
      v31 = SGDGetUserSessionState(v28, v25, v26, v27);
      v32 = (unsigned __int64)v30 << 7;
      *a3 = 1;
      *(_OWORD *)a2 = *(_OWORD *)(v32 + v31 + 3616);
      *((_OWORD *)a2 + 1) = *(_OWORD *)(v32 + v31 + 3632);
      *((_OWORD *)a2 + 2) = *(_OWORD *)(v32 + v31 + 3648);
      *((_OWORD *)a2 + 3) = *(_OWORD *)(v32 + v31 + 3664);
      *((_OWORD *)a2 + 4) = *(_OWORD *)(v32 + v31 + 3680);
      *((_OWORD *)a2 + 5) = *(_OWORD *)(v32 + v31 + 3696);
      *((_OWORD *)a2 + 6) = *(_OWORD *)(v32 + v31 + 3712);
      *((_OWORD *)a2 + 7) = *(_OWORD *)(v32 + v31 + 3728);
    }
  }
  else
  {
    v17 = 0;
  }
  *(_QWORD *)(v7 + 3608) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 3600, 0LL);
  KeLeaveCriticalRegion();
  return v17;
}
