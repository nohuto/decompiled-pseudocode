/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01B14C4
 * Callers:
 *     xxxKELocaleProcs @ 0x1C009DDC8 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C004CFD0 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int16 v2; // cx
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xA5 )
  {
    v3 = *((_WORD *)a1 + 8) + 3;
    if ( v2 < 0 )
    {
      gbAltGrDown = 0;
      if ( (byte_1C024F608 & 0x10) != 0 )
        return;
      v4 = -32606;
    }
    else
    {
      if ( (byte_1C024F5E4 & 4) != 0 )
        return;
      gbAltGrDown = 1;
      v4 = 162;
    }
    xxxKeyEventEx(v4, 0x21Du, *((_DWORD *)a1 + 1), 0LL, 0LL, (unsigned __int16 *)a1 + 8, v3 <= 1u, 0, 0LL, 0LL);
  }
}
