__int64 __fastcall HalpGetIommuInterfaceEx(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  if ( (unsigned int)(a1 - 1) <= 2 )
  {
    if ( !a3 )
      return 3221225712LL;
    if ( a2 )
      return 3221225713LL;
    switch ( a1 )
    {
      case 1:
        *(_DWORD *)(a3 + 12) = 0;
        *(_QWORD *)(a3 + 16) = IommuDomainCreate;
        *(_QWORD *)(a3 + 24) = IommuDomainDelete;
        *(_QWORD *)(a3 + 32) = IommuDomainAttachDevice;
        *(_QWORD *)(a3 + 40) = IommuDomainDetachDevice;
        *(_QWORD *)(a3 + 48) = IommuFlushDomain;
        *(_QWORD *)(a3 + 56) = IommuFlushDomainVaList;
        *(_QWORD *)(a3 + 64) = xHalUnmaskInterrupt;
        *(_QWORD *)(a3 + 72) = IommuMapLogicalRange;
        *(_QWORD *)(a3 + 80) = IommuUnmapLogicalRange;
        *(_QWORD *)(a3 + 88) = IommuMapIdentityRange;
        *(_QWORD *)(a3 + 96) = IommuUnmapIdentityRange;
        *(_QWORD *)(a3 + 104) = IommuSetDeviceFaultReporting;
        *(_QWORD *)(a3 + 112) = IommuDomainConfigure;
        v4 = 120LL;
        goto LABEL_12;
      case 2:
        *(_DWORD *)(a3 + 12) = 0;
        *(_QWORD *)(a3 + 16) = IommuDomainCreateEx;
        *(_QWORD *)(a3 + 24) = IommuDomainDelete;
        *(_QWORD *)(a3 + 32) = IommuDomainAttachDeviceEx;
        *(_QWORD *)(a3 + 40) = IommuDomainDetachDeviceEx;
        *(_QWORD *)(a3 + 48) = IommuFlushDomain;
        *(_QWORD *)(a3 + 56) = IommuFlushDomainVaList;
        *(_QWORD *)(a3 + 64) = xHalUnmaskInterrupt;
        *(_QWORD *)(a3 + 72) = IommuMapLogicalRangeEx;
        *(_QWORD *)(a3 + 80) = IommuUnmapLogicalRange;
        *(_QWORD *)(a3 + 88) = IommuMapIdentityRangeEx;
        *(_QWORD *)(a3 + 96) = IommuUnmapIdentityRangeEx;
        *(_QWORD *)(a3 + 104) = xKdEnumerateDebuggingDevices;
        *(_QWORD *)(a3 + 112) = IommuDomainConfigure;
        *(_QWORD *)(a3 + 120) = IommuDeviceQueryDomainTypes;
        *(_QWORD *)(a3 + 128) = IommuRegisterInterfaceStateChangeCallback;
        *(_QWORD *)(a3 + 136) = IommuUnregisterInterfaceStateChangeCallback;
        *(_QWORD *)(a3 + 144) = IommuReserveLogicalAddressRange;
        *(_QWORD *)(a3 + 152) = IommuFreeReservedLogicalAddressRange;
        *(_QWORD *)(a3 + 160) = IommuMapReservedLogicalRange;
        *(_QWORD *)(a3 + 168) = IommuUnmapReservedLogicalRange;
        *(_QWORD *)(a3 + 176) = IommuDeviceCreate;
        *(_QWORD *)(a3 + 184) = IommuDeviceDelete;
        v4 = 192LL;
        goto LABEL_12;
      case 3:
        *(_DWORD *)(a3 + 12) = 0;
        *(_QWORD *)(a3 + 16) = IommuDomainCreateEx;
        *(_QWORD *)(a3 + 24) = IommuDomainDelete;
        *(_QWORD *)(a3 + 32) = IommuDomainAttachDeviceEx;
        *(_QWORD *)(a3 + 40) = IommuDomainDetachDeviceEx;
        *(_QWORD *)(a3 + 48) = IommuFlushDomain;
        *(_QWORD *)(a3 + 56) = IommuFlushDomainVaList;
        *(_QWORD *)(a3 + 64) = xHalUnmaskInterrupt;
        *(_QWORD *)(a3 + 72) = IommuMapLogicalRangeEx;
        *(_QWORD *)(a3 + 80) = IommuUnmapLogicalRange;
        *(_QWORD *)(a3 + 88) = IommuMapIdentityRangeEx;
        *(_QWORD *)(a3 + 96) = IommuUnmapIdentityRangeEx;
        *(_QWORD *)(a3 + 104) = xKdEnumerateDebuggingDevices;
        *(_QWORD *)(a3 + 112) = IommuDomainConfigure;
        *(_QWORD *)(a3 + 120) = IommuDeviceQueryDomainTypes;
        *(_QWORD *)(a3 + 128) = IommuRegisterInterfaceStateChangeCallback;
        *(_QWORD *)(a3 + 136) = IommuUnregisterInterfaceStateChangeCallback;
        *(_QWORD *)(a3 + 144) = IommuReserveLogicalAddressRange;
        *(_QWORD *)(a3 + 152) = IommuFreeReservedLogicalAddressRange;
        *(_QWORD *)(a3 + 160) = IommuMapReservedLogicalRange;
        *(_QWORD *)(a3 + 168) = IommuUnmapReservedLogicalRange;
        *(_QWORD *)(a3 + 176) = IommuDeviceCreate;
        *(_QWORD *)(a3 + 184) = IommuDeviceDelete;
        *(_QWORD *)(a3 + 192) = IommuPasidDeviceCreate;
        *(_QWORD *)(a3 + 200) = IommuPasidDeviceDelete;
        *(_QWORD *)(a3 + 208) = IommuDomainAttachPasidDevice;
        *(_QWORD *)(a3 + 216) = IommuDomainDetachPasidDevice;
        *(_QWORD *)(a3 + 224) = IommuDeviceQueryInformation;
        v4 = 232LL;
LABEL_12:
        *(_QWORD *)a3 = v4;
        result = 0LL;
        *(_DWORD *)(a3 + 8) = a1;
        return result;
    }
  }
  return 3221225711LL;
}
