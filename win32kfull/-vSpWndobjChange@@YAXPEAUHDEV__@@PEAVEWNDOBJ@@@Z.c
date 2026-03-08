/*
 * XREFs of ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0285B74
 * Callers:
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreClientRgnDone @ 0x1C028A874 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x1C028A9D0 (GreDeleteWnd.c)
 * Callees:
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02838A8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpWndobjChange(HDEV a1, struct EWNDOBJ *a2)
{
  HDEV v4; // rsi
  __int64 v5; // rbx
  HDEV v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v7, (struct PDEVOBJ *)&v6);
  v4 = v6;
  v5 = 0LL;
  if ( *((_DWORD *)v6 + 35) )
  {
    do
    {
      vSpDeviceWndobjChange(*(HDEV *)(*((_QWORD *)v4 + 18) + 8 * v5), a2);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *((_DWORD *)v4 + 35) );
  }
  else
  {
    vSpDeviceWndobjChange(a1, a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v7);
}
