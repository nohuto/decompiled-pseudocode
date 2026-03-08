/*
 * XREFs of KeQuerySecureSpeculationInformation @ 0x140571664
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslGetSecureSpeculationControlInformation @ 0x140384704 (VslGetSecureSpeculationControlInformation.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeQuerySecureSpeculationInformation(unsigned int *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // r14
  int SecureSpeculationControlInformation; // esi
  unsigned int v8; // eax

  v4 = (unsigned int)Size;
  SecureSpeculationControlInformation = VslGetSecureSpeculationControlInformation();
  *a3 = 8;
  if ( (unsigned int)v4 < 4 )
    return 3221225476LL;
  memset(a1, 0, v4);
  if ( (SecureSpeculationControlInformation & 1) != 0 )
    *a1 |= 1u;
  if ( (SecureSpeculationControlInformation & 2) != 0 )
    *a1 |= 2u;
  if ( (SecureSpeculationControlInformation & 4) != 0 )
  {
    *a1 |= 4u;
    v8 = *a1 & 0xFFFFFFF7;
LABEL_11:
    *a1 = v8;
    goto LABEL_12;
  }
  if ( (SecureSpeculationControlInformation & 8) != 0 )
  {
    *a1 |= 8u;
    v8 = *a1 & 0xFFFFFFFB;
    goto LABEL_11;
  }
LABEL_12:
  if ( (SecureSpeculationControlInformation & 0x100) != 0 )
    *a1 |= 0x40u;
  if ( (SecureSpeculationControlInformation & 0x200) != 0 )
    *a1 |= 0x80u;
  if ( (SecureSpeculationControlInformation & 0x400) != 0 )
    *a1 |= 0x100u;
  if ( (SecureSpeculationControlInformation & 0x2000) != 0 )
    *a1 |= 0x200u;
  if ( (SecureSpeculationControlInformation & 0x4000) != 0 )
    *a1 |= 0x400u;
  if ( (SecureSpeculationControlInformation & 0x8000) != 0 )
    *a1 |= 0x800u;
  if ( (SecureSpeculationControlInformation & 0x800) != 0 )
    *a1 |= 0x1000u;
  if ( (SecureSpeculationControlInformation & 0x1000) != 0 )
    *a1 |= 0x2000u;
  if ( (SecureSpeculationControlInformation & 0x10000) != 0 )
    *a1 |= 0x20u;
  if ( (SecureSpeculationControlInformation & 0x20000) != 0 )
    *a1 |= 0x10u;
  if ( (SecureSpeculationControlInformation & 0x40000) != 0 )
    *a1 |= 0x4000u;
  if ( (SecureSpeculationControlInformation & 0x80000) != 0 )
    *a1 |= 0x8000u;
  return 0LL;
}
