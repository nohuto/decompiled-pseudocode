/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00442C4
 * Callers:
 *     ValidateHandleSecure @ 0x1C0044200 (ValidateHandleSecure.c)
 * Callees:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0007EF4 (EtwTraceUIPIHandleValidationError.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0033100 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0044418 (CheckAccessEx.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v6; // cx
  const struct tagPROCESSINFO *v7; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14);
  v2 = gpKernelHandleTable;
  v3 = 3LL * (unsigned int)((a1 - qword_1C024FA38) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v4);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v6 = *((_WORD *)&unk_1C020946C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v6 & 2) != 0 )
  {
    v7 = (const struct tagPROCESSINFO *)v2[v3 + 1];
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 1LL;
    v9 = v2[v3 + 1];
    if ( !v9 )
      return 1LL;
    v7 = *(const struct tagPROCESSINFO **)(v9 + 424);
  }
  if ( !v7
    || *(PVOID *)v7 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 880, (char *)v7 + 880, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v11);
  EtwTraceUIPIHandleValidationError(
    CurrentProcessWin32Process,
    v7,
    **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C024FA38) >> 5)),
    *((_BYTE *)a1 + 24));
  UserSetLastError(5LL, v10);
  return 0LL;
}
