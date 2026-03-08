/*
 * XREFs of Control_EP_Disable @ 0x1C000FAB0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 */

void __fastcall Control_EP_Disable(__int64 a1)
{
  int v2; // esi
  KIRQL v3; // al

  while ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 40)) )
  {
    v2 = *(_DWORD *)(a1 + 108);
    if ( ((v2 - 1) & 0xFFFFFFFD) != 0 )
    {
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      *(_BYTE *)(a1 + 104) = v3;
      if ( v2 )
        *(_DWORD *)(a1 + 108) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
      return;
    }
  }
}
