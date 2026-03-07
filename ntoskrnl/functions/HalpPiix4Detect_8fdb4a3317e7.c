__int16 __fastcall HalpPiix4Detect(unsigned __int8 a1)
{
  int v1; // edi
  int BusData; // eax
  char CpuInfo; // al
  char v5; // r13
  ULONG v6; // esi
  char v7; // r12
  ULONG v8; // ebx
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r8
  ULONG v14; // edx
  unsigned __int16 v15; // r10
  HANDLE v16; // rcx
  ULONG v17; // ebx
  __int64 v18; // rcx
  __int16 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int16 Buffer_2; // [rsp+4Ah] [rbp-BEh]
  int Buffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG Disposition[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD ObjectAttributes[7]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v27[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v28[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v29[2]; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-38h] BYREF
  int v31[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 KeyValueInformation; // [rsp+128h] [rbp+20h] BYREF
  int v33; // [rsp+138h] [rbp+30h]

  v1 = 0;
  Buffer_2 = a1;
  KeyHandle = 0LL;
  Buffer = 0;
  Disposition[0] = 0;
  Buffer_4 = 0;
  Handle = 0LL;
  LODWORD(ObjectAttributes[0]) = 0;
  memset(&ObjectAttributes[1], 0, 44);
  memset(v31, 0, sizeof(v31));
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ValueName.Buffer = L"EnableBXWorkAround";
  v29[0] = 3276848LL;
  v29[1] = L"Services\\ACPI\\Parameters";
  v28[0] = 1572886LL;
  v28[1] = L"Control\\HAL";
  v27[0] = 5636180LL;
  v27[1] = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET";
  LOWORD(BusData) = 0;
  v33 = 0;
  KeyValueInformation = 0LL;
  if ( a1 )
  {
    BusData = _InterlockedIncrement(&HalpPiix4Initialized);
    if ( BusData != 1 )
      return BusData;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v27;
    ObjectAttributes[2] = 0LL;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    BusData = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
    if ( BusData < 0 )
      return BusData;
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v28;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) < 0 )
    {
LABEL_84:
      v16 = Handle;
      goto LABEL_37;
    }
  }
  else if ( !HalpPiix4Present )
  {
    return BusData;
  }
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, (unsigned __int8 *)&Buffer);
  v5 = 0;
  v6 = 0;
  v7 = CpuInfo != 0 ? Buffer : 0;
LABEL_6:
  v8 = 0;
  v9 = 0;
LABEL_7:
  v10 = v9 & 0x1F;
  while ( 1 )
  {
    v11 = v8 & 0xFFFFFF00;
    v8 = v10 | v8 & 0xFFFFFF00 | (32 * (v1 & 7));
    BusData = HalGetBusData(PCIConfiguration, v6, v10 | v11 | (32 * (v1 & 7)), v31, 2u);
    if ( !BusData )
      break;
    LOWORD(BusData) = LOWORD(v31[0]) - 1;
    if ( (unsigned __int16)(LOWORD(v31[0]) - 1) > 0xFFFDu )
    {
      if ( !v1 )
        goto LABEL_12;
      goto LABEL_11;
    }
    BusData = HalGetBusData(PCIConfiguration, v6, v8, v31, 0x10u);
    if ( BusData )
    {
      v12 = HalpInterruptModel();
      if ( !(_BYTE)Buffer_2 )
        goto LABEL_73;
      LOBYTE(v13) = v31[2];
      v14 = 1;
      v15 = v31[0];
      if ( v12 == 1 && !v6 && !v9 && !v1 && LOWORD(v31[0]) == 4358 && LOBYTE(v31[2]) < 0x80u )
        HalpInterruptSetMsiOverride(0);
      if ( v15 == 0x8086 && ((HIWORD(v31[0]) - 29072) & 0xFFFD) == 0 && (unsigned __int8)v13 <= 2u )
      {
        HIBYTE(Buffer_2) = v14;
        HalGetBusDataByOffset(PCIConfiguration, v6, v8, (char *)&Buffer + 1, 0x57u, v14);
        LOBYTE(v13) = v31[2];
        v15 = v31[0];
        if ( ((HIBYTE(Buffer) >> 5) & ((Buffer & 0x1800) != 0)) != 0 )
          HalpBroken440BX = 1;
      }
      if ( (int)HalpGetChipHacks(v15, HIWORD(v31[0]), v13, &Buffer_4) >= 0 )
      {
        if ( (Buffer_4 & 2) != 0 )
          HalpDisableHibernate = 1;
        if ( (Buffer_4 & 8) != 0 )
          HalpWhackICHUsbSmi(v6, v8);
      }
      if ( v7 != 2 || v5 )
        goto LABEL_73;
      LOWORD(BusData) = -32634;
      if ( LOWORD(v31[0]) != 0x8086 )
        goto LABEL_30;
      if ( v6 )
        goto LABEL_74;
      LOWORD(BusData) = HIWORD(v31[0]);
      if ( v9 == 17 )
      {
        if ( !v1 && HIWORD(v31[0]) == 0x98D0 )
          goto LABEL_72;
        if ( v1 != 1 )
          goto LABEL_29;
        if ( HIWORD(v31[0]) == 0x98D1 )
          goto LABEL_72;
      }
      if ( v9 != 16 )
        goto LABEL_29;
      if ( v1 == 6 && HIWORD(v31[0]) == 0xA0D0 || v1 == 7 && HIWORD(v31[0]) == 0xA0D1 )
        goto LABEL_72;
      if ( v1 == 6 )
      {
        if ( HIWORD(v31[0]) != 17360 )
          goto LABEL_29;
        if ( !LOBYTE(v31[2]) )
          goto LABEL_72;
      }
      if ( v1 == 7 && HIWORD(v31[0]) == 17361 )
      {
        if ( LOBYTE(v31[2]) )
          goto LABEL_11;
LABEL_72:
        v5 = 1;
        HalpInterruptSetLineSpecificOverride(23LL);
        HalpInterruptSetLineSpecificOverride(22LL);
LABEL_73:
        LOWORD(BusData) = -32634;
        if ( LOWORD(v31[0]) != 0x8086 )
          goto LABEL_30;
LABEL_74:
        LOWORD(BusData) = HIWORD(v31[0]);
      }
LABEL_29:
      if ( (_WORD)BusData == 28944 )
      {
        HalpPiix4Present = 1;
        v17 = v8 & 0xFFFFFF1F | 0x60;
        HalGetBusData(PCIConfiguration, v6, v17, v31, 0x40u);
        LOBYTE(v18) = v31[2];
        HalpPiix4 = v31[2];
        if ( (HalpWAETDeviceFlags & 2) == 0 )
          KeBugCheckEx(0x5Cu, 0x111uLL, (ULONG_PTR)"minkernel\\hals\\lib\\acpi\\xxacpi.c", 0x67AuLL, 0LL);
        if ( LOBYTE(v31[2]) <= 1u )
        {
          HalpPiix4BusNumber = v6;
          HalpPiix4SlotNumber = v17;
          HalGetBusDataByOffset(PCIConfiguration, v6, v17, &HalpPiix4DevActB, 0x58u, 4u);
          HalpPiix4DevActB |= 0x23u;
          HalSetBusDataByOffset(PCIConfiguration, HalpPiix4BusNumber, HalpPiix4SlotNumber, &HalpPiix4DevActB, 0x58u, 4u);
        }
        LOWORD(BusData) = HalpUsbLegacyStopUhciInterrupt(v18, v6, v17 & 0xFFFFFF5F, 1);
        break;
      }
LABEL_30:
      if ( v1 )
        goto LABEL_11;
      if ( (v31[3] & 0x800000) == 0 )
      {
LABEL_12:
        ++v9;
        v1 = 0;
        if ( v9 < 0x20 )
          goto LABEL_7;
        if ( ++v6 < 0x100 )
          goto LABEL_6;
        break;
      }
      v1 = 1;
    }
    else
    {
LABEL_11:
      if ( (unsigned int)++v1 >= 8 )
        goto LABEL_12;
    }
  }
  if ( !(_BYTE)Buffer_2 )
    return BusData;
  v16 = Handle;
  if ( Handle )
  {
    ZwClose(Handle);
    v16 = 0LL;
    Handle = 0LL;
  }
  if ( HIBYTE(Buffer_2) )
  {
    ObjectAttributes[2] = KeyHandle;
    LODWORD(ObjectAttributes[1]) = 48;
    ObjectAttributes[3] = v29;
    LODWORD(ObjectAttributes[4]) = 64;
    *(_OWORD *)&ObjectAttributes[5] = 0LL;
    if ( ZwCreateKey(&Handle, 0x20019u, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 0, 0LL, 0, Disposition) >= 0
      && ZwQueryValueKey(
           Handle,
           &ValueName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           (PULONG)ObjectAttributes) >= 0
      && DWORD2(KeyValueInformation) )
    {
      HalpBroken440BX = BYTE12(KeyValueInformation);
    }
    goto LABEL_84;
  }
LABEL_37:
  if ( v16 )
    ZwClose(v16);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LOWORD(BusData) = KeSetEvent(&HalpPiix4Detected, 0, 0);
  return BusData;
}
