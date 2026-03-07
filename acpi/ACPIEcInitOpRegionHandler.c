void ACPIEcInitOpRegionHandler()
{
  __int64 Pool2; // rbx
  unsigned int v1; // r11d
  size_t v2; // r11
  __int64 EcData; // rax
  _BYTE *v4; // rdi
  int v5; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  pcchLength = 0LL;
  if ( !gECDTContext && (unsigned int)ACPIMapNamedTable(1413759813, 0LL, 0LL, 0LL, &v6) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1164993345LL);
    if ( Pool2 )
    {
      if ( (int)ACPIMapNamedTable(1413759813, 0LL, 0LL, (void *)Pool2, &v6) < 0 )
        goto LABEL_24;
      v1 = *(_DWORD *)(Pool2 + 4);
      if ( v1 < 0x42 )
        goto LABEL_24;
      if ( RtlStringCchLengthA((STRSAFE_PCNZCH)(Pool2 + 65), v1 - 65, &pcchLength) < 0 )
        goto LABEL_24;
      if ( v2 < pcchLength + 66 )
        goto LABEL_24;
      EcData = ACPIEcCreateEcData();
      v4 = (_BYTE *)EcData;
      if ( !EcData )
        goto LABEL_24;
      *(_QWORD *)EcData = 0LL;
      if ( *(_BYTE *)(Pool2 + 36) == 1
        && *(_BYTE *)(Pool2 + 37) == 8
        && !*(_BYTE *)(Pool2 + 38)
        && *(_BYTE *)(Pool2 + 48) == 1
        && *(_BYTE *)(Pool2 + 49) == 8
        && !*(_BYTE *)(Pool2 + 50) )
      {
        *(_QWORD *)(EcData + 32) = *(_QWORD *)(Pool2 + 40);
        *(_QWORD *)(EcData + 40) = *(_QWORD *)(Pool2 + 40);
        *(_QWORD *)(EcData + 24) = *(_QWORD *)(Pool2 + 52);
        *(_DWORD *)(EcData + 48) = *(unsigned __int8 *)(Pool2 + 64);
        *(_DWORD *)(EcData + 16) = *(_DWORD *)(Pool2 + 60);
        if ( (int)AMLIGetNameSpaceObject((void *)(Pool2 + 65)) >= 0 )
        {
          v5 = *((_BYTE *)AcpiInformation + 133) ? ACPIEcConnectGpioInterrupt(v4) : ACPIEcConnectGpeVector(v4);
          if ( v5 >= 0 )
          {
            if ( (int)RegisterOperationRegionHandler(
                        0,
                        2,
                        3,
                        (unsigned int)ACPIEcOpRegionHandler,
                        (__int64)v4,
                        (__int64)(v4 + 80)) >= 0 )
            {
              v4[120] = 1;
              gECDTContext = (__int64)v4;
              goto LABEL_24;
            }
            if ( *((_BYTE *)AcpiInformation + 133) )
              ACPIEcDisconnectGpioInterrupt(v4);
            else
              ACPIEcDisconnectGpeVector(v4);
          }
        }
      }
      ExFreePoolWithTag(v4, 0);
LABEL_24:
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
}
