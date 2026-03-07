void __fastcall CGdiSpriteBitmap::OnMarginsChanged(CGdiSpriteBitmap *this)
{
  void (__fastcall ***v2)(_QWORD, __int128 *); // rcx
  void (__fastcall **v3)(_QWORD, __int128 *); // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall **v9)(__int64, __int128 *); // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, __int128 *))*((_QWORD *)this + 55);
  if ( v2 )
  {
    v3 = *v2;
    v12 = *((_OWORD *)this + 5);
    (*v3)(v2, &v12);
    v4 = *((_QWORD *)this + 56);
    v5 = *((_QWORD *)this + 57);
    while ( v4 != v5 )
    {
      v11 = 0LL;
      v6 = (__int64 *)(*(_QWORD *)v4 + 64LL + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 64LL) + 8LL));
      v7 = *v6;
      *(_QWORD *)&v12 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v7 + 64))(v6, &v12) >= 0 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v11);
        v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v12 + 8) + 4LL) + v12 + 8);
        if ( (**v8)(v8, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v11) >= 0 )
        {
          v9 = *(void (__fastcall ***)(__int64, __int128 *))v11;
          v13 = *((_OWORD *)this + 5);
          (*v9)(v11, &v13);
        }
      }
      if ( v11 )
      {
        v10 = *(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
      v4 += 8LL;
    }
  }
}
