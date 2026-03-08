/*
 * XREFs of KiSynchCounterSetCallback @ 0x140970F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14086B690 (PcwAddInstance.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409E9198 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409E91F4 (EtwReferenceSpinLockCounters.c)
 */

NTSTATUS __fastcall KiSynchCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // r14
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 *i; // rsi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  v4 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0;
  for ( i = KiProcessorBlock; ; ++i )
  {
    v7 = *i;
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u", v4);
    RtlInitUnicodeString(&DestinationString, pszDest);
    Data.Size = 184;
    Data.Data = (const void *)(v7 + 35008);
    result = PcwAddInstance(v3, &DestinationString, v4, 1u, &Data);
    if ( result < 0 )
      break;
    if ( ++v4 >= ActiveProcessorCount )
      return 0;
  }
  return result;
}
