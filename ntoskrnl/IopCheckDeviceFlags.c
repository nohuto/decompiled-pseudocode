/*
 * XREFs of IopCheckDeviceFlags @ 0x140A9B7F0
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x1402FAAFC (IoGetLowerDeviceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall IopCheckDeviceFlags(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  char v4; // si
  _DWORD *LowerDeviceObjectWithTag; // rbx

  v2 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  ObfReferenceObjectWithTag(v2, 0x70506F50u);
  if ( v2 )
  {
    while ( (a2 & v2[12]) == 0 )
    {
      LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v2, 0x70506F50u);
      ObfDereferenceObjectWithTag(v2, 0x70506F50u);
      v2 = LowerDeviceObjectWithTag;
      if ( !LowerDeviceObjectWithTag )
        return v4;
    }
    v4 = 1;
    ObfDereferenceObjectWithTag(v2, 0x70506F50u);
  }
  return v4;
}
