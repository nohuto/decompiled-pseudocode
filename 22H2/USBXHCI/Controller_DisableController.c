/*
 * XREFs of Controller_DisableController @ 0x1C00314CC
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C0031F80 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00322D8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C0032D48 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  int v2; // edx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Controller_SetControllerGone(a1, 0LL);
  if ( *(_DWORD *)(a1 + 244) != 1
    || *(_BYTE *)(a1 + 553)
    || (_mm_srli_si128(*(__m128i *)(a1 + 336), 8).m128i_u8[0] & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 175, (__int64)&WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, int))(a1 + 288))(
      *(_QWORD *)(a1 + 280),
      0LL,
      &v3,
      4LL,
      2);
  }
  KeFlushQueuedDpcs();
}
