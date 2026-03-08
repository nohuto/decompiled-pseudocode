/*
 * XREFs of ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EC244
 * Callers:
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EB814 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

void __fastcall UpdateDwmSnapArrangedInitiated(struct tagWND *a1)
{
  __int64 v1; // rsi
  void *v3; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[5]; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = (void *)ReferenceDwmApiPort(a1);
  if ( v3 )
  {
    memset(v4, 0, sizeof(v4));
    v5[0] = 0LL;
    LODWORD(v4[0]) = 3407884;
    WORD2(v4[0]) = 0x8000;
    LODWORD(v5[1]) = 1073741935;
    *(_QWORD *)((char *)&v5[1] + 4) = v1;
    LpcRequestPort(v3, v4);
    ObfDereferenceObject(v3);
  }
  SetOrClrWF(1, (__int64 *)a1, 0xD910u, 1);
}
