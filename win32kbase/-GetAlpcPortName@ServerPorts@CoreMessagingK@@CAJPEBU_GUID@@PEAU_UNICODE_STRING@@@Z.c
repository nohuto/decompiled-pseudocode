/*
 * XREFs of ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C0604
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00C03A8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00C069C (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C0710 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::GetAlpcPortName(const struct _GUID *a1, struct _UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  UnicodeString = 0LL;
  v3 = RtlStringFromGUID(a1, &UnicodeString);
  if ( v3 >= 0 )
  {
    v3 = RtlStringCbPrintfW(a2->Buffer, a2->MaximumLength, L"\\BaseNamedObjects\\[CoreMsgK]-%s", UnicodeString.Buffer);
    if ( v3 >= 0 )
    {
      v3 = RtlStringCbLengthW(a2->Buffer, a2->MaximumLength, &v6);
      if ( v3 >= 0 )
      {
        v3 = 0;
        a2->Length = v6;
      }
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v3;
}
