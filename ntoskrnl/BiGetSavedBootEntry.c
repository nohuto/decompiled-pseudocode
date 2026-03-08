/*
 * XREFs of BiGetSavedBootEntry @ 0x14082F250
 * Callers:
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 * Callees:
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSavedBootEntry(__int64 a1, PVOID *a2)
{
  int RegistryValue; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue(a1, L"FirmwareVariable", L"Description", 3u, &P, &v5);
  if ( RegistryValue >= 0 )
  {
    if ( v5 >= 0x1C && *((_DWORD *)P + 1) >= 0x1Cu && *(_DWORD *)P )
    {
      *a2 = P;
      return (unsigned int)RegistryValue;
    }
    RegistryValue = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)RegistryValue;
}
