/*
 * XREFs of ACPIWideStringToAnsiHelper @ 0x1C00281A0
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x1C0027CF0 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0028068 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToPnpID @ 0x1C00280D0 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0028138 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToHardwareID @ 0x1C0055AA8 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToString @ 0x1C0055BDC (ACPIGetConvertToString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIWideStringToAnsiHelper(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // edx
  _BYTE *v4; // r8
  __int64 v5; // r11
  char *v6; // r9
  char v7; // al
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    v2 = 0;
    v3 = a2 >> 1;
    if ( v3 )
    {
      v4 = a1;
      v5 = v3;
      v6 = a1;
      v2 = v3;
      do
      {
        v7 = *v6;
        v6 += 2;
        *v4++ = v7;
        --v5;
      }
      while ( v5 );
    }
    result = v2;
    a1[v2] = 0;
  }
  return result;
}
