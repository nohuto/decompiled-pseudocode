char __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  char *i; // rax
  ULONG_PTR v4; // rbx
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rdi
  bool v8; // bp
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  _QWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]

  v16 = 0;
  v13 = 0LL;
  v12[1] = 0LL;
  v12[0] = a1 + 800;
  v12[2] = &AcpiDeviceTreeLock;
  v14 = 816LL;
  v15 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v12); ; i = ACPIExtListEnumNext((__int64)v12) )
  {
    v4 = (ULONG_PTR)i;
    result = ACPIExtListTestElement((__int64)v12, 1);
    if ( !result )
      break;
    if ( (*(_BYTE *)(v4 + 8) & 0x60) == 0x40 )
    {
      v6 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v4 + 784) != *(_QWORD *)&a2[2 * v6 + 2] )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = *(_QWORD *)(v4 + 1008) & 0x8000LL;
        v8 = (*(_QWORD *)(v4 + 1008) & 0x8000) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v4 + 768)) || v7 )
        {
          LOBYTE(v10) = v8;
          EnableDisableRegions(*(_QWORD *)(v4 + 760), 0LL, v10);
        }
        v11 = *(_DWORD *)(v4 + 1008);
        *(_DWORD *)(v4 + 368) = 5;
        if ( (*(_QWORD *)&v11 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x800uLL);
        LOBYTE(v9) = 1;
        ACPIInitStopDevice(v4, v9);
        ACPIThermalReleaseCoolingInterfaces(v4);
        ACPIBuildSurpriseRemovedExtension(v4);
      }
    }
  }
  return result;
}
