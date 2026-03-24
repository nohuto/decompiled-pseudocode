/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024C1AC
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024D8A4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0048370 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     CALL_LPK @ 0x1C01594AC (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C01594E8 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BFE4 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C025306C (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025EE64 (GetPrefixCount.c)
 */

WCHAR *__fastcall xxxDrawMenuItemText(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        const WCHAR *a6,
        int a7,
        int a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r13
  WCHAR *result; // rax
  WCHAR *SourceString; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned __int16 PrefixCount; // [rsp+50h] [rbp-288h]
  __int64 v19; // [rsp+58h] [rbp-280h]
  __int128 v20; // [rsp+68h] [rbp-270h] BYREF
  __int64 v21; // [rsp+78h] [rbp-260h]
  _BYTE v22[512]; // [rsp+80h] [rbp-258h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = *(_QWORD *)(a2 + 88);
  v19 = ThreadWin32Thread;
  v21 = 0LL;
  v20 = 0LL;
  if ( a7 < 255 )
  {
    SourceString = (WCHAR *)v22;
  }
  else
  {
    result = (WCHAR *)Win32AllocPool(2LL * (a7 + 1), 1953657685LL);
    SourceString = result;
    if ( !result )
      return result;
    PushW32ThreadLock((__int64)result, &v20, (__int64)Win32FreePool);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  if ( (unsigned int)CALL_LPK(v19) )
  {
    xxxClientExtTextOutW(a3, a4, a5, 0, 0LL, SourceString, v16);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, a2) == -1 || v13 != *(_QWORD *)(a2 + 88) )
      goto LABEL_19;
  }
  else
  {
    GreExtTextOutWInternal(a3, a4, a5, 0, 0LL, SourceString, v16, 0LL, 0LL, 0);
  }
  if ( a8
    || (gdwPUDFlags & 0x20000) != 0
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000
    || (GetAppCompatFlags2(0x400u) & 2) != 0 )
  {
    if ( (unsigned int)CALL_LPK(v19) )
      xxxPSMTextOut(a3, a4, a5, a6, a7, 0x200000);
    else
      xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, PrefixCount);
  }
LABEL_19:
  result = (WCHAR *)v22;
  if ( SourceString != (WCHAR *)v22 )
    return (WCHAR *)PopAndFreeAlwaysW32ThreadLock((__int64)&v20);
  return result;
}
