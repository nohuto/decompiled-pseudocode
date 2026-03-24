/*
 * XREFs of RtlGuardRestoreContext @ 0x1403402B8
 * Callers:
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 * Callees:
 *     RtlGuardCheckExceptionHandler @ 0x140340314 (RtlGuardCheckExceptionHandler.c)
 *     RtlRestoreContext @ 0x140407380 (RtlRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058F388 (RtlGuardCheckLongJumpTarget.c)
 */

__int64 __fastcall RtlGuardRestoreContext(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    if ( *(_DWORD *)a2 == -2147483610 )
    {
      RtlGuardCheckLongJumpTarget(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 80LL));
    }
    else if ( *(_DWORD *)a2 == -1073741785 )
    {
      RtlGuardCheckExceptionHandler(*(_QWORD *)(a1 + 248));
    }
  }
  return RtlRestoreContext(a1, a2);
}
