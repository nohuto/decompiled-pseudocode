/*
 * XREFs of ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1803CE0BC
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803BC58C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005D198 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1803D7C40 (-HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foun.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        __int64 a2,
        __m128i *a3)
{
  __m128i v3; // xmm1
  __int64 v5; // r8
  PVOID Ptr; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  float v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v5 = a3->m128i_i64[0];
  v3.m128i_i64[0] = _mm_srli_si128(v3, 8).m128i_u64[0];
  v10[0] = (float)(int)v5;
  v10[1] = (float)SHIDWORD(v5);
  v10[2] = (float)(v3.m128i_i32[0] - v5 + 1);
  Ptr = this[13].Ptr;
  v10[3] = (float)(v3.m128i_i32[1] - HIDWORD(v5) + 1);
  v7 = ((__int64 (__fastcall *)(PVOID, __int64, float *, int *))KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted)(
         Ptr,
         a2,
         v10,
         &v12);
  if ( v7 < 0 )
  {
    v8 = 2257LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v12 == 3 )
  {
    v7 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v7 < 0 )
    {
      v8 = 2260LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
