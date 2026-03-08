/*
 * XREFs of UserGetDesktopDC @ 0x1C003D300
 * Callers:
 *     NtGdiOpenDCW @ 0x1C003D110 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0199440 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, __int64 a2, int a3)
{
  HDEV v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 DisplayDC; // rax
  __int64 v11; // rbx
  _QWORD *v13; // rcx
  char v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v5 = (HDEV)*((_QWORD *)gpDispInfo + 5);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 760LL) + 24LL) & 1) != 0 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 57) + 8LL) + 24LL);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( !ValidateHwndEx(v13, 1LL) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v5, a1);
    goto LABEL_9;
  }
  v9 = *((_QWORD *)gptiCurrent + 57);
  if ( v9 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_9:
    v11 = DisplayDC;
    goto LABEL_10;
  }
LABEL_16:
  v11 = 0LL;
LABEL_10:
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v9, v7, v8);
  return v11;
}
