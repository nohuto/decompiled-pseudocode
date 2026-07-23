/*
 * XREFs of WheaAddHwErrorReportSectionDeviceDriver @ 0x1405BBEE0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405BC2C0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405BC3E0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapErrorHandleIsValid @ 0x1405BC580 (WheapErrorHandleIsValid.c)
 */

__int64 __fastcall WheaAddHwErrorReportSectionDeviceDriver(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 *ErrorSource; // rax
  __int64 v8; // r11
  __int64 v9; // rdx

  v4 = a2;
  if ( (unsigned __int8)WheapErrorHandleIsValid() )
  {
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(v5 + 12));
    if ( ((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64)) != 0 )
    {
      if ( *(_DWORD *)(v8 + 4) >= *(_DWORD *)(((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64))
                                            + 0x8C)
        || (unsigned int)v4 > *(_DWORD *)(((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64))
                                        + 0x88)
        || (unsigned int)(v4 + *(_DWORD *)(v8 + 8)) > *(_DWORD *)(((unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64))
                                                                + 0x10) )
      {
        return (unsigned int)-1073741670;
      }
      else
      {
        **(_DWORD **)(v8 + 16) ^= ((unsigned __int16)**(_DWORD **)(v8 + 16) ^ (unsigned __int16)(**(_DWORD **)(v8 + 16)
                                                                                               + 16)) & 0x3FF0;
        v9 = *(_QWORD *)(v8 + 24);
        *(_DWORD *)(v9 + 16) = *(_DWORD *)(v8 + 52);
        *(_DWORD *)(v9 + 24) = v4;
        *(_WORD *)(v9 + 20) = 768;
        *(_QWORD *)(a3 + 24) = v9 + 44;
        *(_QWORD *)(a3 + 16) = v9;
        *(_BYTE *)(v9 + 22) |= 2u;
        ++*(_DWORD *)(v8 + 4);
        *(_QWORD *)(a3 + 32) = v9 + 23;
        *(_QWORD *)(a3 + 4) = v9 + 72;
        *(_DWORD *)(a3 + 12) = v4;
        *(_QWORD *)(v8 + 24) = v9 + 72 + v4;
        *(_DWORD *)(v8 + 8) += v4 + 72;
        *(_DWORD *)a3 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741130;
    }
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v6;
}
