bool __fastcall DirectComposition::CGenericMarshaler::SetRemarshalingFlags(DirectComposition::CGenericMarshaler *this)
{
  __int64 *v1; // rax
  __int64 *v2; // r8
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 7);
  v2 = &v1[*((_QWORD *)this + 8)];
  while ( v1 != v2 )
  {
    v3 = *v1++;
    *(_BYTE *)(v3 + 5) = 1;
  }
  return *((_QWORD *)this + 8) != 0LL;
}
