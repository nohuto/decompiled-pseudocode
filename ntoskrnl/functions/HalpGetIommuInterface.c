__int64 __fastcall HalpGetIommuInterface(int a1, _QWORD *a2)
{
  if ( a1 != 1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  *a2 = 1LL;
  a2[1] = IommuDomainCreate;
  a2[2] = IommuDomainDelete;
  a2[3] = IommuDomainAttachDevice;
  a2[4] = IommuDomainDetachDevice;
  a2[12] = IommuSetDeviceFaultReporting;
  a2[13] = IommuDomainConfigure;
  a2[5] = IommuFlushDomain;
  a2[6] = IommuFlushDomainVaList;
  a2[7] = xHalUnmaskInterrupt;
  a2[8] = IommuMapLogicalRange;
  a2[9] = IommuUnmapLogicalRange;
  a2[10] = IommuMapIdentityRange;
  a2[11] = IommuUnmapIdentityRange;
  return 0LL;
}
