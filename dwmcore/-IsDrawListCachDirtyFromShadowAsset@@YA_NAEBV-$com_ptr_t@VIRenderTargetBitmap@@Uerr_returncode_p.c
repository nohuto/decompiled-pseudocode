bool __fastcall IsDrawListCachDirtyFromShadowAsset(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v3; // bl
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0;
  v7 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL));
  if ( (**v5)(v5, &GUID_93cf258b_6b62_4f00_89f1_7bf8602fdadb, &v7) >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) > a2;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
  return v3;
}
