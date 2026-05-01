/*
 * XREFs of _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18048C110
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f8a4012ea914e544f53ba03328832034__&_::Run @ 0x18048DA80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f8a4012ea914e544f53ba03328832034__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802ABBD4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x18048C46C (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x18048C8F0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x18048CC70 (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 *     ?InitDropFeedback@JointResize@JointResizeTelemetry@@QEAAXXZ @ 0x18048CF08 (-InitDropFeedback@JointResize@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x18048E238 (-UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z.c)
 *     ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x18048E368 (-UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z.c)
 *     ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x18048E394 (-UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z.c)
 */

__int64 __fastcall lambda_f8a4012ea914e544f53ba03328832034_::operator()(struct tagRECT *a1, int a2)
{
  JointResize *v3; // rcx
  int inited; // edi
  __int64 v6; // rdx
  JointResize *v7; // rcx
  JointResize *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  JointResize *v12; // rcx
  int v13; // eax
  JointResize *v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  struct tagRECT v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  struct tagRECT v20; // [rsp+68h] [rbp+28h] BYREF

  v3 = *(JointResize **)&a1->left;
  if ( !*((_BYTE *)v3 + 224) )
    return 2147947423LL;
  inited = JointResize::InitDropFeedback(v3, a2);
  if ( inited >= 0 )
  {
    JointResizeTelemetry::JointResize::InitDropFeedback((JointResizeTelemetry::JointResize *)(*(_QWORD *)&a1->left
                                                                                            + 440LL));
    v7 = *(JointResize **)&a1->left;
    v17 = a1[1];
    inited = JointResize::UpdateDropFeedback(v7, &v17);
    if ( inited < 0 )
    {
      v6 = 244LL;
      goto LABEL_5;
    }
    v8 = *(JointResize **)&a1->left;
    v17 = a1[1];
    v9 = (_QWORD *)JointResize::CalculatePointFromRect(v8, &v20);
    *(_QWORD *)(v10 + 280) = *v9;
    v11 = *(_QWORD *)(*(_QWORD *)&a1->left + 168LL);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
      JointResize::UpdateGhostDivider(*(JointResize **)&a1->left, *(struct tagPOINT *)(*(_QWORD *)&a1->left + 280LL));
    }
    else
    {
      JointResize::CreateGhostDivider(*(_QWORD *)&a1->left, 2LL, a1[2].left != 10);
    }
    v12 = *(JointResize **)&a1->left;
    v19 = 0LL;
    v13 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v12 + 25,
            &v19);
    v14 = *(JointResize **)&a1->left;
    if ( v13 < 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, LONG *, struct tagRECT *))(**((_QWORD **)v14 + 25) + 280LL))(
              *((_QWORD *)v14 + 25),
              *((_QWORD *)v14 + 23),
              &v20.right,
              &v20);
      inited = v15;
      if ( v15 < 0 )
      {
        v16 = 274LL;
        goto LABEL_16;
      }
      JointResize::UpdateSizeConstraints(
        *(JointResize **)&a1->left,
        *(struct tagSIZE *)&v20.right,
        *(struct tagSIZE *)&v20.left);
    }
    else
    {
      *((_BYTE *)v14 + 225) = 1;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&a1->left + 200LL) + 304LL))(*(_QWORD *)(*(_QWORD *)&a1->left + 200LL));
      inited = v15;
      if ( v15 < 0 )
      {
        v16 = 267LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v15);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        return (unsigned int)inited;
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&a1->left + 216LL) + 24LL))(*(_QWORD *)(*(_QWORD *)&a1->left + 216LL));
    inited = 0;
    goto LABEL_19;
  }
  v6 = 242LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
