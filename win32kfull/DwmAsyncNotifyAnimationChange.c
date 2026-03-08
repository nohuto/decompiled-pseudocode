/*
 * XREFs of DwmAsyncNotifyAnimationChange @ 0x1C001635C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncNotifyAnimationChange(PVOID Object, int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[20]; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    *(_QWORD *)v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    LODWORD(v6[0]) = 3670032;
    *(_DWORD *)&v7[8] = 1073741869;
    *(_QWORD *)&v7[12] = a3;
    v8 = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
