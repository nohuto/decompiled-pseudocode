/*
 * XREFs of ViDifCaptureIoCallbacks @ 0x1405A0ED8
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x14037DA90 (VfDifCaptureIoCallbacks.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C5A4C (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     <none>
 */

char __fastcall ViDifCaptureIoCallbacks(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  __int64 v4; // r10
  signed __int64 v5; // r11
  __int64 v6; // r9
  __int64 (__fastcall **v7)(__int64, IRP *); // rax
  __int64 (__fastcall *v8)(__int64, IRP *); // rdx
  __int64 (__fastcall *v9)(__int64, IRP *); // rax
  __int64 (__fastcall ***v10)(__int64, IRP *); // r9
  __int64 (__fastcall **v11)(__int64, IRP *); // r8

  v1 = a1[6];
  v2 = *(_QWORD **)(v1 + 64);
  if ( !v2 )
    return 0;
  v2[1] = a1[12];
  v4 = 28LL;
  v2[2] = a1[13];
  v5 = (char *)a1 - (char *)v2;
  v6 = 28LL;
  v2[3] = *(_QWORD *)(v1 + 8);
  v7 = (__int64 (__fastcall **)(__int64, IRP *))(v2 + 4);
  do
  {
    v8 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v7 + v5 + 80);
    if ( v8 && v8 != IopInvalidDeviceRequest )
      *v7 = v8;
    ++v7;
    --v6;
  }
  while ( v6 );
  v9 = (__int64 (__fastcall *)(__int64, IRP *))a1[12];
  if ( v9 && v9 != IopInvalidDeviceRequest )
    a1[12] = pXdvDriverStartIo;
  if ( a1[13] )
    a1[13] = pXdvDriverUnload;
  if ( *(_QWORD *)(v1 + 8) )
    *(_QWORD *)(v1 + 8) = pXdvAddDevice;
  v10 = (__int64 (__fastcall ***)(__int64, IRP *))&off_140D42DB0;
  v11 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
  do
  {
    if ( *v11 )
    {
      if ( *v11 != IopInvalidDeviceRequest )
        *v11 = **v10;
    }
    ++v11;
    v10 += 4;
    --v4;
  }
  while ( v4 );
  return 1;
}
