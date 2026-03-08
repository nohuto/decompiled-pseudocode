/*
 * XREFs of ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024D39C
 * Callers:
 *     ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A3D0 (--_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024F144 (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1C024D644 (--1CEffectInputSet@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::~CFilterEffectMarshaler(
        DirectComposition::CFilterEffectMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  DirectComposition::CEffectInputSet::~CEffectInputSet((DirectComposition::CFilterEffectMarshaler *)((char *)this + 72));
}
