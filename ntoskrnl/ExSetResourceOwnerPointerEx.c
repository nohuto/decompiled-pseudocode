/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x140291140
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  if ( (Resource->Flag & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
