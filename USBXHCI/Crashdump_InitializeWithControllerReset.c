__int64 __fastcall Crashdump_InitializeWithControllerReset(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // xmm1_8
  int v6; // eax
  int started; // eax
  int v8; // eax
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // r15
  unsigned int v12; // ebp
  int PortType; // eax
  __int64 v14; // r15
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0;
  *(_BYTE *)(a1 + 624) = 1;
  v2 = Crashdump_Register_ResetController();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *(unsigned int *)(a1 + 408);
    v5 = *(_QWORD *)(a1 + 432);
    v19 = *(_OWORD *)(a1 + 416);
    v20 = v5;
    Crashdump_Register_UpdateDeviceSlotInfo(a1, v4, &v19);
    Crashdump_EventRing_PrepareForDump(a1 + 72);
    v6 = Crashdump_Command_PrepareForDump(a1 + 328);
    v3 = v6;
    if ( v6 >= 0 )
    {
      started = Crashdump_Register_StartController(a1);
      v3 = started;
      if ( started >= 0 )
      {
        Crashdump_Register_LogRHPortInfo(a1, *(unsigned int *)(a1 + 544));
        v8 = Crashdump_Command_TestCommandRingOperation(a1 + 328);
        v3 = v8;
        if ( v8 >= 0 )
        {
          v9 = 0LL;
          if ( *(_DWORD *)(a1 + 536) )
          {
            while ( 1 )
            {
              v10 = *(_DWORD *)(a1 + 4 * v9 + 544);
              if ( (_DWORD)v9 )
              {
                v11 = 376LL * (unsigned int)(v9 - 1);
                if ( (_DWORD)v9 == 1 )
                {
                  v12 = *(_DWORD *)(a1 + 528);
                  v21 = v12;
                }
                else
                {
                  PortType = Crashdump_UsbDevice_GetPortType(
                               v11 + *(_QWORD *)(a1 + 568),
                               *(unsigned int *)(a1 + 4LL * (unsigned int)(v9 - 1) + 544),
                               &v21);
                  v3 = PortType;
                  if ( PortType < 0 )
                  {
                    DbgPrintEx(
                      0x93u,
                      1u,
                      "XHCIDUMP: Crashdump_UsbDevice_GetPortType failed with error 0x%X\n",
                      (unsigned int)PortType);
                    return v3;
                  }
                  v12 = v21;
                }
                if ( v12 == 20 )
                {
                  v14 = *(_QWORD *)(a1 + 568) + v11;
                  v15 = Crashdump_UsbDevice_SetPortPower(v14, v10);
                  v3 = v15;
                  if ( v15 < 0 )
                  {
                    DbgPrintEx(
                      0x93u,
                      1u,
                      "XHCIDUMP: Crashdump_UsbDevice_SetPortPower failed with error 0x%X\n",
                      (unsigned int)v15);
                    return v3;
                  }
                  v16 = Crashdump_UsbDevice_ResetPort(v14, v10, 20LL);
                  v3 = v16;
                  if ( v16 < 0 )
                  {
                    DbgPrintEx(
                      0x93u,
                      1u,
                      "XHCIDUMP: Crashdump_UsbDevice_ResetPort failed with error 0x%X\n",
                      (unsigned int)v16);
                    return v3;
                  }
                }
              }
              else
              {
                v21 = *(_DWORD *)(a1 + 528);
                v12 = v21;
                v17 = Crashdump_Register_ResetPort(a1, v10, v21);
                v3 = v17;
                if ( v17 < 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    1u,
                    "XHCIDUMP: Crashdump_Register_ResetPort failed with error 0x%X\n",
                    (unsigned int)v17);
                  return v3;
                }
              }
              v3 = Crashdump_UsbDevice_ReConfigureOnControllerReset(
                     *(_QWORD *)(a1 + 568) + 376LL * (unsigned int)v9,
                     v12);
              if ( (v3 & 0x80000000) == 0 )
              {
                v9 = (unsigned int)(v9 + 1);
                if ( (unsigned int)v9 < *(_DWORD *)(a1 + 536) )
                  continue;
              }
              return v3;
            }
          }
        }
        else
        {
          DbgPrintEx(
            0x93u,
            1u,
            "XHCIDUMP: Crashdump_Command_TestCommandRingOperation failed with error 0x%X\n",
            (unsigned int)v8);
        }
      }
      else
      {
        DbgPrintEx(
          0x93u,
          1u,
          "XHCIDUMP: Crashdump_Register_StartController failed with error 0x%X\n",
          (unsigned int)started);
      }
    }
    else
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_PrepareForDump failed with error 0x%X\n", (unsigned int)v6);
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_ResetController failed with error 0x%X\n", (unsigned int)v2);
  }
  return v3;
}
