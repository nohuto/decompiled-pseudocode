/*
 * XREFs of DwmAsyncSendWindowArrangingData @ 0x1C0270268
 * Callers:
 *     bSetDevDragRect @ 0x1C001DE80 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028698C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0286B70 (bSetDevPreviewRect.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSendWindowArrangingData(PVOID Object, int a2, __int64 a3, __int128 *a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  int v12; // [rsp+20h] [rbp-88h] BYREF
  __int16 v13; // [rsp+24h] [rbp-84h]
  int v14; // [rsp+48h] [rbp-60h]
  int v15; // [rsp+4Ch] [rbp-5Ch]
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+68h] [rbp-40h]

  v9 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset_0(&v12, 0, 0x50uLL);
    v10 = *a4;
    v12 = 5242920;
    v13 = 0x8000;
    v18 = a5;
    v14 = 1073741932;
    v15 = a2;
    v16 = a3;
    v17 = v10;
    EtwUpdateEvent(0LL, 1073741932LL);
    v9 = LpcRequestPort(Object, &v12);
    ObfDereferenceObject(Object);
  }
  return v9;
}
