void __fastcall CBitmapRenderStrategy::GetBitmap(const struct CSurfaceBrush *a1, struct IBitmapResource **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, struct IBitmapResource **); // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapResource **))*((_QWORD *)a1 + 13);
  v3 = 0LL;
  (**v2)(v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, a2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v3);
}
