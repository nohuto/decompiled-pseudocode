__int64 __fastcall CPreComputeContext::CollectAdditionalDirtyRects(
        CPreComputeContext *this,
        struct CVisual *a2,
        struct CPreComputeContext::SubTreeContext *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v6; // r9
  __int64 (__fastcall *v7)(struct CVisual *, _QWORD, _QWORD, const struct CMILMatrix *, __int64); // r11
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  if ( *((_DWORD *)a3 + 98) )
    CBaseClipStack::Top((unsigned int *)a3 + 98, &v9);
  TopByReference = CMatrixStack::GetTopByReference((struct CPreComputeContext::SubTreeContext *)((char *)a3 + 360));
  return v7(a2, *((_QWORD *)a3 + 54), *((_QWORD *)a3 + 53), TopByReference, v6);
}
