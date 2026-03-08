/*
 * XREFs of ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C021D05C
 * Callers:
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E800 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 * Callees:
 *     RIMQueueKeyboardInput @ 0x1C0003A10 (RIMQueueKeyboardInput.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall DeliverKeyboardInputToRim(
        struct _IVKeyboardInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rdi
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h]

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  LOWORD(v7) = *((_WORD *)a1 + 8);
  WORD1(v7) = *((_WORD *)a1 + 10);
  WORD2(v7) = *((_WORD *)a1 + 12);
  HIWORD(v7) = *((_WORD *)a1 + 14);
  v8 = *((_DWORD *)a1 + 8);
  RIMQueueKeyboardInput(a2, a3, &v7, 1u);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
