/*
 * XREFs of MiWriteValidPteNewPage @ 0x140211DE8
 * Callers:
 *     MiTradeActivePage @ 0x140211BC0 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiCopyKstack @ 0x14062A6D0 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x140649F5C (MiWriteAweClusterPte.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B50198 (MxSwapPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf

  v3 = a3;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE(a1);
  result = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = result ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return result;
  }
  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v10, v9, v11);
    if ( (_DWORD)result )
    {
      v3 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_5;
      v12 = (v8 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v12 = (v8 & 1) == 0;
    }
    if ( !v12 )
    {
      result = 0x8000000000000000uLL;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *a1 = v8;
  if ( v3 )
    return MiWritePteShadow(a1, v8);
  return result;
}
