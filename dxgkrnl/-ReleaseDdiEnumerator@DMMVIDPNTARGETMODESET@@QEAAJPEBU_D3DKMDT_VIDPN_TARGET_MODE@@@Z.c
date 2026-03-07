__int64 __fastcall DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2)
{
  union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *p_AdditionalSignalInfo; // r11
  __int64 v4; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223192337LL;
  }
  p_AdditionalSignalInfo = (union _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo;
  if ( *(_DWORD *)&a2[-1].VideoSignalInfo.AdditionalSignalInfo != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].VideoSignalInfo.AdditionalSignalInfo);
    return 3223192337LL;
  }
  v4 = *(_QWORD *)&a2[-1].WireFormatAndPreference.0;
  if ( v4
    && !DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
          (__int64)this + 32,
          v4) )
  {
    WdLogSingleEntry2(2LL, p_AdditionalSignalInfo, this);
    return 3223192368LL;
  }
  else
  {
    operator delete(p_AdditionalSignalInfo);
    return 0LL;
  }
}
