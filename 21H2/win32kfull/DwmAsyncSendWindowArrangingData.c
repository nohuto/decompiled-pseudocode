/*
 * XREFs of DwmAsyncSendWindowArrangingData @ 0x1C0275510
 * Callers:
 *     bSetDevDragRect @ 0x1C0029500 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0285F7C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C028615C (bSetDevPreviewRect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncSendWindowArrangingData(PVOID Object, int a2, __int64 a3, __int128 *a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[10]; // [rsp+20h] [rbp-88h] BYREF

  v9 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v14, 0, sizeof(v14));
    v10 = *a4;
    LODWORD(v14[0]) = 5242920;
    WORD2(v14[0]) = 0x8000;
    v14[9] = a5;
    LODWORD(v14[5]) = 1073741928;
    HIDWORD(v14[5]) = a2;
    v14[6] = a3;
    *(_OWORD *)&v14[7] = v10;
    EtwUpdateEvent(0LL, 1073741928LL, v11, v12);
    v9 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v9;
}
