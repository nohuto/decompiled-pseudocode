/*
 * XREFs of vSpDisableMultiMon @ 0x1C0285D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSpDisableMultiMon(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 152);
  if ( v2 )
    Win32FreePool(v2);
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
}
