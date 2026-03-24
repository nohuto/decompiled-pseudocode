/*
 * XREFs of UserGetDesktopDC @ 0x1C0021AE0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0022E50 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A4890 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0039A90 (ValidateHwndEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003A724 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C003CAC0 (GreCreateDisplayDC.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, __int64 a2, int a3)
{
  HDEV v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 DisplayDC; // rax
  __int64 v11; // rbx
  _QWORD *v13; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v5 = *(HDEV *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 1 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 57) + 8LL) + 24LL);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( !ValidateHwndEx(v13, 1LL, 0LL) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v5, a1);
    goto LABEL_11;
  }
  v9 = *((_QWORD *)gptiCurrent + 57);
  if ( v9 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_11:
    v11 = DisplayDC;
    goto LABEL_12;
  }
LABEL_16:
  v11 = 0LL;
LABEL_12:
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v8);
  return v11;
}
