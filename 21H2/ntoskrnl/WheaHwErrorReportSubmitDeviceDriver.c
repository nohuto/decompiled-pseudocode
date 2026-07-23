/*
 * XREFs of WheaHwErrorReportSubmitDeviceDriver @ 0x1405BC1B0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405BC2C0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405BC3E0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapErrorHandleIsValid @ 0x1405BC580 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC59C (WheapFreeDriverPacketBuffer.c)
 */

__int64 __fastcall WheaHwErrorReportSubmitDeviceDriver(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 *ErrorSource; // rax
  __int64 v5; // rsi
  int v6; // edx
  unsigned __int64 v7; // rdi

  if ( (unsigned __int8)WheapErrorHandleIsValid() )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 40) + 8LL) = *(_DWORD *)(BugCheckParameter2 + 8);
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(BugCheckParameter2 + 12));
    v5 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
    if ( v5 )
    {
      if ( (**(_DWORD **)(BugCheckParameter2 + 16) & 0x3FF0u) >= 0x10 )
      {
        v6 = *(_DWORD *)(BugCheckParameter2 + 100);
        v7 = (*(_QWORD *)(BugCheckParameter2 + 24) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (unsigned int)(v6 + *(_DWORD *)(BugCheckParameter2 + 8)) <= *(_DWORD *)(((unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL))
                                                                                   + 0x10) )
        {
          if ( (unsigned int)(v6 - 1) > 0x22 )
          {
            *(_DWORD *)(v7 + 88) = 0;
          }
          else
          {
            memmove(
              (void *)((*(_QWORD *)(BugCheckParameter2 + 24) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL),
              (const void *)(BugCheckParameter2 + 64),
              *(unsigned int *)(BugCheckParameter2 + 100));
            *(_DWORD *)(v7 + 88) = *(_DWORD *)(BugCheckParameter2 + 100);
            *(_WORD *)(v7 + 92) = *(_WORD *)(v5 + 60);
          }
          *(_QWORD *)(v7 + 72) = v5 + 44;
          *(_QWORD *)(v7 + 80) = *(_QWORD *)(BugCheckParameter2 + 56);
          PshedRetrieveErrorInfo(*(_QWORD *)(BugCheckParameter2 + 40), v5);
          v3 = WheaReportHwError(*(_QWORD *)(BugCheckParameter2 + 40));
          WheapFreeDriverPacketBuffer(BugCheckParameter2);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741789;
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
  return v3;
}
