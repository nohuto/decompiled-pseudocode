/*
 * XREFs of ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042C68
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0045300 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiRemoveHwQueueFromSyncPoints(struct VIDSCH_HW_QUEUE *a1)
{
  char v2; // di
  _QWORD *v3; // rbx
  __int64 *v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r10
  _QWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD **)(*((_QWORD *)a1 + 5) + 8LL);
  v8[0] = v3[4] + 1728LL;
  v9 = 0;
  AcquireSpinLock::Acquire((Acquire *)v8);
  v4 = (__int64 *)v3[201];
  if ( v4 != v3 + 201 )
  {
    do
    {
      v5 = *((_DWORD *)v4 + 32);
      v6 = 0LL;
      if ( v5 )
      {
        v7 = v4[9];
        while ( *(struct VIDSCH_HW_QUEUE **)(v7 + 24 * v6) != a1 )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            goto LABEL_8;
        }
        *(_QWORD *)(v7 + 24 * v6) = 0LL;
        v2 = 1;
      }
LABEL_8:
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v3 + 201 );
    if ( v2 )
      VidSchiCheckPendingDeviceCommand(v3);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v8);
}
