/*
 * XREFs of DwmAsyncDestroySprite @ 0x1C0022BB8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00243E4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncDestroySprite(PVOID Object, __int64 a2)
{
  unsigned int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+40h] [rbp-28h]

  v4 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    v7[0] = 0LL;
    LODWORD(v6[0]) = 3407884;
    WORD2(v6[0]) = 0x8000;
    LODWORD(v7[1]) = 1073741827;
    *(_QWORD *)((char *)&v7[1] + 4) = a2;
    EtwUpdateEvent(a2, 1073741827LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
