unsigned __int64 __fastcall HalpTimerGetClockRates(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx

  v3 = *(_QWORD *)(a1 + 192);
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 > 0x28 )
    v7 = 0x9896800000000000uLL;
  else
    v7 = 10000000 * (1LL << v5) - 10000000;
  v8 = v7 / v3;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 0x80u) != 0LL )
  {
    LODWORD(v10) = v8;
    v8 = (unsigned int)v8 * (unsigned __int64)*(unsigned int *)(a1 + 216);
  }
  else
  {
    result = 0x989680 / v3;
    v10 = 0x989680 / v3;
  }
  *a2 = v8;
  *a3 = v10;
  return result;
}
