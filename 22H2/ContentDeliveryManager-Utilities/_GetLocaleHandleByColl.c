/*
 * XREFs of _GetLocaleHandleByColl @ 0x1800BBC6C
 * Callers:
 *     _Towlower @ 0x1800B3AD0 (_Towlower.c)
 *     _Tolower @ 0x1800B3C30 (_Tolower.c)
 *     _Towupper @ 0x1800B4118 (_Towupper.c)
 *     _Toupper @ 0x1800BC704 (_Toupper.c)
 *     _Strcoll @ 0x1800CEDB0 (_Strcoll.c)
 *     _Wcscoll @ 0x1800CEF08 (_Wcscoll.c)
 *     _Wcsxfrm @ 0x1800CF008 (_Wcsxfrm.c)
 *     _Strxfrm @ 0x1800CF138 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLocaleHandleByColl(unsigned int *a1)
{
  return *a1;
}
