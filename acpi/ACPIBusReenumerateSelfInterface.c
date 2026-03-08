/*
 * XREFs of ACPIBusReenumerateSelfInterface @ 0x1C0081AD4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall ACPIBusReenumerateSelfInterface(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9

  if ( *(_WORD *)(a2 + 16) >= 0x28u )
  {
    if ( *(_WORD *)(a2 + 18) )
    {
      v3 = ACPIInitReferenceDeviceExtension(a1);
      v2 = 0;
      if ( v3 )
      {
        *(_OWORD *)v4 = ReenumerateSelfInterface;
        *(_OWORD *)(v4 + 16) = *(_OWORD *)off_1C0060308;
        *(_QWORD *)(v4 + 32) = ACPIBusReenumerateSelf;
        *(_QWORD *)(v4 + 8) = v5;
      }
      else
      {
        return (unsigned int)-1073741595;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v2;
}
