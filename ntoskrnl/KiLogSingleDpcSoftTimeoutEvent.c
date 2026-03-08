/*
 * XREFs of KiLogSingleDpcSoftTimeoutEvent @ 0x140568EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlPcToFileName @ 0x1403A4E70 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x1405FB148 (EtwTraceSingleDpcSoftTimeout.c)
 */

__int64 __fastcall KiLogSingleDpcSoftTimeoutEvent(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  int v8; // ebp
  unsigned __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-138h] BYREF
  char v12; // [rsp+40h] [rbp-128h] BYREF

  v4 = *(_QWORD *)(a2 + 13264);
  v8 = *(_DWORD *)(v4 + 72);
  v9 = *(_QWORD *)(v4 + 64);
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_DWORD *)(v4 + 72) = 0;
  DestinationString.MaximumLength = 256;
  DestinationString.Buffer = (wchar_t *)&v12;
  if ( (int)RtlPcToFileName(v9, &DestinationString) < 0 )
    RtlInitUnicodeString(&DestinationString, L"unknown_module");
  return EtwTraceSingleDpcSoftTimeout(a3, a4, a2, v8, *(_DWORD *)(a2 + 13260), (__int64)&DestinationString);
}
