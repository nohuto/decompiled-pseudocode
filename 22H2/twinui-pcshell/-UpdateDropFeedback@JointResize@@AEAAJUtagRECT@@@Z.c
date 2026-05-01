/*
 * XREFs of ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x18048E238
 * Callers:
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18048C110 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x18048D6F0 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180490D14 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall JointResize::UpdateDropFeedback(JointResize *this, struct tagRECT *a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  bool v8; // zf
  LONG right; // ecx
  __int64 v10; // rdx
  void *v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !*((_QWORD *)this + 26) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v5 = CDropFeedbackList_CreateInstance(v4, &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 621LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      return v6;
    }
    v8 = *((_DWORD *)this + 72) == 11;
    v13 = *(_OWORD *)((char *)this + 248);
    if ( v8 )
    {
      right = a2->right;
      if ( *((_DWORD *)this + 62) > right )
        right = *((_DWORD *)this + 62);
      LODWORD(v13) = right;
    }
    else
    {
      right = v13;
    }
    v10 = *((unsigned int *)this + 50);
    DWORD2(v13) = right + *((_DWORD *)this + 64) - *((_DWORD *)this + 62);
    (*(void (__fastcall **)(void *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v12 + 88LL))(v12, v10, 0LL, &v13, 768);
    v5 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 22) + 32LL))(
           *((_QWORD *)this + 22),
           v12,
           0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 633LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
