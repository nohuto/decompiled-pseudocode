/*
 * XREFs of DwmAsyncZorderSprite @ 0x1C002D414
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C002D2F0 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncZorderSprite(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  _QWORD v11[2]; // [rsp+4Ch] [rbp-14h]

  v6 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(Object) + 32) + 13248LL));
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    WORD2(v8[0]) = 0x8000;
    LODWORD(v8[0]) = 3932180;
    v10 = 1073741829;
    v11[0] = a2;
    v11[1] = a3;
    EtwUpdateEvent(a2, 1073741829LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
