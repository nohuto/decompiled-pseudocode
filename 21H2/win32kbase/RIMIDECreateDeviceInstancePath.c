/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C0004D20
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00046D4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C019C4FC (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0004DBC (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(
        int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // r9
  const unsigned __int16 *v17; // rdx

  v5 = a3;
  v6 = a2;
  v8 = -1073741823;
  if ( !(unsigned __int8)isChildPartition() )
  {
    if ( !a1 )
    {
      v11 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C0296AE0);
      goto LABEL_5;
    }
    if ( a1 == 1 )
    {
      v11 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", (unsigned int)dword_1C0296AE0);
      goto LABEL_5;
    }
    if ( a1 != 2 )
    {
      v15 = WPP_GLOBAL_Control;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        goto LABEL_21;
      }
      return v8;
    }
    v17 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
    goto LABEL_24;
  }
  switch ( a1 )
  {
    case 0:
      v11 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\c\\%u", (unsigned int)dword_1C0296AE0);
LABEL_5:
      v8 = v11;
      if ( v11 < 0 )
      {
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (_DWORD)gRimLog,
            2,
            1,
            17,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
            v11);
        }
      }
      else
      {
        ++dword_1C0296AE0;
      }
      return v8;
    case 1:
      v11 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\c\\%u", (unsigned int)dword_1C0296AE0);
      goto LABEL_5;
    case 2:
      v17 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
LABEL_24:
      v11 = RtlUnicodeStringPrintf(a4, v17, v6, v5, dword_1C0296AE0);
      goto LABEL_5;
  }
  v15 = WPP_GLOBAL_Control;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 15;
LABEL_21:
    WPP_RECORDER_AND_TRACE_SF_D(
      v15->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      2,
      1,
      v16,
      (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
      a1);
  }
  return v8;
}
