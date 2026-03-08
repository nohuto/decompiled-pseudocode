/*
 * XREFs of IoIsValidIrpStatus @ 0x140ABFF50
 * Callers:
 *     ViGenericIsValidIrpStatus @ 0x140AC00A0 (ViGenericIsValidIrpStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsValidIrpStatus(unsigned int a1)
{
  unsigned int v1; // r8d
  bool result; // al
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  v1 = (unsigned __int16)a1;
  if ( (a1 & 0x20000000) != 0 )
    return 1;
  result = 0;
  v3 = a1 & 0xFFF0000;
  if ( (a1 & 0xFFF0000) >= 0xED0000 )
    return result;
  v4 = a1 >> 30;
  if ( !v4 )
    return v1 < 0x250;
  v5 = v4 - 1;
  if ( !v5 )
    return v1 < 0x400;
  if ( v5 != 1 || v3 == 458752 || v1 < 0x400 )
    return 1;
  return result;
}
