/*
 * XREFs of ReadMultiSzRegistryValueAndCompareId @ 0x1C0001870
 * Callers:
 *     GetRegistrySettings @ 0x1C000B42C (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C0025594 (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     CompareId @ 0x1C00012D8 (CompareId.c)
 *     WMultiStringToAscii @ 0x1C0001950 (WMultiStringToAscii.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
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
  char *v15; // rcx
  int i; // edx
  int v17; // eax
  __int64 RegistryBuffer; // rax
  __int64 v19; // rdx

  v12 = StorPortRegistryRead(a1, a2, 1LL);
  v13 = 0;
  if ( v12 )
    goto LABEL_4;
  if ( *a6 <= *a5 )
    return v13;
  StorPortFreeRegistryBuffer(a1, *a4);
  *a5 = *a6;
  RegistryBuffer = StorPortAllocateRegistryBuffer(a1, a6);
  *a4 = (char *)RegistryBuffer;
  if ( RegistryBuffer )
  {
    v19 = *a5;
    if ( *a6 < (unsigned int)v19 )
    {
      StorPortFreeRegistryBuffer(a1, RegistryBuffer);
      *a4 = 0LL;
      return 0;
    }
    NVMeZeroMemory(RegistryBuffer, v19);
    v12 = StorPortRegistryRead(a1, a2, 1LL);
LABEL_4:
    if ( v12 == 1 && *a6 >= 2 && *a5 >= 2 )
    {
      v15 = *a4;
      if ( **a4 || v15[1] )
      {
        for ( i = 0; i < 2; ++i )
        {
          v17 = *a5 - i;
          v15[v17 - 1] = 0;
        }
        WMultiStringToAscii(v15, *a6);
        return CompareId(a7, a8, *a4, *a6, a9);
      }
    }
    return v13;
  }
  return 0;
}
