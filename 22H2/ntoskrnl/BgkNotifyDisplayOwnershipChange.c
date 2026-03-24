/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14039B440
 * Callers:
 *     BgkSetDisplayOwnership @ 0x1403CFD10 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FF4E0 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1404FF9E0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     BgLibraryEnable @ 0x14038D26C (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x14039C320 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x1403C8298 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x1409905DC (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x1409F1008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F13F0 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x1409F161C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409F1664 (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F3730 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x1409F3ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( byte_140C50650 && !a1 )
  {
    BgkResumeFinished();
    qword_140C50BA8 = 0LL;
    result = 0LL;
    byte_140C50BB1 = 0;
    return result;
  }
  if ( a1 != byte_140C50BB1 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C50B98 = a2;
      }
      else if ( !qword_140C50B98 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140C50745 = 0;
      byte_140C50744 = 0;
      ExWaitForRundownProtectionRelease(&stru_140C113B8);
      ExRundownCompleted(&stru_140C113B8);
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3LL);
        v3 = 0;
      }
      else
      {
        byte_140C50BB1 = 0;
        byte_140C50B88 = 0;
        if ( qword_140C50B90 )
        {
          BgConsoleDestroyInterface();
          qword_140C50B90 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140C50BA8 )
      {
        qword_140C50BA8();
        qword_140C50BA8 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C50B98 )
      return 3221225473LL;
    v7 = 0LL;
    result = qword_140C50B98(0LL, v8, &v7);
    if ( (int)result >= 0 )
    {
      qword_140C50BA8 = v7;
      BgkpLockBgfxCodeSection();
      v4 = BgLibraryEnable((__int64)v8, 0);
      v5 = byte_140C50BB1;
      v3 = v4;
      if ( v4 >= 0 )
        v5 = 1;
      byte_140C50BB1 = v5;
      Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
      qword_140C50B90 = (__int64)Interface;
      if ( Interface )
        (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140CF5680, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
