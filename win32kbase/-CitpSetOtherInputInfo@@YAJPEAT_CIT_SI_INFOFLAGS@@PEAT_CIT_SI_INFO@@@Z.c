/*
 * XREFs of ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02735B8
 * Callers:
 *     CitSetInfo @ 0x1C006BA00 (CitSetInfo.c)
 * Callees:
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C00B8348 (-CitpLastInputUpdate@@YAXGI@Z.c)
 */

__int64 __fastcall CitpSetOtherInputInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v3 = xmmword_1C02D4DA0;
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    CurrentProcessWin32Process = *((_QWORD *)xmmword_1C02D4DA0 + 15);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process != *((_QWORD *)v3 + 15) )
      return 3221225659LL;
  }
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  CitpLastInputUpdate(*(_WORD *)a2, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  return 0LL;
}
