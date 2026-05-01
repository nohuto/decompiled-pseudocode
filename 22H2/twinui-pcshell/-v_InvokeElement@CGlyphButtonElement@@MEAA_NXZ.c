/*
 * XREFs of ?v_InvokeElement@CGlyphButtonElement@@MEAA_NXZ @ 0x180422750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlyphButtonElement::v_InvokeElement(CGlyphButtonElement *this)
{
  __int64 v1; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 48);
  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 24LL))(
         v1,
         &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8,
         &v4) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 40LL))(v4, (char *)this + 216);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return 1;
}
