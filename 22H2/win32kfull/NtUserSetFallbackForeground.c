/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C01DBB30
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     _SetFallbackForeground @ 0x1C01AE880 (_SetFallbackForeground.c)
 */

__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  v5 = 0;
  if ( v4 )
  {
    if ( a1 )
    {
      v9 = ValidateHwnd(a1);
      if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D || !IsTopLevelWindow(v9) || !a2 )
        goto LABEL_9;
    }
    else
    {
      v10 = 0LL;
      if ( a2 )
      {
LABEL_9:
        v6 = 87;
        goto LABEL_3;
      }
    }
    v5 = SetFallbackForeground(v10, a2);
    goto LABEL_12;
  }
  v6 = 5;
LABEL_3:
  UserSetLastError(v6);
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v7, v8);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v5;
}
