__int64 __fastcall CD2DGenericInk::IsValid(CD2DGenericInk *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( !*((_QWORD *)this - 4) )
    return 2291674892LL;
  v1 = *(_QWORD *)(*((_QWORD *)this - 11) + 24LL);
  v2 = v1 + 1072;
  if ( !v1 )
    v2 = 1088LL;
  return *(unsigned int *)v2;
}
