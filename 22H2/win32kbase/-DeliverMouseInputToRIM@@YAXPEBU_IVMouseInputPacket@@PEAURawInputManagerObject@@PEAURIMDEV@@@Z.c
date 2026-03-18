/*
 * XREFs of ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01ECED4
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC60 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     RIMQueueMouseInput @ 0x1C0197AEC (RIMQueueMouseInput.c)
 */

void __fastcall DeliverMouseInputToRIM(
        const struct _IVMouseInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rbx
  unsigned int v7; // r9d
  _WORD *v8; // r8
  _WORD *v9; // r10
  __int64 v10; // r11
  __int16 v11; // ax
  _OWORD v12[24]; // [rsp+20h] [rbp-1A8h] BYREF

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  v7 = *((_DWORD *)a1 + 8);
  if ( v7 )
  {
    v8 = (_WORD *)*((_QWORD *)a1 + 3);
    v9 = (_WORD *)v12 + 2;
    v10 = v7;
    do
    {
      v11 = *v8;
      v8 += 24;
      *(v9 - 2) = v11;
      *(v9 - 1) = *(v8 - 22);
      *v9 = *(v8 - 20);
      v9 += 12;
      *(v9 - 11) = *(v8 - 18);
      *((_DWORD *)v9 - 5) = *((_DWORD *)v8 - 8);
      *((_DWORD *)v9 - 4) = *((_DWORD *)v8 - 7);
      *((_DWORD *)v9 - 3) = *((_DWORD *)v8 - 6);
      *((_DWORD *)v9 - 2) = *((_DWORD *)v8 - 5);
      --v10;
    }
    while ( v10 );
  }
  RIMQueueMouseInput(a2, a3, v12, v7);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
