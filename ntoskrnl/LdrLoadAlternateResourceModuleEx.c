/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x14035D07C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x14035CFA0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x14035DC3C (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     LdrpKrnGetDataTableEntry @ 0x14035CF08 (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x14035D974 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetResourceFileName @ 0x1403A1D24 (LdrpGetResourceFileName.c)
 *     LdrpMapResourceFile @ 0x1403A2E68 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1403A7A78 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x140791780 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(
        unsigned __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        __int64 *a4,
        int a5)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  PVOID *DataTableEntry; // rax
  __int64 v12; // rdx
  int v13; // edi
  const wchar_t *v14; // r8
  int ResourceFileName; // edi
  __int64 v16; // r8
  __int64 v17; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  __int64 v19; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v21; // [rsp+58h] [rbp-330h]
  __int128 v22; // [rsp+60h] [rbp-328h] BYREF
  PVOID *v23; // [rsp+78h] [rbp-310h]
  unsigned __int16 v24[88]; // [rsp+80h] [rbp-308h] BYREF
  char v25; // [rsp+130h] [rbp-258h] BYREF

  v7 = a2;
  MappedBase = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  memset(v24, 0, 0xAAuLL);
  v19 = 0LL;
  if ( !a1 || !(_WORD)v7 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, (unsigned __int16)v7, &v19, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v19;
    v21 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  v23 = DataTableEntry;
  if ( DataTableEntry )
  {
    *((_QWORD *)&v22 + 1) = &v25;
    LODWORD(v22) = 34078720;
    v13 = a5 & 0x1000000;
    if ( (a5 & 0x1000000) != 0 )
    {
LABEL_14:
      v14 = L".mun";
      if ( !v13 )
        v14 = L".mui";
      LOBYTE(v12) = v13 != 0;
      ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v14, v24, &v22);
      if ( ResourceFileName >= 0 )
      {
        ResourceFileName = LdrpMapResourceFile(
                             a1,
                             (unsigned int)&v22,
                             (unsigned int)&Handle,
                             (unsigned int)&MappedBase,
                             (__int64)&v19);
        if ( ResourceFileName >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)MappedBase | 1, v16, v24, a5) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            ResourceFileName = -1073020926;
          }
        }
      }
      goto LABEL_18;
    }
    if ( (unsigned int)DownLevelLangIDToLanguageName(v7, v24, 85, 2) )
    {
      DataTableEntry = v23;
      goto LABEL_14;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", v7);
  }
  ResourceFileName = -1073020927;
LABEL_18:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v17 = v19;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v7,
    1,
    ResourceFileName,
    v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v17;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
