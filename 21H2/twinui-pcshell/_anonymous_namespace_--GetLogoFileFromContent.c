/*
 * XREFs of _anonymous_namespace_::GetLogoFileFromContent @ 0x18014978C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x18008171C (--0-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x180148FEC (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 *     _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x180149CDC (_anonymous_namespace_--GetWicBitmapFromHBitmap.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149E1C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 *     HandleToULong @ 0x1801A8B4C (HandleToULong.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall anonymous_namespace_::GetLogoFileFromContent(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 *WicBitmapFromHBitmap; // rax
  __int64 *v5; // rcx
  __int64 *WicBitmapFromStreamReference; // rax
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 || *(_BYTE *)(a2 + 8) )
    v3 = 0LL;
  else
    v3 = (_QWORD *)a2;
  if ( v3 )
  {
    WicBitmapFromHBitmap = (__int64 *)anonymous_namespace_::GetWicBitmapFromHBitmap(&v10, *v3);
    anonymous_namespace_::CreateTemporaryLogoFile(a1, *WicBitmapFromHBitmap);
    v5 = &v10;
  }
  else
  {
    if ( !a2 || *(_BYTE *)(a2 + 8) != 1 )
      a2 = 0LL;
    if ( !a2 )
    {
      v8 = HandleToULong((const void *)0x80070057LL);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        144LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)v8);
      __debugbreak();
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
      &v10,
      (__int64 *)a2);
    WicBitmapFromStreamReference = (__int64 *)anonymous_namespace_::GetWicBitmapFromStreamReference(&v11, &v10);
    anonymous_namespace_::CreateTemporaryLogoFile(a1, *WicBitmapFromStreamReference);
    v5 = (__int64 *)&v11;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v5);
  return a1;
}
