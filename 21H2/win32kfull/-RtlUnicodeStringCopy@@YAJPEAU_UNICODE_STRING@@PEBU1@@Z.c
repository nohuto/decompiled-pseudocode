/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00A0F38
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00A0C7C (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1C0C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C010C288 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01CBCFC (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01CC254 (WriteTiltCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C00A10C8 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  unsigned int v9; // r11d
  _WORD *v10; // r14
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r10
  PWSTR Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx

  v5 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_WORD **)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker(a2, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && a2 )
  {
    Buffer = a2->Buffer;
    v15 = (unsigned __int64)a2->Length >> 1;
LABEL_7:
    v9 = v13;
    v16 = v13;
    if ( v11 )
    {
      while ( v15 )
      {
        --v15;
        *v10++ = *Buffer++;
        ++v16;
        if ( !--v11 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      if ( v15 )
        v9 = -2147483643;
    }
    LOWORD(v13) = v16;
    goto LABEL_12;
  }
  Buffer = (PWSTR)v13;
  v15 = v13;
  if ( v12 >= 0 )
    goto LABEL_7;
LABEL_12:
  a1->Length = 2 * v13;
  return v9;
}
