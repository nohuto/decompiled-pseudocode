/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x14039C6C4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x140843870 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int16 v7; // r11
  __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      v9 = *(unsigned __int16 *)(a2 + 4);
      if ( (((_WORD)v9 - 4096) & 0xFBFF) != 0 && (unsigned __int8)RtlLCIDToCultureName(v9, a3) )
        return v3;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5)));
      if ( DestinationString.Length <= *(_WORD *)(a3 + 2)
        && RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(a3 + 8), *(unsigned __int16 *)(a3 + 2), DestinationString.Buffer) >= 0 )
      {
        *(_WORD *)a3 = v7;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
