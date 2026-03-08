/*
 * XREFs of RootHub_PopulatePortFlagsFromRegistry @ 0x1C00750D4
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_D @ 0x1C00180C4 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_PopulatePortFlagsFromRegistry(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  _UNKNOWN **v4; // rdx
  unsigned int v5; // r8d
  unsigned int Ulong; // eax
  _UNKNOWN **v7; // rdx
  _UNKNOWN **v8; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v11 = 0LL;
  v10 = 0;
  DestinationString = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 384))(
             WdfDriverGlobals,
             *v1,
             1LL,
             131097LL,
             0LL,
             &v11);
  if ( (int)result < 0 )
  {
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 3;
      result = WPP_RECORDER_SF_d(
                 v1[9],
                 (_DWORD)v4,
                 11,
                 264,
                 (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                 result);
    }
  }
  else
  {
    result = g_WdfDriverUsbXhciContext;
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) )
    {
      RtlInitUnicodeString(&DestinationString, L"IgnoreStatusChangesPortNumber");
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, unsigned int *))(WdfFunctions_01023 + 1920))(
                 WdfDriverGlobals,
                 v11,
                 &DestinationString,
                 &v10);
      if ( (int)result >= 0 )
      {
        v5 = v10;
        if ( v10 <= *(_DWORD *)(a1 + 16)
          && v10
          && (result = *(_QWORD *)(a1 + 48), *(_BYTE *)(120LL * (v10 - 1) + result + 13) == 3) )
        {
          result = (__int64)KdDebuggerEnabled;
          if ( !(_BYTE)KdDebuggerEnabled
            || *(_BYTE *)(a1 + 56) == 1
            && (Ulong = XilRegister_ReadUlong(v1[11], (unsigned int *)(*(_QWORD *)(v1[11] + 72LL) + 36LL)),
                v5 = v10,
                result = HIBYTE(Ulong),
                (_DWORD)result != v10) )
          {
            result = *(_QWORD *)(a1 + 48);
            _InterlockedOr((volatile signed __int32 *)(120LL * (v5 - 1) + result + 64), 2u);
            v7 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = 4;
              result = WPP_RECORDER_SF_D(
                         v1[9],
                         (_DWORD)v7,
                         11,
                         266,
                         (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                         v10);
            }
          }
        }
        else
        {
          v8 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 3;
            result = WPP_RECORDER_SF_D(
                       v1[9],
                       (_DWORD)v8,
                       4,
                       265,
                       (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
                       v10);
          }
        }
      }
    }
  }
  if ( v11 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  return result;
}
