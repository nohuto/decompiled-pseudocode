/*
 * XREFs of DwmAsyncTextChange @ 0x1C0047240
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     DefSetText @ 0x1C004B02C (DefSetText.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00EA0AC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncTextChange(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    v8[0] = 0LL;
    LODWORD(v7[0]) = 3407884;
    LODWORD(v8[1]) = 1073741833;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    EtwUpdateEvent(a2, 1073741833LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
