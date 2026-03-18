/*
 * XREFs of ?GdiUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049A7C
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 */

void __fastcall GdiUpdateSpriteVisRgn(HDEV a1, unsigned int a2)
{
  __int64 v4; // rbx
  HDEV v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v6, (struct PDEVOBJ *)&v5);
  v4 = 0LL;
  if ( *((_DWORD *)a1 + 35) )
  {
    do
    {
      vSpUpdateSpriteVisRgn(*(HDEV *)(*((_QWORD *)a1 + 18) + 8 * v4), a2);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)a1 + 35) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*((HDEV *)a1 + 10), a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v6);
}
