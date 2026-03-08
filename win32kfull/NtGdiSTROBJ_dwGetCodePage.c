/*
 * XREFs of NtGdiSTROBJ_dwGetCodePage @ 0x1C02CF9B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C94B8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

struct UMPDOBJ *__fastcall NtGdiSTROBJ_dwGetCodePage(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // r10d

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v4 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)result, a1);
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 124);
    --*(_DWORD *)(v5 + 420);
    return (struct UMPDOBJ *)v6;
  }
  return result;
}
