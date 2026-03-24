/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00E130C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0024954 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00E1190 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C00E41C0 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01CEE1C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01CF40C (WriteTiltCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00E15C8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C00E1638 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  __int16 v3; // bx
  size_t v5; // rdx
  NTSTATUS v6; // r8d
  unsigned __int64 v7; // r10
  PWSTR Buffer; // r11
  size_t v9; // rcx
  __int16 v10; // dx
  char *v11; // r9
  size_t v13; // [rsp+20h] [rbp-18h]
  ULONG v14; // [rsp+28h] [rbp-10h]
  size_t v15; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v6 = RtlUnicodeStringValidateDestWorker(a1, &v16, &v15, 0LL, v13, v14);
  if ( v6 >= 0 )
  {
    v6 = RtlUnicodeStringValidateWorker(a2, v5, v6);
    if ( v6 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v7 = (unsigned __int64)a2->Length >> 1;
      }
      v9 = v15;
      v6 = 0;
      v10 = 0;
      if ( !v15 )
        goto LABEL_13;
      v11 = (char *)((char *)v16 - (char *)Buffer);
      do
      {
        if ( !v7 )
          break;
        --v7;
        *(PWSTR)((char *)Buffer + (_QWORD)v11) = *Buffer;
        ++v10;
        ++Buffer;
        --v9;
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_13:
        if ( v7 )
          v6 = -2147483643;
      }
      v3 = v10;
    }
    a1->Length = 2 * v3;
  }
  return (unsigned int)v6;
}
