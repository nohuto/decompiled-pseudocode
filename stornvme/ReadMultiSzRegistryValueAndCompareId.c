/*
 * XREFs of ReadMultiSzRegistryValueAndCompareId @ 0x1C0027934
 * Callers:
 *     GetDynamicRegistrySettings @ 0x1C0025C98 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x1C0025E60 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C00276D0 (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     CompareId @ 0x1C0025AD8 (CompareId.c)
 *     WMultiStringToAscii @ 0x1C0027B30 (WMultiStringToAscii.c)
 */

bool __fastcall ReadMultiSzRegistryValueAndCompareId(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char **a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  char v12; // al
  char v13; // bl
  char *RegistryBuffer; // rax
  char *v16; // rcx
  int i; // edx
  unsigned int v18; // eax

  v12 = StorPortRegistryRead(a1, a2, 1LL);
  v13 = 0;
  if ( v12 )
  {
LABEL_8:
    if ( v12 == 1 && *a6 >= 2 && *a5 >= 2 )
    {
      v16 = *a4;
      if ( **a4 || v16[1] )
      {
        for ( i = 0; i < 2; ++i )
        {
          v18 = *a5 - i;
          v16[v18 - 1] = 0;
        }
        WMultiStringToAscii(v16, *a6);
        return CompareId(a7, a8, *a4, *a6, a9);
      }
    }
    return v13;
  }
  if ( *a6 > *a5 )
  {
    StorPortFreeRegistryBuffer(a1);
    *a5 = *a6;
    RegistryBuffer = (char *)StorPortAllocateRegistryBuffer(a1, a6);
    *a4 = RegistryBuffer;
    if ( !RegistryBuffer )
      return 0;
    if ( *a6 < *a5 )
    {
      StorPortFreeRegistryBuffer(a1);
      *a4 = 0LL;
      return 0;
    }
    NVMeZeroMemory(RegistryBuffer, *a5);
    v12 = StorPortRegistryRead(a1, a2, 1LL);
    goto LABEL_8;
  }
  return v13;
}
