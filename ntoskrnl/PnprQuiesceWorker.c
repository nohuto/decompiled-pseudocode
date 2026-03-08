/*
 * XREFs of PnprQuiesceWorker @ 0x140A9ADE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PnprCompleteWake @ 0x140560794 (PnprCompleteWake.c)
 *     PnprLockPagesForReplace @ 0x140963770 (PnprLockPagesForReplace.c)
 *     PnprQuiesceDevices @ 0x140A9A284 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  struct _KEVENT *v3; // rcx
  int v4; // ebx
  PVOID v5[2]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v6[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v7; // [rsp+80h] [rbp-28h]
  int v8; // [rsp+88h] [rbp-20h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0;
  v5[0] = (PVOID)(PnprContext + 33048);
  v5[1] = (PVOID)(PnprContext + 33096);
  if ( KeWaitForMultipleObjects(2u, v5, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices((__int64)v6);
    v3 = (struct _KEVENT *)PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 33144) = v2;
    KeSetEvent(v3 + 1378, 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 33096), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 33120), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}
