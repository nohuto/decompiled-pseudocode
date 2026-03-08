/*
 * XREFs of AcpiArblibUnpackResource @ 0x1C007D3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiArblibUnpackResource(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        unsigned __int64 *a2,
        ULONGLONG *a3)
{
  unsigned __int8 Type; // r9

  Type = a1->Type;
  if ( ((a1->Type - 1) & 0xF9) != 0 || Type == 5 )
  {
    if ( Type == 6 )
    {
      *a2 = a1->u.Generic.Start.LowPart;
      *a3 = a1->u.Interrupt.Vector;
    }
  }
  else
  {
    *a3 = RtlCmDecodeMemIoResource(a1, a2);
  }
  return 0LL;
}
