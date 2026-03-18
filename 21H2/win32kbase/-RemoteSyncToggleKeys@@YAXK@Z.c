/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01E98CC
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ebx
  _QWORD v3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v4; // [rsp+40h] [rbp-20h]

  v1 = a1 | 0x8000;
  v3[0] = 0LL;
  v4 = 0LL;
  gSetLedReceived = v1;
  v3[1] = 0LL;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( ((v1 & 4) == 0) != ((~byte_1C0295765 & 2) != 0) )
    {
      WORD1(v3[0]) = 20;
      LOBYTE(v3[0]) = 58;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32748;
      LOBYTE(v3[0]) = 58;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
    }
    if ( ((gSetLedReceived & 2) == 0) != ((~byte_1C0295784 & 2) != 0) )
    {
      WORD1(v3[0]) = 144;
      LOBYTE(v3[0]) = 69;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32624;
      LOBYTE(v3[0]) = 69;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
    }
    if ( ((gSetLedReceived & 1) == 0) != ((~byte_1C0295784 & 8) != 0) )
    {
      WORD1(v3[0]) = 145;
      LOBYTE(v3[0]) = 70;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32623;
      LOBYTE(v3[0]) = 70;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
    }
    if ( (GetActiveHKL() & 0x3FF) == 0x11 && ((gSetLedReceived & 8) == 0) != ((~byte_1C0295765 & 8) != 0) )
    {
      WORD1(v3[0]) = 21;
      LOBYTE(v3[0]) = 112;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
      WORD1(v3[0]) = -32747;
      LOBYTE(v3[0]) = 112;
      xxxProcessKeyEvent((unsigned __int8 *)v3, 0LL, v2, 0, 0LL, 0LL);
    }
    gSetLedReceived = 0;
  }
}
