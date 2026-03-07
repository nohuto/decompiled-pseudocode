__int64 __fastcall ACPIBusIrpQueryBusInformation(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  const char *v8; // rax
  const char *v9; // rdx
  __int64 v10; // rcx

  LODWORD(v4) = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1299211073LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 17LL;
    *(GUID *)Pool2 = GUID_BUS_TYPE_ACPI;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64);
    v8 = byte_1C00622D0;
    v9 = byte_1C00622D0;
    if ( v7 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v10 = *(_QWORD *)(v7 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v4 + 608);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
        24,
        v4,
        v8,
        v9);
    LODWORD(v4) = -1073741670;
  }
  a2->IoStatus.Status = v4;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
