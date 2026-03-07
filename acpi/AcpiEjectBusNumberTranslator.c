__int64 __fastcall AcpiEjectBusNumberTranslator(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_WORD *)(v4 + 18) )
    return 3221225659LL;
  if ( *(_WORD *)(v4 + 16) >= 0x30u )
  {
    v8 = 0LL;
    if ( (int)ACPIGet(DeviceExtension, 0x4745535Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v8, 0LL) >= 0 && v8 )
    {
      *(_DWORD *)v5 = 48;
      v7 = (unsigned __int16)v8;
      *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
      *(_QWORD *)(v5 + 32) = AcpiTranslateBusNumberResource;
      *(_QWORD *)(v5 + 40) = AcpiTranslateBusNumberRequirements;
      *(_QWORD *)(v5 + 8) = v7;
      PciConfigPinToLine();
      return 0LL;
    }
    else
    {
      return *(unsigned int *)(a2 + 48);
    }
  }
  else
  {
    *(_WORD *)v5 = 48;
    return 3221225485LL;
  }
}
