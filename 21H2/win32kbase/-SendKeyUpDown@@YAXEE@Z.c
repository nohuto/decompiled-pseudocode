/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x1C01B05D4
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01AFFD0 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C003CFB0 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     GetCurrentKbdTables @ 0x1C01B0670 (GetCurrentKbdTables.c)
 *     xxxProcessKeyEvent @ 0x1C01B1220 (xxxProcessKeyEvent.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 CurrentKbdTables; // rax
  _OWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1;
  memset(v4, 0, sizeof(v4));
  WORD1(v4[0]) = a1 | 0x4000;
  if ( a2 )
    WORD1(v4[0]) = a1 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v4[0]) = InternalMapVirtualKeyEx(v2, 0LL, CurrentKbdTables);
  xxxProcessKeyEvent(v4, 0LL, 1LL, 0LL, 0LL, 0LL);
}
