char __fastcall CCompositionSurfaceBitmap::IsOpaque(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  void (__fastcall ***v6)(_QWORD, __int64 *); // rcx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
  {
    if ( *((_BYTE *)this + 120) )
      return 1;
    v4 = *((_QWORD *)this + 4);
    v5 = 0LL;
    if ( v4 )
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, 0LL);
    if ( v5 )
    {
      v6 = (void (__fastcall ***)(_QWORD, __int64 *))(v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL));
      (**v6)(v6, &v9);
      v7 = HIDWORD(v9);
      if ( *((_BYTE *)this + 120) )
        v7 = 3;
      HIDWORD(v9) = v7;
    }
    else
    {
      v7 = *((_BYTE *)this + 120) != 0 ? 3 : 0;
    }
    if ( v7 == 3 )
      return 1;
  }
  return v2;
}
