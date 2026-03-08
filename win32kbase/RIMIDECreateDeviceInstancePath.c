/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C0004A6C
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0004878 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C01C2E38 (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0004B28 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  PDEVICE_OBJECT v25; // rcx
  __int16 v26; // r9
  __int64 v27; // rax
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v5 = a3;
  v6 = a2;
  v8 = -1073741823;
  if ( !(unsigned __int8)isChildPartition() )
  {
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v13 = SGDGetUserSessionState(v10, v9, v11, v12);
        v14 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", *(unsigned int *)(v13 + 432));
        goto LABEL_5;
      }
      if ( a1 != 2 )
      {
        v25 = WPP_GLOBAL_Control;
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = 16;
          goto LABEL_20;
        }
        return v8;
      }
      v27 = SGDGetUserSessionState(v10, v9, v11, v12);
      v28 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
      goto LABEL_23;
    }
    v31 = SGDGetUserSessionState(v10, v9, v11, v12);
    v14 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", *(unsigned int *)(v31 + 432));
LABEL_5:
    v8 = v14;
    if ( v14 < 0 )
    {
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v17,
          (_DWORD)gRimLog,
          2,
          1,
          17,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v14);
      }
    }
    else
    {
      SGDGetUserSessionState(v16, v15, v17, v18);
      v23 = SGDGetUserSessionState(v20, v19, v21, v22);
      ++*(_DWORD *)(v23 + 432);
    }
    return v8;
  }
  switch ( a1 )
  {
    case 0:
      v30 = SGDGetUserSessionState(v10, v9, v11, v12);
      v14 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\c\\%u", *(unsigned int *)(v30 + 432));
      goto LABEL_5;
    case 1:
      v29 = SGDGetUserSessionState(v10, v9, v11, v12);
      v14 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\c\\%u", *(unsigned int *)(v29 + 432));
      goto LABEL_5;
    case 2:
      v27 = SGDGetUserSessionState(v10, v9, v11, v12);
      v28 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
LABEL_23:
      v14 = RtlUnicodeStringPrintf(a4, v28, v6, v5, *(_DWORD *)(v27 + 432));
      goto LABEL_5;
  }
  v25 = WPP_GLOBAL_Control;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = 15;
LABEL_20:
    WPP_RECORDER_AND_TRACE_SF_D(
      v25->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      2,
      1,
      v26,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
      a1);
  }
  return v8;
}
