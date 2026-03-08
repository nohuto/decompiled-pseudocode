/*
 * XREFs of UsbhCancelQueuedTimeout @ 0x1C0001834
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x1C00039F8 (UsbhFreePortChangeQueueObject.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhCancelQueuedTimeout(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  KIRQL v6; // al
  __int64 v7; // r10
  KIRQL v8; // r14
  int v10; // r9d
  __int64 v11; // r11
  __int64 v12; // rcx
  _QWORD *v13; // r10
  __int64 v14; // r11
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-28h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(_QWORD *)(a2 + 464);
  v8 = v6;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v7 != a2 + 456 )
  {
    Log(*(_QWORD *)(a2 + 16), 4, 1668379697, v7 - 16, *(unsigned __int16 *)(a2 + 4));
    v12 = *(_QWORD *)(a2 + 16);
    v17 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v11 + 8) == 0x10000 )
    {
      Log(v12, 4, 1668768050, v10, v17);
      v15 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v13) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      UsbhFreePortChangeQueueObject(a1, a2, v14, 0LL);
      *(_DWORD *)(a2 + 696) = 0;
      v4 = 1;
      break;
    }
    Log(v12, 4, 1668768051, v10, v17);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v8);
  return v4;
}
