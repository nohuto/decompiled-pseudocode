__int64 __fastcall Crashdump_Initialize(_DWORD *Address)
{
  const char *v2; // r9
  __int128 v3; // xmm0
  int v4; // edi
  int v5; // ebx
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // ebx
  __int128 *v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  __int64 **v16; // rbx
  int v17; // eax
  int v18; // eax
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: Begin\n");
  v2 = "HS";
  v3 = *(_OWORD *)(Address + 2);
  v4 = HIBYTE(**(_DWORD **)(*(_QWORD *)Address + 24LL));
  v5 = HIWORD(**(_DWORD **)(*(_QWORD *)Address + 24LL));
  v6 = Address[131] == 2;
  *((_BYTE *)Address + 627) = HIBYTE(**(_DWORD **)(*(_QWORD *)Address + 24LL));
  if ( !v6 )
    v2 = "SS";
  *((_BYTE *)Address + 628) = v5;
  *((_BYTE *)Address + 624) = 0;
  v7 = Address[136];
  v20 = v3;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device speed: %s, RootHub port #: %u\n", v2, v7);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: xHCI version: 0x%x.0x%x, ContextSize: %u, ScratchpadBuffers: %u, DeviceSlots: %u\n",
    v4,
    (unsigned __int8)v5,
    (*(_DWORD *)(*(_QWORD *)Address + 104LL) >> 2) & 1,
    Address[7],
    Address[6]);
  v8 = 0;
  v9 = &v20;
  do
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device Flag[%d]:  0x%I64X\n", v8++, *(_QWORD *)v9);
    v9 = (__int128 *)((char *)v9 + 8);
  }
  while ( v8 < 2 );
  v10 = Address[146];
  if ( v10 == 2 )
  {
    Address[146] = 3;
  }
  else if ( v10 == 1 || v10 == 5 )
  {
    *((_BYTE *)Address + 626) = 1;
    v11 = Crashdump_InitializeWithoutControllerReset(Address);
    if ( v11 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_InitializeWithoutControllerReset failed with error 0x%X\n", v11);
      v12 = Crashdump_InitializeWithControllerReset(Address);
      v13 = v12;
      if ( v12 < 0 )
      {
LABEL_26:
        DbgPrintEx(
          0x93u,
          1u,
          "XHCIDUMP: Crashdump_InitializeWithControllerReset failed with error 0x%X\n",
          (unsigned int)v12);
        goto LABEL_27;
      }
    }
  }
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Address + 32LL) + 4LL);
  if ( (v14 & 0x800) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is not ready, cannot continue.\n");
LABEL_17:
    v13 = -1073741823;
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_VerifyRegisterState failed with error 0x%X\n", 3221225473LL);
    goto LABEL_27;
  }
  if ( (v14 & 4) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Host System Error bit is set, cannot continue.\n");
    goto LABEL_17;
  }
  if ( (v14 & 0x1000) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is in an error state, cannot continue.\n");
    goto LABEL_17;
  }
  v15 = Address[146];
  v13 = 0;
  if ( !v15 || v15 == 3 )
  {
    Crashdump_Register_LogRHPortInfo(Address, (unsigned int)Address[136]);
    if ( Address[146] == 3 )
    {
      v16 = (__int64 **)*((_QWORD *)Address + 62);
      if ( *v16 != (__int64 *)v16 )
      {
        do
        {
          memset(v16[2], 0, *((unsigned int *)v16 + 10));
          v16 = (__int64 **)*v16;
        }
        while ( *v16 != *((__int64 **)Address + 62) );
      }
      v17 = Crashdump_Register_BiosHandoff(Address);
      if ( v17 < 0 )
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_BiosHandoff failed with error 0x%X\n", v17);
    }
    v12 = Crashdump_InitializeWithControllerReset(Address);
    v13 = v12;
    if ( v12 < 0 )
      goto LABEL_26;
  }
LABEL_27:
  v18 = Address[146];
  *((_BYTE *)Address + 625) = 0;
  switch ( v18 )
  {
    case 1:
      Address[146] = 2;
      break;
    case 5:
      v6 = (v20 & 2) == 0;
      Address[146] = 2;
      if ( v6 && !*((_BYTE *)Address + 624) )
        *((_BYTE *)Address + 625) = 1;
      break;
    case 3:
      Address[146] = 4;
      break;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: End 0x%X\n", v13);
  return v13;
}
