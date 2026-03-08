/*
 * XREFs of HalpGetNumberOfSGElementsDmarThin @ 0x140454A50
 * Callers:
 *     HalpBuildScatterGatherListDmarThin @ 0x140511900 (HalpBuildScatterGatherListDmarThin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetNumberOfSGElementsDmarThin(__int64 *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // r11d
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx

  v3 = 0;
  v6 = 0;
  v7 = a3 == 0;
  if ( a3 )
  {
    do
    {
      if ( !a1 )
        break;
      v8 = *((_DWORD *)a1 + 10);
      v9 = v6 + 1;
      a1 = (__int64 *)*a1;
      v10 = v8 - a2;
      v11 = a3;
      a2 = 0;
      if ( v10 <= a3 )
        v11 = v10;
      if ( !v11 )
        v9 = v6;
      v6 = v9;
      a3 -= v11;
    }
    while ( a3 );
    v7 = a3 == 0;
  }
  if ( v7 )
    return v6;
  return v3;
}
