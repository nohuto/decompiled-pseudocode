char __fastcall anonymous_namespace_::DisableBufferingForInteraction(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl

  v6 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1)
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2)
     || anonymous_namespace_::AllSupportedWithSingleTarget(a1, a3)) )
  {
    return 1;
  }
  return v6;
}
