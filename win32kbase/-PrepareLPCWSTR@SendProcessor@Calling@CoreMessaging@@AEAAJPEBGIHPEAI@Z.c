__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(
        CoreMessaging::Calling::SendProcessor *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rax

  *a5 = 0;
  if ( a4 )
  {
    v5 = 2LL * (unsigned int)(a3 + 1);
    if ( is_mul_ok(2uLL, (unsigned int)(a3 + 1)) && v5 <= 0xFFFFFFFF )
      goto LABEL_4;
  }
  else
  {
    if ( !a2 )
      return 0LL;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( v5 <= 0x3FFFFFFE )
    {
      LODWORD(v5) = 2 * v5 + 2;
LABEL_4:
      *a5 = v5;
      return 0LL;
    }
  }
  *((_DWORD *)this + 30) = 7;
  return 2147942487LL;
}
