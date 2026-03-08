/*
 * XREFs of ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18028061C
 * Callers:
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180281414 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?Add@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAHAEBQEAVCBufferedOutputPointer@@@Z @ 0x18028055C (-Add@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@Q.c)
 *     ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x180280744 (-BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z.c)
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180280DF8 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 *     ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x180281340 (-Insert@-$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::AddBufferedOutput(
        CInteractionContextWrapper *this,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        const struct INTERACTION_CONTEXT_OUTPUT *a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v15; // [rsp+20h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+48h] [rbp+0h]

  CInteractionContextWrapper::BoundBufferedOutput(this, a4);
  v9 = -2147024882;
  v10 = DefaultHeap::AllocClear(0x60uLL);
  v11 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v10 = 0LL;
  v10[2] = 0;
  memset_0(v10 + 3, 0, 0x50uLL);
  if ( a5 )
  {
    *(_QWORD *)v11 = a4;
    v11[2] = a3;
    *(_OWORD *)(v11 + 3) = *(_OWORD *)a5;
    *(_OWORD *)(v11 + 7) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v11 + 11) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v11 + 15) = *((_OWORD *)a5 + 3);
    *(_OWORD *)(v11 + 19) = *((_OWORD *)a5 + 4);
    v9 = CQueue<CBufferedInteractionOutput *>::Insert((char *)this + 536, v12, v11);
  }
  if ( !CInteractionContextWrapper::FindBufferedOutputPointer(this, a2) )
  {
    v13 = DefaultHeap::AllocClear(8uLL);
    if ( !v13 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v13[4] = 0;
    v15 = v13;
    *(_DWORD *)v13 = a2;
    CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::Add((int *)this + 150, &v15);
  }
  return v9;
}
