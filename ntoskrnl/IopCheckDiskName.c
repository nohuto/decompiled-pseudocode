/*
 * XREFs of IopCheckDiskName @ 0x140386144
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140B4CFA8 (IopGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlPrefixString @ 0x14075DBF0 (RtlPrefixString.c)
 *     RtlCharToInteger @ 0x140811070 (RtlCharToInteger.c)
 */

char __fastcall IopCheckDiskName(const STRING *a1, const STRING *a2, ULONG *a3)
{
  char v6; // bl
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0;
  DestinationString = 0LL;
  v6 = 0;
  if ( RtlPrefixString(a1, a2, 0) )
  {
    v6 = 1;
    RtlInitAnsiString(&DestinationString, &a2->Buffer[a1->Length]);
    if ( DestinationString.Length > 0xAu )
    {
      if ( RtlPrefixString(&stru_140005A80, &DestinationString, 0) )
        RtlCharToInteger((PCSZ)DestinationString.Buffer + 10, 0xAu, a3);
    }
  }
  return v6;
}
