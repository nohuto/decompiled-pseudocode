/*
 * XREFs of ?GetValue@?$SerializedIntegral@I@@QEBAIXZ @ 0x1800C113C
 * Callers:
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0BA0 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SerializedIntegral<unsigned int>::GetValue(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned __int8 *v3; // r9
  unsigned __int64 v4; // rax
  int v5; // ecx

  v1 = 0;
  v3 = (unsigned __int8 *)a1;
  v4 = a1 + 4 >= a1 ? 4 : 0;
  if ( (a1 + 4 >= a1 ? 4 : 0) != 0 )
  {
    do
    {
      v5 = *v3++;
      v1 = v5 | (v1 << 8);
    }
    while ( (unsigned __int64)&v3[-a1] < v4 );
  }
  return v1;
}
