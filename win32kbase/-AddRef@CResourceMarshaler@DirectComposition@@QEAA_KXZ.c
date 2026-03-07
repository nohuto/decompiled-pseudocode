unsigned __int64 __fastcall DirectComposition::CResourceMarshaler::AddRef(DirectComposition::CResourceMarshaler *this)
{
  __int64 v1; // rax
  bool v2; // zf
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 3);
  v2 = v1 == -1;
  result = v1 + 1;
  *((_QWORD *)this + 3) = result;
  if ( v2 )
    KeBugCheck(0xC01E0103);
  return result;
}
