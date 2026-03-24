/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C01672B0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0167FA4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168270 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     isChildPartition @ 0x1C00423A0 (isChildPartition.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0166DCC (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

__int64 RIMIDECreateDeviceInstancePath()
{
  unsigned int v0; // ebx
  int v1; // edx
  unsigned __int16 v2; // r8
  struct _UNICODE_STRING *v3; // r10
  int v4; // r11d
  int v5; // r9d
  __int64 v6; // r9
  __int64 v7; // r8
  const unsigned __int16 *v8; // rdx
  int v9; // eax
  int v10; // edx

  v0 = -1073741823;
  if ( !isChildPartition() )
  {
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        if ( v4 != 2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v0;
          v5 = 16;
          goto LABEL_7;
        }
        v6 = v2;
        v7 = (unsigned __int16)v1;
        v8 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
        goto LABEL_9;
      }
      v9 = RtlUnicodeStringPrintf(v3, L"\\??\\Microsoft Keyboard RID\\%u", (unsigned int)dword_1C0258580);
    }
    else
    {
      v9 = RtlUnicodeStringPrintf(v3, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C0258580);
    }
LABEL_20:
    v0 = v9;
    if ( v9 >= 0 )
    {
      ++dword_1C0258580;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 17, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v9);
    }
    return v0;
  }
  switch ( v4 )
  {
    case 0:
      v9 = RtlUnicodeStringPrintf(v3, L"\\??\\Microsoft Mouse RID\\c\\%u", (unsigned int)dword_1C0258580);
      goto LABEL_20;
    case 1:
      v9 = RtlUnicodeStringPrintf(v3, L"\\??\\Microsoft Keyboard RID\\c\\%u", (unsigned int)dword_1C0258580);
      goto LABEL_20;
    case 2:
      v6 = v2;
      v7 = (unsigned __int16)v1;
      v8 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
LABEL_9:
      v9 = RtlUnicodeStringPrintf(v3, v8, v7, v6, dword_1C0258580);
      goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 15;
LABEL_7:
    LOBYTE(v1) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v1, 1, v5, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v4);
  }
  return v0;
}
