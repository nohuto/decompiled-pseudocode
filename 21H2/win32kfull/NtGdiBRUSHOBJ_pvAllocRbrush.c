/*
 * XREFs of NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B0C70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C012905C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C026AD88 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, unsigned int a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  PVOID v6; // rbx
  struct UMPDOBJ *v7; // rdi
  struct _BRUSHOBJ *v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = 0LL;
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v8 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v8 )
      v6 = BRUSHOBJ_pvAllocRbrushUMPD(v8, a2);
    --*((_DWORD *)v7 + 105);
  }
  return v6;
}
