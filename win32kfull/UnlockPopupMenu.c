__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*a2 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v4, *a2);
  v4[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v4);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v4);
  return HMAssignmentUnlock(a2);
}
