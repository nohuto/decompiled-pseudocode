/*
 * XREFs of AcpiSearchSdevTable @ 0x1C0094DF8
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 *     AcpiIsDeviceSecure @ 0x1C0094C68 (AcpiIsDeviceSecure.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiSearchSdevTable(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  char v4; // si
  unsigned __int64 v5; // rbp
  int i; // r14d
  __int64 v9; // rax
  const char *v10; // rdx
  LONG v11; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = -1;
  v3 = a1 + 36;
  v4 = 0;
  v5 = a1 + *(unsigned int *)(a1 + 4);
  for ( i = 0; v3 + 4 <= v5; ++i )
  {
    v9 = *(unsigned __int16 *)(v3 + 2);
    if ( (unsigned int)v9 < 4 || v3 + v9 > v5 )
      break;
    if ( !*(_BYTE *)v3 )
    {
      v10 = (const char *)(v3 + *(unsigned __int16 *)(v3 + 4));
      DestinationString = 0LL;
      String2 = 0LL;
      RtlInitAnsiString(&DestinationString, v10);
      RtlAnsiStringToUnicodeString(&String2, &DestinationString, 1u);
      v11 = RtlCompareUnicodeString(a2, &String2, 1u);
      RtlFreeUnicodeString(&String2);
      if ( !v11 )
      {
        v4 = 1;
        *a3 = i;
        return v4;
      }
    }
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  return v4;
}
