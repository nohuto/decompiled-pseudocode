ULONG __fastcall VfPnpDumpIrpStack(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rbx
  ULONG result; // eax
  const char *v5; // rdx
  const char *v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  DbgPrintEx(0x5Du, 0, "IRP_MJ_PNP.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  v3 = "(Bogus)";
  if ( (unsigned __int8)v2 > 0x18u )
  {
    v6 = "IRP_MN_BOGUS";
    if ( (_BYTE)v2 != 0xFF )
      v6 = "(Bogus)";
    result = VfUtilDbgPrint(v6);
  }
  else
  {
    result = VfUtilDbgPrint(PnPIrpNames[v2]);
  }
  if ( *(_BYTE *)(a1 + 1) != 7 )
  {
    switch ( *(_BYTE *)(a1 + 1) )
    {
      case 0xC:
        v14 = *(_DWORD *)(a1 + 8);
        if ( v14 )
        {
          if ( v14 == 1 )
            v3 = "(DeviceTextLocationInformation)";
        }
        else
        {
          v3 = "(DeviceTextDescription)";
        }
        break;
      case 0xF:
      case 0x10:
        return DbgPrintEx(
                 0x5Du,
                 0,
                 "(WhichSpace=%x, Buffer=%p, Offset=%x, Length=%x)",
                 *(_DWORD *)(a1 + 8),
                 *(const void **)(a1 + 16),
                 *(_DWORD *)(a1 + 24),
                 *(_DWORD *)(a1 + 32));
      case 0x12:
        v5 = "(False)";
        v10 = "(True)";
LABEL_23:
        if ( !*(_BYTE *)(a1 + 8) )
          v10 = v5;
        return VfUtilDbgPrint(v10, v5);
      case 0x13:
        v11 = *(_DWORD *)(a1 + 8);
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 == 1 )
                v3 = "(BusQueryInstanceID)";
            }
            else
            {
              v3 = "(BusQueryCompatibleIDs)";
            }
          }
          else
          {
            v3 = "(BusQueryHardwareIDs)";
          }
        }
        else
        {
          v3 = "(BusQueryDeviceID)";
        }
        break;
      case 0x16:
        v7 = *(_DWORD *)(a1 + 16);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            VfUtilDbgPrint("(DeviceUsageTypePaging");
            goto LABEL_22;
          }
          v9 = v8 - 1;
          if ( !v9 )
          {
            VfUtilDbgPrint("(DeviceUsageTypeHibernation");
            goto LABEL_22;
          }
          if ( v9 == 1 )
          {
            VfUtilDbgPrint("(DeviceUsageTypeDumpFile");
LABEL_22:
            v5 = ", InPath=FALSE)";
            v10 = ", InPath=TRUE)";
            goto LABEL_23;
          }
        }
        else
        {
          v3 = "(DeviceUsageTypeUndefined";
        }
        VfUtilDbgPrint(v3);
        goto LABEL_22;
      default:
        return result;
    }
    return VfUtilDbgPrint(v3, v5);
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return VfUtilDbgPrint("(EjectionRelations)", v5);
    v17 = v16 - 1;
    if ( !v17 )
      return VfUtilDbgPrint("(PowerRelations)", v5);
    v18 = v17 - 1;
    if ( !v18 )
      return VfUtilDbgPrint("(RemovalRelations)", v5);
    if ( v18 == 1 )
      return VfUtilDbgPrint("(TargetDeviceRelation)", v5);
    return VfUtilDbgPrint(v3, v5);
  }
  v10 = "(BusRelations)";
  return VfUtilDbgPrint(v10, v5);
}
