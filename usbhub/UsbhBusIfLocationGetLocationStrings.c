/*
 * XREFs of UsbhBusIfLocationGetLocationStrings @ 0x1C004BFB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1C004B8F0 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall UsbhBusIfLocationGetLocationStrings(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool2; // rbx
  __int64 result; // rax
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 20LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  RtlStringCchPrintfExW(Pool2, 0xAuLL, 0LL, &pcchRemaining, 0x200u, L"USB(%d)", *(unsigned __int16 *)(a1 + 1428));
  result = 0LL;
  *a2 = Pool2;
  return result;
}
