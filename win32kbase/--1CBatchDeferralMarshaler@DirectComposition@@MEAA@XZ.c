void __fastcall DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(
        DirectComposition::CBatchDeferralMarshaler *this)
{
  DirectComposition::CEvent *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CBatchDeferralMarshaler::`vftable';
  v1 = (DirectComposition::CEvent *)*((_QWORD *)this + 7);
  if ( v1 )
    DirectComposition::CEvent::`scalar deleting destructor'(v1);
}
