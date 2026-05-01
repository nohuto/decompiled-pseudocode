/*
 * XREFs of ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180252EC4
 * Callers:
 *     _lambda_98c1f1c5cf1ecd7152756a5091f202b2_::operator() @ 0x180251DF4 (_lambda_98c1f1c5cf1ecd7152756a5091f202b2_--operator().c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1802544C0 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetFramePosition(
        CVirtualTouchpadExperienceManager *this,
        struct tagPOINT *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  const char *v8; // r9
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)&a2->x = 0LL;
  v3 = *((_QWORD *)this + 43);
  *(_OWORD *)v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_OWORD *)&a2->x = *(_OWORD *)v9;
    if ( MapWindowPoints(*((HWND *)this + 44), 0LL, a2, 2u) || !GetLastError() )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1E3,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
