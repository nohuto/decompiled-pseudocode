/*
 * XREFs of ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::EnumerateBrushes(
        CMultiPrimitiveDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  unsigned int v4; // esi
  __int128 *v6; // rbx
  int v9; // r12d
  __int128 *v10; // rdi
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx

  v4 = 0;
  v6 = (__int128 *)*((_QWORD *)this + 11);
  v9 = *(_DWORD *)(*((_QWORD *)this + 9) + 48LL);
  v10 = &v6[*((_QWORD *)this + 10)];
  while ( v6 != v10 )
  {
    v11 = *((_QWORD *)this + 9);
    v12 = *v6;
    *(_BYTE *)(v11 + 52) = 1;
    *(_OWORD *)(v11 + 32) = v12;
    *(_DWORD *)(v11 + 48) = v9;
    v13 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x47u, 0LL);
      return v4;
    }
    ++v6;
  }
  return v4;
}
