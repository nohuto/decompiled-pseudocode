/*
 * XREFs of GetConsoleDesktop @ 0x1C01BFCC8
 * Callers:
 *     _OpenThreadDesktop @ 0x1C00BEF04 (_OpenThreadDesktop.c)
 *     _GetThreadDesktop @ 0x1C00D13FC (_GetThreadDesktop.c)
 *     NtUserCheckWindowThreadDesktop @ 0x1C01CE770 (NtUserCheckWindowThreadDesktop.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1C01BF7E8 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall GetConsoleDesktop(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  PVOID v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  void *v13; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  if ( GetConsoleHostProcess(a1, &v13) < 0 || !v13 )
    return 3221225485LL;
  result = LockProcessByClientId(v13, (PEPROCESS *)&Object);
  if ( (int)result >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v9 = Object;
    *a4 = ProcessWin32Process;
    ObfDereferenceObject(v9);
    v10 = *a4;
    if ( *a4 && (v11 = *(_QWORD *)(v10 + 328)) != 0 )
    {
      *a2 = *(_QWORD *)(v11 + 592);
      if ( a3 )
        *a3 = *(_QWORD *)(*(_QWORD *)(v10 + 328) + 456LL);
      return 0LL;
    }
    else
    {
      return 3221225480LL;
    }
  }
  return result;
}
