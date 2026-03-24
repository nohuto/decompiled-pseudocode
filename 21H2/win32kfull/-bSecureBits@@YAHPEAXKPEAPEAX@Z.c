/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02B1E54
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C0129060 (NtGdiEngCreatePalette.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall bSecureBits(char *Address, SIZE_T Size, void **a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // ebx
  char *v7; // rcx
  HANDLE v8; // rax

  v4 = (unsigned int)Size;
  v6 = 1;
  *a3 = 0LL;
  if ( Address )
  {
    if ( (_DWORD)Size )
    {
      v7 = &Address[(unsigned int)Size];
      if ( (unsigned __int64)v7 > MmUserProbeAddress || v7 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage() )
      v8 = (HANDLE)GrepSecureVirtualMemory(Address, v4, 2LL);
    else
      v8 = MmSecureVirtualMemory(Address, v4, 2u);
    *a3 = v8;
    return v8 != 0LL;
  }
  return v6;
}
