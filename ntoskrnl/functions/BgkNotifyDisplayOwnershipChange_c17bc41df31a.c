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
  if ( byte_140D17C58 && !a1 )
  {
    BgkResumeFinished();
    qword_140D17C50 = 0LL;
    result = 0LL;
    byte_140C6A80A = 0;
    return result;
  }
  if ( a1 != byte_140C6A80A )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C6A7F8 = a2;
      }
      else if ( !qword_140C6A7F8 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140C6A809 = 0;
      byte_140C6A7F0 = 0;
      ExWaitForRundownProtectionRelease(&stru_140C0BC48);
      ExRundownCompleted(&stru_140C0BC48);
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3);
        v3 = 0;
      }
      else
      {
        byte_140C6A80A = 0;
        byte_140C6A800 = 0;
        if ( qword_140C6A7E8 )
        {
          BgConsoleDestroyInterface();
          qword_140C6A7E8 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140D17C50 )
      {
        qword_140D17C50();
        qword_140D17C50 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C6A7F8 )
      return 3221225473LL;
    v7 = 0LL;
    result = qword_140C6A7F8(0LL, v8, &v7);
    if ( (int)result >= 0 )
    {
      qword_140D17C50 = v7;
      BgkpLockBgfxCodeSection();
      v4 = BgLibraryEnable(v8, 0LL);
      v5 = byte_140C6A80A;
      v3 = v4;
      if ( v4 >= 0 )
        v5 = 1;
      byte_140C6A80A = v5;
      Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
      qword_140C6A7E8 = (__int64)Interface;
      if ( Interface )
        (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140D18158, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
