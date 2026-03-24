/*
 * XREFs of DwmAsyncActivationChange @ 0x1C00DCD60
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00DCB94 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncActivationChange(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[20]; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    *(_QWORD *)v8 = 0LL;
    WORD2(v7[0]) = 0x8000;
    LODWORD(v7[0]) = 3670032;
    *(_DWORD *)&v8[8] = 1073741836;
    *(_QWORD *)&v8[12] = a2;
    v9 = a3;
    EtwUpdateEvent(a2, 1073741836LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
