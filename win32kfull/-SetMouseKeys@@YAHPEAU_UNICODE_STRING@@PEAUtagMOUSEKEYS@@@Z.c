/*
 * XREFs of ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C901C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SetMouseKeys(struct _UNICODE_STRING *a1, struct tagMOUSEKEYS *a2)
{
  int v4; // ebx
  int v5; // ebx
  unsigned __int16 v7[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlStringCchPrintfW(v7, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 16LL, L"Flags", v7);
  RtlStringCchPrintfW(v7, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 16LL, L"MaximumSpeed", v7) & v4;
  RtlStringCchPrintfW(v7, 0x28uLL, (size_t *)L"%d", *((unsigned int *)a2 + 3));
  return v5 & (unsigned int)FastWriteProfileStringW(a1, 16LL, L"TimeToMaximumSpeed", v7);
}
