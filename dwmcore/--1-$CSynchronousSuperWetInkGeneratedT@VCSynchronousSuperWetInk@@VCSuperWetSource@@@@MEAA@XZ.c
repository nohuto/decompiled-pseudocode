/*
 * XREFs of ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x18024FBA8
 * Callers:
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x18024FC68 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
  this[23] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  this[24] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[25]);
  this[25] = 0LL;
  CSuperWetSource::~CSuperWetSource((CSuperWetSource *)this);
}
