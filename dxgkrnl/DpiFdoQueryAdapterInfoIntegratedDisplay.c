/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C039806C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0180684 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0180B30 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v5; // rdx
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  _DWORD *Pool2; // rax
  __int64 v11; // r14
  _DWORD *v12; // rsi
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r8
  UINT v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned __int16 *)(a2 + 92);
  v20 = v2;
  memset(&v19, 0, sizeof(v19));
  if ( (unsigned int)v5 <= 0x7C || (*(_WORD *)(a2 + 94) = v5 - 124, (unsigned __int16)(v5 - 124) < 0x80u) )
  {
    WdLogSingleEntry1(2LL, v5);
    return 3221225485LL;
  }
  else
  {
    v8 = (v5 - 124) & 0xFF80;
    *(_WORD *)(a2 + 94) = v8;
    v9 = v8 + 124;
    if ( v9 != (_WORD)v5 )
      WdLogSingleEntry1(3LL, v5 - v9);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, *(unsigned __int16 *)(a2 + 92), 1953656900LL);
    v11 = 0LL;
    v12 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, *(unsigned __int16 *)(a2 + 92));
      v14 = DpiAcquireCoreSyncAccessSafe(a1, 0);
      v13 = v14;
      if ( v14 < 0 )
        goto LABEL_9;
      *(_QWORD *)&v19.Type = 0LL;
      v19.pInputData = &v20;
      v16 = *(unsigned __int16 *)(a2 + 92);
      *(&v19.InputDataSize + 1) = 0;
      v19.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
      *(_OWORD *)&v19.OutputDataSize = 0LL;
      v19.OutputDataSize = v16;
      v19.InputDataSize = 4;
      v19.pOutputData = v12;
      v13 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v3 + 3912), &v19, v15);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)v13 < 0 )
      {
LABEL_9:
        WdLogSingleEntry1(2LL, v13);
      }
      else
      {
        **(_DWORD **)(a2 + 104) = *v12;
        v17 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v17 + 8) = *(_OWORD *)(v12 + 2);
        *(_OWORD *)(v17 + 24) = *(_OWORD *)(v12 + 6);
        *(_OWORD *)(v17 + 40) = *(_OWORD *)(v12 + 10);
        *(_QWORD *)(v17 + 56) = *((_QWORD *)v12 + 7);
        *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v12[16];
        v18 = *(_QWORD *)(a2 + 104);
        *(_OWORD *)(v18 + 68) = *(_OWORD *)(v12 + 17);
        *(_OWORD *)(v18 + 84) = *(_OWORD *)(v12 + 21);
        *(_OWORD *)(v18 + 100) = *(_OWORD *)(v12 + 25);
        *(_DWORD *)(v18 + 116) = v12[29];
        do
        {
          *(_BYTE *)(*(_QWORD *)(a2 + 104) + v11 + 120) = *((_BYTE *)v12 + v11 + 120);
          ++v11;
        }
        while ( v11 < 4 );
        memmove(*(void **)(a2 + 112), v12 + 31, *(unsigned __int16 *)(a2 + 94));
      }
      ExFreePoolWithTag(v12, 0);
    }
    else
    {
      LODWORD(v13) = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
    }
    return (unsigned int)v13;
  }
}
