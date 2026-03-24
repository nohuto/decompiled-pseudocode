/*
 * XREFs of DwmAsyncChildDestroy @ 0x1C00EA1D0
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00E9D5C (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C01690E8 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildDestroy(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    v8[0] = 0LL;
    LODWORD(v7[0]) = 3407884;
    LODWORD(v8[1]) = 1073741844;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    EtwUpdateEvent(a2, 1073741844LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
