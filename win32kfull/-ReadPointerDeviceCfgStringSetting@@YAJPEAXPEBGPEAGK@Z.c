/*
 * XREFs of ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C010A340
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C01075C4 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F4520 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall ReadPointerDeviceCfgStringSetting(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        unsigned __int16 *a3,
        unsigned int a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  v8 = -1073741595;
  DestinationString = 0LL;
  Length = 2 * a4 + 12;
  v9 = Win32AllocPoolWithQuotaZInit(Length, 2020635477LL);
  if ( v9 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)v9, Length, &Length);
    if ( v8 >= 0 )
    {
      v10 = a4;
      if ( *(_DWORD *)(v9 + 8) >> 1 < a4 )
        v10 = *(_DWORD *)(v9 + 8) >> 1;
      if ( *(_DWORD *)(v9 + 8) < 2u )
      {
        v8 = -1073741595;
      }
      else
      {
        *(_WORD *)(v9 + 2LL * (v10 - 1) + 12) = 0;
        v8 = RtlStringCchCopyW(a3, a4, (const unsigned __int16 *)(v9 + 12));
      }
    }
    Win32FreePool((void *)v9);
  }
  return (unsigned int)v8;
}
