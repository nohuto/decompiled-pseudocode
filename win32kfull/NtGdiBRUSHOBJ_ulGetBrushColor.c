/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02CA930
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C0267E20 (BRUSHOBJ_ulGetBrushColor.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C9400 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v4; // rbx
  BRUSHOBJ *v6; // r9
  ULONG BrushColor; // r10d
  ULONG64 v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v4;
  v6 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v6 )
  {
    v8 = a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    if ( (*(_QWORD *)(v8 + 16) & 8) != 0 && (v6[5].iSolidColor & 0x10) != 0 )
      v6->flColorType |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor(v6);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  --*v4;
  return BrushColor;
}
