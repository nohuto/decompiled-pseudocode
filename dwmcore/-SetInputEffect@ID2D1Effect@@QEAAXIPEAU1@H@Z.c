void __fastcall ID2D1Effect::SetInputEffect(ID2D1Effect *this, unsigned int a2, struct ID2D1Effect *a3)
{
  __int64 v3; // r11
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)a3 + 144LL))(a3, &v6);
    v3 = v6;
  }
  (*(void (__fastcall **)(ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)this + 112LL))(this, a2, v3, 1LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
