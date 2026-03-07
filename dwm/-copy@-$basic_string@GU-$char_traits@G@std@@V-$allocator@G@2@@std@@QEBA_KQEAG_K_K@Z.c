unsigned __int64 __fastcall std::wstring::copy(_QWORD *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx

  v3 = a3;
  if ( Src[2] < a3 )
    v3 = Src[2];
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  memcpy_0(a2, Src, 2 * v3);
  return v3;
}
