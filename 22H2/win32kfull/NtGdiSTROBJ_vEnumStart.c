/*
 * XREFs of NtGdiSTROBJ_vEnumStart @ 0x1C02CDA30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C6CF4 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_vEnumStart(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 109);
  v4 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 52) = 0;
  }
  --*(_DWORD *)(v5 + 436);
  return 0LL;
}
