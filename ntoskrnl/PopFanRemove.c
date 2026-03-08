/*
 * XREFs of PopFanRemove @ 0x140994310
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  NTSTATUS result; // eax

  *(_BYTE *)(a1 + 440) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  result = KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    _InterlockedDecrement(&dword_140C3C5C8);
  }
  return result;
}
