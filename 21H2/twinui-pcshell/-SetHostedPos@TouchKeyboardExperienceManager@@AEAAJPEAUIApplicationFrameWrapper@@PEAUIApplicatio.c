/*
 * XREFs of ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1803BFAD4
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBC4 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--operator().c)
 *     _lambda_51d6f8f9b06e99048dd25aff80a12ac0_::operator() @ 0x1800CF2E8 (_lambda_51d6f8f9b06e99048dd25aff80a12ac0_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::SetHostedPos(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrame *a3,
        const struct tagRECT *a4)
{
  struct IApplicationFrame *v5; // r10
  __int64 (__fastcall *v7)(struct IApplicationFrameWrapper *, struct IApplicationFrame **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // kr00_8
  __int64 v12; // kr08_8
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationFrame *v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+40h] [rbp+18h] BYREF
  int v18; // [rsp+44h] [rbp+1Ch]

  v5 = a3;
  v16 = 0LL;
  if ( !a3 )
  {
    v7 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrame **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v8 = v7(a2, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 567LL;
      goto LABEL_9;
    }
    v5 = v16;
  }
  v11 = a4->right - a4->left;
  v17 = (HIDWORD(v11) ^ v11) - HIDWORD(v11);
  v12 = a4->bottom - a4->top;
  v18 = (HIDWORD(v12) ^ v12) - HIDWORD(v12);
  v13 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, int *, _QWORD))(*(_QWORD *)v5 + 184LL))(v5, &v17, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, const struct tagRECT *))(*(_QWORD *)a2 + 64LL))(
         a2,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = 0;
    goto LABEL_11;
  }
  v10 = 573LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v9;
}
