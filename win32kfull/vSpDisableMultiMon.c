/*
 * XREFs of vSpDisableMultiMon @ 0x1C0286DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSpDisableMultiMon(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 144);
  if ( v2 )
    Win32FreePool(v2);
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
}
