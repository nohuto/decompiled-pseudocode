/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x1C005C6C8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C00BA884 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(int a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  struct tagWND *v8; // rsi
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v16[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *a4;
  v15[2] = 0LL;
  v14 = 0LL;
  result = HMValidateHandleNoSecure(a1, 1);
  v8 = (struct tagWND *)result;
  if ( result )
  {
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    v15[0] = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = v15;
    v15[1] = v8;
    HMLockObject(v8);
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( v4 )
        {
          if ( v4 == -1 )
          {
            v16[0] = 0;
            RtlInitLargeUnicodeString(&v14, v16);
          }
          else
          {
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v4, v16, 260LL) )
              RtlInitLargeUnicodeString(&v14, v16);
            UserDeleteAtom((unsigned __int16)v4);
          }
        }
        *a4 = 0LL;
      }
      else if ( a2 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v8);
        return ThreadUnlock1(v12, v11, v13);
      }
    }
    xxxSendMessage((ULONG_PTR)v8);
    return ThreadUnlock1(v12, v11, v13);
  }
  return result;
}
