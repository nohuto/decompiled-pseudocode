/*
 * XREFs of ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024C3C8
 * Callers:
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C920 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C0068D5C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CSceneNodeMarshaler::~CSceneNodeMarshaler(
        DirectComposition::CSceneNodeMarshaler *this)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CSceneNodeMarshaler *)((char *)this + 80));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CSceneNodeMarshaler *)((char *)this + 56));
}
