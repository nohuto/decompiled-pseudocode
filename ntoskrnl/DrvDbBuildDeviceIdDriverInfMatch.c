/*
 * XREFs of DrvDbBuildDeviceIdDriverInfMatch @ 0x140866494
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140866238 (DrvDbGetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 */

int __fastcall DrvDbBuildDeviceIdDriverInfMatch(size_t a1, unsigned __int8 *a2, wchar_t *a3, unsigned int a4)
{
  int v5; // edx
  int v6; // eax
  int result; // eax
  __int64 v8; // [rsp+30h] [rbp-18h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp+10h] BYREF

  pcchRemaining = a1;
  ppszDestEnd = 0LL;
  v5 = *a2;
  pcchRemaining = 0LL;
  switch ( v5 )
  {
    case 0:
      return RtlStringCchCopyExW(a3, a4, &word_1408834C0, 0LL, 0LL, 0x800u);
    case 1:
    case 2:
      if ( (_BYTE)v5 == 1 )
        v6 = 0;
      else
        v6 = *((unsigned __int16 *)a2 + 1) + 1;
      result = RtlStringCchPrintfExW(a3, a4, &ppszDestEnd, &pcchRemaining, 0x800u, L"%ws\\%X", &word_1408834C0, v6);
      if ( result >= 0 && a2[1] != 0xFF )
      {
        LODWORD(v8) = a2[1];
        return RtlStringCchPrintfExW(ppszDestEnd, pcchRemaining, 0LL, 0LL, 0x800u, L"\\%X", v8);
      }
      break;
    case 3:
      return RtlStringCchPrintfExW(
               a3,
               a4,
               &ppszDestEnd,
               &pcchRemaining,
               0x800u,
               L"%ws\\*%X",
               &word_1408834C0,
               *((unsigned __int16 *)a2 + 1));
    default:
      return -1073741811;
  }
  return result;
}
