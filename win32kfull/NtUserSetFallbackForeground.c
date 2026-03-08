/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C01DCB60
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetFallbackForeground @ 0x1C01AFA70 (_SetFallbackForeground.c)
 */

__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  LOBYTE(v4) = IAMThreadAccessGranted(gptiCurrent);
  v5 = 0;
  if ( v4 )
  {
    if ( a1 )
    {
      v7 = ValidateHwnd(a1);
      if ( !v7 || (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF) == 0x29D || !IsTopLevelWindow(v7) || !a2 )
        goto LABEL_9;
    }
    else
    {
      v8 = 0LL;
      if ( a2 )
      {
LABEL_9:
        v6 = 87;
        goto LABEL_3;
      }
    }
    v5 = SetFallbackForeground(v8, a2);
    goto LABEL_12;
  }
  v6 = 5;
LABEL_3:
  UserSetLastError(v6);
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
