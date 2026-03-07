__int64 __fastcall vDLOrderDispositionCompare(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = **a1;
  v3 = **a2;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
