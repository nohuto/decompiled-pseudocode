/*
 * XREFs of ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0016234
 * Callers:
 *     ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0002500 (--_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0006EB0 (--_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0014F40 (--_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009AF40 (--_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B4AC0 (--_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214560 (--_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238398 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238480 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C001626C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::~CVisualMarshaler(DirectComposition::CVisualMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CVisualMarshaler *)((char *)this + 352));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CVisualMarshaler *)((char *)this + 328));
}
