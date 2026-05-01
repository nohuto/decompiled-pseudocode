/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1802A1A0C
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1802A2C30 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18004675C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180081740 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008CD70 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C72B0 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x1800C734C (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7878 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Get(
        __int64 a1,
        struct IInspectable **a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 32));
  CMarshaledInterface::operator=(&v8, (__int64 *)(a1 + 24));
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v7, (__int64 *)(a1 + 16));
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 32));
  v4 = 0;
  *a2 = 0LL;
  if ( v7 )
  {
    v5 = Microsoft::WRL::WeakRef::InternalResolve(
           (Microsoft::WRL::WeakRef *)&v7,
           &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc,
           a2);
LABEL_5:
    v4 = v5;
    goto LABEL_6;
  }
  if ( v8 )
  {
    v5 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v8, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, a2, 0);
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v7);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(&v8);
  return v4;
}
