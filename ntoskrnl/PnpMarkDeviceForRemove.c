/*
 * XREFs of PnpMarkDeviceForRemove @ 0x1403CF1B8
 * Callers:
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14096A1AC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

ULONG_PTR __fastcall PnpMarkDeviceForRemove(ULONG_PTR a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR v5; // rdi
  KIRQL v6; // al
  ULONG_PTR result; // rax
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // bp
  __int16 v11; // cx
  __int16 v12; // cx
  void *v13; // rcx

  v5 = a1;
  if ( a2 )
  {
    a3[1] = 0LL;
    *a3 = a1;
  }
  if ( a1 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        v8 = KeAcquireQueuedSpinLock(9uLL);
        v9 = *(_QWORD *)(v5 + 56);
        v10 = v8;
        v11 = *(_WORD *)(v9 + 4);
        if ( a2 )
        {
          v12 = v11 | 8;
          *(_WORD *)(v9 + 4) = v12;
          if ( (v12 & 1) != 0 )
          {
            v13 = *(void **)(v9 + 8);
            a3[1] = (ULONG_PTR)v13;
            *a3 = v5;
            ObfReferenceObjectWithTag(v13, 0x746C6644u);
            IopIncrementDeviceObjectRefCount(a3[1], 1);
          }
        }
        else
        {
          *(_WORD *)(v9 + 4) = v11 & 0xFFF7;
        }
        KeReleaseQueuedSpinLock(9uLL, v10);
      }
      if ( a2 && a3[1] )
        break;
      v6 = KeAcquireQueuedSpinLock(0xAuLL);
      v5 = *(_QWORD *)(v5 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v6);
    }
    while ( v5 );
  }
  result = a3[1];
  if ( !result )
    return *a3;
  return result;
}
