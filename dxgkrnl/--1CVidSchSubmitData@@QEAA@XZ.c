void __fastcall CVidSchSubmitData::~CVidSchSubmitData(CVidSchSubmitData *this)
{
  if ( *(_QWORD *)this )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(*((_QWORD *)this + 1) + 1424LL), *(PVOID *)this);
}
