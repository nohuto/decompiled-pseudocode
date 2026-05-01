/*
 * XREFs of ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800832B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800833EC (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801BD540 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801BD540.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActivationFilter(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v10 = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v3);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  if ( !(unsigned int)SetActivationFilter(a2, a3) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xAF,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v7);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v10);
  return LastError;
}
