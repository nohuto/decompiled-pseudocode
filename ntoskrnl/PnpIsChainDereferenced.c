/*
 * XREFs of PnpIsChainDereferenced @ 0x1403CE6E0
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PipEventRemovalCheckOpenHandles @ 0x14096EB8C (PipEventRemovalCheckOpenHandles.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     PnpIsAnyDeviceInUse @ 0x1403CE7F8 (PnpIsAnyDeviceInUse.c)
 *     PnpUpdateExtensionFlags @ 0x1403CE844 (PnpUpdateExtensionFlags.c)
 *     PnpChainDereferenceComplete @ 0x14087CAC8 (PnpChainDereferenceComplete.c)
 */

__int64 __fastcall PnpIsChainDereferenced(_QWORD *a1, int a2, int a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v9; // rbp
  unsigned int IsAnyDeviceInUse; // edi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r11
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  KIRQL OldIrql; // [rsp+78h] [rbp+10h]

  v5 = a5;
  if ( a5 )
    *a5 = 0LL;
  v9 = 0LL;
  IsAnyDeviceInUse = 0;
  v11 = 0;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = 1LL;
  if ( a2 > 0 )
  {
    v14 = a1;
    while ( 1 )
    {
      a5 = 0LL;
      IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&a1[v11], v12, &a5);
      PnpUpdateExtensionFlags(v16, v15, 1LL, 1LL);
      if ( a3 )
      {
        if ( IsAnyDeviceInUse )
        {
          v9 = a5;
          goto LABEL_16;
        }
      }
      else if ( !IsAnyDeviceInUse )
      {
        KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
        PnpChainDereferenceComplete(*v14, a4);
        OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
        v13 = 1LL;
      }
      v11 += v13;
      ++v14;
      if ( v11 >= a2 )
      {
        v9 = a5;
        break;
      }
    }
  }
  if ( a3 )
  {
LABEL_16:
    if ( IsAnyDeviceInUse )
    {
      if ( v5 )
        *v5 = v9;
      if ( v11 >= 0 )
      {
        v18 = &a1[v11];
        do
        {
          PnpUpdateExtensionFlags(v18, v18, v13, 0LL);
          v18 = (_QWORD *)(v19 - 8);
          v11 -= v13;
        }
        while ( v11 >= 0 );
      }
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( !a3 )
    return 1;
  return IsAnyDeviceInUse;
}
