/*
 * XREFs of ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0109220
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0010D80 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnOUTSTRING @ 0x1C00EAB40 (SfnOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C0108F88 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C020833C (ClientGetListboxString.c)
 *     SfnIMECONTROL @ 0x1C0209610 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C020A090 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020A610 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnPOUTLPINT @ 0x1C0211680 (SfnPOUTLPINT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0109260 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall AllocateCallbackData(struct _CAPTUREBUF *a1, unsigned int a2, void **a3)
{
  unsigned __int8 *v4; // r8

  if ( a2 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = &v4[(a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
  FixupCaptureDataOffsets(a1, a3, v4);
  return 0LL;
}
