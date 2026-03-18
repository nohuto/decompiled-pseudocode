/*
 * XREFs of ExSetResourceOwnerPointer @ 0x140319F40
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x140936C60 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  USHORT Flag; // ax

  Flag = Resource->Flag;
  if ( !FeatureFastResource2 )
  {
    if ( (Flag & 1) == 0 )
      goto LABEL_3;
LABEL_5:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 1) != 0 )
    goto LABEL_5;
LABEL_3:
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
