/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C00168C4
 * Callers:
 *     RaDriverPnpIrp @ 0x1C000BCE0 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA24 (RaidAcquireAdapterRemoveLock.c)
 *     RaForwardIrp @ 0x1C00159CC (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C0015C0C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0016A64 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C002A438 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x1C002A538 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002DA9C (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002DB30 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C002FFB0 (RaidAdapterStartDeviceIrp.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0033830 (WPP_SF_qqDD.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C0072D90 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C0072E74 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0077178 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781BC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0078CD4 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0078D74 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C007901C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C007914C (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 Context, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // ebp
  int v7; // ecx
  int v8; // eax
  char v9; // r14
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF

  v14 = 0LL;
  v5 = RaidAcquireAdapterRemoveLock(Context);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v14);
    if ( MinorFunction > 0x16 || (v8 = 4718720, !_bittest(&v8, MinorFunction)) )
    {
      if ( (byte_1C0069842 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(
          v7,
          v4,
          (unsigned int)&v14,
          (_DWORD)Irp,
          MinorFunction,
          0,
          *(_QWORD *)(Context + 8));
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *(_DWORD *)(Context + 88) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v9 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      Context,
      Irp,
      MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(Context, Irp);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(Context, Irp);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(Context, Irp);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && (byte_1C0069842 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            19,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(Context + 8));
        InterfaceIrp = RaidAdapterQueryIdIrp(Context, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(Context, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && (byte_1C0069842 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            22,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(Context + 8));
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(Context, Irp);
        break;
      case 0x17u:
        v9 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 280));
        v9 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v15 = 0LL;
          IoGetActivityIdIrp(Irp, &v15);
          if ( (byte_1C0069842 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v13, &EventPnpRequestComplete, &v15, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
        break;
    }
    goto LABEL_13;
  }
  if ( MinorFunction == 7 )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0069842 & 0x20) != 0 )
      McTemplateK0pddp_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation,
        v4,
        (unsigned int)&v14,
        (_DWORD)Irp,
        7,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
        *(_QWORD *)(Context + 8));
    InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(Context, Irp);
    goto LABEL_13;
  }
  if ( MinorFunction )
  {
    switch ( MinorFunction )
    {
      case 1u:
        InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(Context, Irp);
        break;
      case 2u:
        v9 = 0;
        InterfaceIrp = RaidAdapterRemoveDeviceIrp(Context, Irp);
        break;
      case 3u:
        goto LABEL_44;
      case 4u:
        InterfaceIrp = RaidAdapterStopDeviceIrp(Context, Irp);
        break;
      case 5u:
        InterfaceIrp = RaidAdapterQueryStopDeviceIrp(Context, Irp);
        break;
      default:
LABEL_44:
        InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(Context, Irp);
        break;
    }
  }
  else
  {
    InterfaceIrp = RaidAdapterStartDeviceIrp((PVOID)Context, Irp);
  }
LABEL_13:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 280));
  return v11;
}
