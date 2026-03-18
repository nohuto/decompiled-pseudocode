/*
 * XREFs of ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0238398
 * Callers:
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0238530 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0016234 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C001626C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(
        DirectComposition::CTextVisualMarshaler *this)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 432));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 408));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 384));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
}
