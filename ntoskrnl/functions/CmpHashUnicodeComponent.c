__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // dx

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v5 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v8);
        }
        else
        {
          v5 -= 32;
        }
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
