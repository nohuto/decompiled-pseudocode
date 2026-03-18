/*
 * XREFs of ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020DA60
 * Callers:
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DFB0 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(
        DirectComposition::CSceneNodeMarshaler *this)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CSceneNodeMarshaler *)((char *)this + 80));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CSceneNodeMarshaler *)((char *)this + 56));
}
