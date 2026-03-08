/*
 * XREFs of ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x18022B0A0
 * Callers:
 *     ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x1801BD8D4 (--0CGenericInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x18024FA68 (--0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CSuperWetSource *__fastcall CSuperWetSource::CSuperWetSource(CSuperWetSource *this, struct CComposition *a2)
{
  __int64 v2; // r9

  CContent::CContent(this, a2);
  *(_BYTE *)(v2 + 96) = 1;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 100) = 0;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  return (CSuperWetSource *)v2;
}
