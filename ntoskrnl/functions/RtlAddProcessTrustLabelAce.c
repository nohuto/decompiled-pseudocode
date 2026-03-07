__int64 __fastcall RtlAddProcessTrustLabelAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        char a5,
        int a6)
{
  __int16 v10; // r10
  unsigned int v11; // esi
  unsigned __int8 *v12; // rcx
  unsigned int v13; // edx
  unsigned __int8 *v14; // r8
  unsigned __int16 v15; // dx
  __int64 result; // rax

  if ( !a1 || !(unsigned __int8)RtlValidAcl() )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( (unsigned __int64)a4 <= 0x7FFFFFFF0000LL || (*a4 & 0xF) != 1 || a4[1] > 0xFu )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  v11 = *a1;
  if ( (unsigned __int8)v11 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( v11 <= a2 )
    LOBYTE(v11) = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  v12 = a1 + 8;
  v13 = 0;
  if ( *((_WORD *)a1 + 2) )
  {
    while ( v12 < &a1[*((unsigned __int16 *)a1 + 1)] )
    {
      ++v13;
      v12 += *((unsigned __int16 *)v12 + 1);
      if ( v13 >= *((unsigned __int16 *)a1 + 2) )
        goto LABEL_17;
    }
    return 3221225591LL;
  }
LABEL_17:
  v14 = &a1[*((unsigned __int16 *)a1 + 1)];
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (v10 + 4);
  if ( !v12 || &v12[v15] > v14 )
    return 3221225625LL;
  *((_WORD *)v12 + 1) = v15;
  v12[1] = a3;
  *v12 = 20;
  *((_DWORD *)v12 + 1) = a6;
  memmove(v12 + 8, a4, 4LL * a4[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
