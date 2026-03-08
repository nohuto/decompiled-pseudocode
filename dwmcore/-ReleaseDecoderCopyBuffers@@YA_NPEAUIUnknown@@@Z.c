/*
 * XREFs of ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1802BC72C
 * Callers:
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B83B0 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall ReleaseDecoderCopyBuffers(struct IUnknown *a1)
{
  struct IUnknownVtbl *lpVtbl; // rax
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  lpVtbl = a1->lpVtbl;
  v2 = 0;
  v4 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a1,
    &IID_IWICDecoderBitmapSource,
    &v4);
  if ( v4 )
  {
    v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) == 0;
    (*(void (**)(void))(*(_QWORD *)v4 + 16LL))();
  }
  return v2;
}
