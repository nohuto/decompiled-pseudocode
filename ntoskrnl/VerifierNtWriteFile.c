/*
 * XREFs of VerifierNtWriteFile @ 0x140AE0EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfA @ 0x140380B18 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD06D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD0724 (ViErrorFinishReport.c)
 */

__int64 __fastcall VerifierNtWriteFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  char pszDest[40]; // [rsp+58h] [rbp-80h] BYREF
  const void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 && KeGetCurrentIrql() )
  {
    ViErrorDisplayDescription(586);
    if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", retaddr) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(586, (ULONG_PTR)retaddr, 0LL, 0LL);
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64, int, __int64, __int64))pXdvNtWriteFile)(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
