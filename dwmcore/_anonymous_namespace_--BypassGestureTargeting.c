char __fastcall anonymous_namespace_::BypassGestureTargeting(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  v5 = 0;
  if ( v4 )
  {
    v6 = *a1;
    v7 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
    if ( !(*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 32))(a1, v7) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 80LL))(v8, a2, 2LL) )
        v5 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 120))(a1) == 0;
    }
    LOBYTE(v4) = v5;
  }
  return v4;
}
