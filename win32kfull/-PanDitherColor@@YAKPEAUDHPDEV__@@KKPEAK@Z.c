/*
 * XREFs of ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C029E340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     EngDitherColor @ 0x1C028B920 (EngDitherColor.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C02A0750 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall PanDitherColor(struct DHPDEV__ *a1, ULONG a2, ULONG a3, unsigned int *a4)
{
  ULONG v8; // eax
  ULONG v9; // ebx
  HSEMAPHORE v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v11);
  if ( *((_DWORD *)a1 + 10) < 3u )
    v8 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned int *))a1 + 112))(*((_QWORD *)a1 + 4), a2, a3, a4);
  else
    v8 = EngDitherColor(*((HDEV *)a1 + 6), a2, a3, a4);
  v9 = v8;
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v11);
  return v9;
}
