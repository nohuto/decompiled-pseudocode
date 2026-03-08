/*
 * XREFs of ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C021D114
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021EEC0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     RIMQueueMouseInput @ 0x1C01C581C (RIMQueueMouseInput.c)
 *     ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x1C021D520 (-GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z.c)
 */

void __fastcall DeliverMouseInputToRIM(
        const struct _IVMouseInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // r14
  unsigned int v7; // ebp
  __int64 v8; // rbx
  struct _MOUSE_INPUT_DATA *v9; // rdi
  __int64 v10; // rsi
  _MOUSE_INPUT_DATA v11; // [rsp+20h] [rbp-1C8h] BYREF

  v3 = (char *)a2 + 760;
  RIMLockExclusive((__int64)a2 + 760);
  v7 = *((_DWORD *)a1 + 8);
  if ( v7 )
  {
    v8 = 0LL;
    v9 = &v11;
    v10 = v7;
    do
    {
      GetMouseInputDataFromIVMouseInput(v9, (struct _IVMouseInputData *const)(v8 + *((_QWORD *)a1 + 3)));
      v8 += 48LL;
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  RIMQueueMouseInput(a2, a3, &v11, v7);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
