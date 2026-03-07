__int64 __fastcall ACPIBusIrpUnhandled(ULONG_PTR a1, IRP *a2)
{
  unsigned int MinorFunction; // ebp
  __int64 DeviceExtension; // rax
  unsigned int Status; // edi
  _QWORD *v6; // rbx
  char v7; // r8
  const char *v8; // r10
  const char *v9; // rdx
  __int64 v10; // rax
  int v11; // eax

  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v6 = (_QWORD *)DeviceExtension;
  IofCompleteRequest(a2, 0);
  v7 = 0;
  v8 = (const char *)&unk_1C00622D0;
  v9 = (const char *)&unk_1C00622D0;
  if ( v6 )
  {
    v10 = v6[1];
    v7 = (char)v6;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v6[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = (const char *)v6[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v11 = 26;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x41u,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)a2,
      (__int64)(&ACPIDispatchPnpTableNames)[v11],
      Status,
      v7,
      v8,
      v9);
  }
  return Status;
}
