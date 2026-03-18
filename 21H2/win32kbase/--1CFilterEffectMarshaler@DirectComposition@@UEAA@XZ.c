/*
 * XREFs of ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0215C20
 * Callers:
 *     ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214030 (--_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0217CA8 (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1C0215EF4 (--1CEffectInputSet@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(
        DirectComposition::CFilterEffectMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  DirectComposition::CEffectInputSet::~CEffectInputSet((DirectComposition::CFilterEffectMarshaler *)((char *)this + 80));
}
