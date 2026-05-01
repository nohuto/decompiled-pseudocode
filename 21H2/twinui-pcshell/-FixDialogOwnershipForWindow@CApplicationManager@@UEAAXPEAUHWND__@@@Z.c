/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18007BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0c4a6ef4ae4c359b04d884e0949b8e30___ @ 0x180096998 (Windows--Internal--ComTaskPool--QueueTask__lambda_0c4a6ef4ae4c359b04d884e0949b8e30___.c)
 *     ?destroy@?$__func@V_lambda_99ba3b9c33d985ca735a1a650d7db78e_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180096EC0 (-destroy@-$__func@V_lambda_99ba3b9c33d985ca735a1a650d7db78e_@@$$A6AJK@Z@__function@wistd@@UEAAXX.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 68);
  if ( v2 )
  {
    v3 = *v2;
    *(_QWORD *)v6 = a2;
    v7 = v2;
    (*(void (__fastcall **)(_QWORD *, HWND))(v3 + 8))(v2, a2);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_0c4a6ef4ae4c359b04d884e0949b8e30___(v4, v6);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFF3,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    wistd::__function::__func<_lambda_99ba3b9c33d985ca735a1a650d7db78e_,long (unsigned long)>::destroy(v6);
  }
}
