__int64 __fastcall DirectComposition::CApplicationChannel::GetAnimationTime(
        union _SLIST_HEADER *this,
        int a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  unsigned int v4; // ebx
  ULONGLONG v5; // r10
  __int64 v9; // rcx
  DirectComposition::CAnimationMarshaler *v10; // rsi

  v4 = 0;
  v5 = (unsigned int)(a2 - 1);
  if ( a2
    && v5 < this[5].Alignment
    && (_mm_lfence(), (v9 = *(_QWORD *)(this[5].Region * v5 + this[3].Region)) != 0)
    && (v10 = (DirectComposition::CAnimationMarshaler *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9)) != 0LL )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    DirectComposition::CAnimationMarshaler::GetAnimationTime(v10, a3, a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
