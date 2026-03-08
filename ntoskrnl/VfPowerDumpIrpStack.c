/*
 * XREFs of VfPowerDumpIrpStack @ 0x140AE4670
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 */

char __fastcall VfPowerDumpIrpStack(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // cf
  const char *v5; // rcx

  VfUtilDbgPrint("IRP_MJ_POWER.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8)v2 > 3u )
  {
    v5 = "IRP_MN_BOGUS";
    if ( (_BYTE)v2 != 0xFF )
      v5 = "(Bogus)";
    LOBYTE(v3) = VfUtilDbgPrint(v5);
  }
  else
  {
    VfUtilDbgPrint(PowerIrpNames[v2]);
    LOBYTE(v3) = *(_BYTE *)(a1 + 1);
    v4 = (_BYTE)v3 == 2;
    LOBYTE(v3) = v3 - 2;
    if ( v4 || (_BYTE)v3 == 1 )
    {
      VfUtilDbgPrint("(");
      v3 = *(int *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 16) )
      {
        if ( (int)v3 <= 4 )
        {
          if ( (int)v3 < 0 )
            return v3;
          VfUtilDbgPrint(DeviceStateNames[v3]);
        }
      }
      else if ( (int)v3 <= 6 )
      {
        if ( (int)v3 < 0 )
          return v3;
        VfUtilDbgPrint(SystemStateNames[v3]);
      }
      v3 = *(int *)(a1 + 32);
      if ( (int)v3 > 7 )
      {
LABEL_13:
        LOBYTE(v3) = VfUtilDbgPrint(")");
        return v3;
      }
      if ( (int)v3 >= 0 )
      {
        VfUtilDbgPrint(ActionNames[v3]);
        goto LABEL_13;
      }
    }
  }
  return v3;
}
