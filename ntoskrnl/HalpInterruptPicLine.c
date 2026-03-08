/*
 * XREFs of HalpInterruptPicLine @ 0x140376444
 * Callers:
 *     HalpInterruptMaskAcpi @ 0x140A92308 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptPicLine(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = a2;
  if ( a2 >= 8 )
    v2 = a2 - 8;
  result = 45057 - (unsigned int)(a2 < 8);
  *a1 = result;
  a1[1] = v2;
  return result;
}
