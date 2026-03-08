/*
 * XREFs of KiPcToFileHeader @ 0x140568594
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x1405680C8 (KiDumpParameterImages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

PVOID __fastcall KiPcToFileHeader(unsigned __int64 a1, PVOID **a2, int a3, _BYTE *a4)
{
  PVOID *v8; // rsi
  PVOID *v9; // rbx
  PVOID v10; // rdi
  unsigned int v11; // ebp
  PVOID *v12; // rcx
  PVOID v13; // rdx

  if ( (unsigned int)InitializationPhase >= 2 )
    v8 = &PsLoadedModuleList;
  else
    v8 = (PVOID *)(KeLoaderBlock_0 + 16);
  v9 = (PVOID *)*v8;
  v10 = 0LL;
  *a4 = 0;
  if ( v9 )
  {
    v11 = 0;
    while ( v9 != v8 )
    {
      if ( !MmIsAddressValidEx((__int64)v9) )
        return 0LL;
      if ( ++v11 <= 2 && a3 == 1 )
      {
        v9 = (PVOID *)*v9;
      }
      else
      {
        v12 = v9;
        v9 = (PVOID *)*v9;
        v13 = v12[6];
        if ( a1 >= (unsigned __int64)v13 && a1 < (unsigned __int64)v13 + *((unsigned int *)v12 + 16) )
        {
          *a2 = v12;
          v10 = v13;
          if ( v11 <= 2 )
            *a4 = 1;
          return v10;
        }
      }
    }
  }
  return v10;
}
