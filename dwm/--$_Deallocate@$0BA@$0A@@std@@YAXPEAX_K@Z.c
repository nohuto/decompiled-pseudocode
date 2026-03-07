void __fastcall std::_Deallocate<16,0>(char *a1, unsigned __int64 a2)
{
  char *v2; // r8
  unsigned __int64 v3; // rdx
  char *v4; // rcx

  if ( a2 >= 0x1000 )
  {
    v2 = (char *)*((_QWORD *)a1 - 1);
    v3 = a2 + 39;
    v4 = (char *)(a1 - v2);
    if ( (unsigned __int64)(v4 - 8) > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v4, v3);
      __debugbreak();
      JUMPOUT(0x14000C4BFLL);
    }
    a1 = v2;
  }
  operator delete(a1);
}
