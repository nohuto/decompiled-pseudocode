/*
 * XREFs of ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02B9814
 * Callers:
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C029AF08 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 * Callees:
 *     ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEBDPEAPEAX@Z @ 0x1C02B9588 (-pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEBDPEAPEAX@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02E3048 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 */

char *__fastcall RFONTOBJ::pvFileUMPD(RFONTOBJ *this, unsigned int *a2, void **a3)
{
  __int64 v3; // rax
  char *v4; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  const char *TrueTypeFile; // rax
  unsigned int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v14 = 0;
  v8 = *(_QWORD *)(v3 + 128);
  if ( v8
    && (v9 = *(_QWORD *)(v8 + 80)) != 0
    && (v13[0] = *(_QWORD *)(v3 + 128),
        TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)v13, v9, &v14),
        (v4 = (char *)TrueTypeFile) != 0LL)
    && (v4 = RFONTOBJ::pchTranslateUMPD(this, TrueTypeFile, a3)) != 0LL )
  {
    v11 = v14;
  }
  else
  {
    v11 = 0;
  }
  if ( a2 )
    *a2 = v11;
  return v4;
}
