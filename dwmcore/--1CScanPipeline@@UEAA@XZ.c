/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1802B8298
 * Callers:
 *     ??1CFormatConverter@@MEAA@XZ @ 0x1802B81F8 (--1CFormatConverter@@MEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1802B8370 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  operator delete(this[80]);
  this[80] = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 74));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 67));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1));
}
