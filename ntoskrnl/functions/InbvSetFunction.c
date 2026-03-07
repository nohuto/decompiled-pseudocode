__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C6A7C8;
  if ( (unsigned int)(dword_140C6A7C8 - 3) <= 1 )
  {
    if ( qword_140C6A7D0 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140C6A7D0 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140C044E0;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C6A7C8 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C045A0;
    qword_140C6A7D0 = (__int64)v4;
  }
  return result;
}
