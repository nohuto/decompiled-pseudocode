/*
 * XREFs of InitAcpiLpiStates @ 0x1C0035FE0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     Display_LPI @ 0x1C0006330 (Display_LPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_LPI @ 0x1C0025820 (AcpiEval_LPI.c)
 *     ValidateLpiState @ 0x1C002BA78 (ValidateLpiState.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  int v5; // ebx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  _DWORD *v8; // rsi
  int v9; // ecx
  __int64 i; // rbx
  PVOID v11; // rax
  const wchar_t *v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rdi
  int v16; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  P = 0LL;
  v2 = AcpiEval_LPI(a1, (__int64)&P);
  v5 = v2;
  if ( v2 >= 0 )
  {
    v8 = P;
    if ( P )
    {
      for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
      {
        v9 = ValidateLpiState((__int64)&v8[20 * i + 6], 0);
        if ( v9 < 0 )
          goto LABEL_15;
      }
      v9 = 0;
LABEL_15:
      v5 = v9;
      if ( v9 >= 0 )
      {
        v11 = P;
        v5 = 0;
        P = 0LL;
        v12 = *(const wchar_t **)(a1 + 64);
        *(_QWORD *)(a1 + 528) = v11;
        Display_LPI((__int64)v11, v12, v3, v4);
        goto LABEL_19;
      }
    }
    else
    {
      v5 = -1073741823;
      v9 = -1073741823;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v6 = 12;
    v16 = v9;
    v7 = 2;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      v6,
      (__int64)&WPP_c9178c11c8093e361aee475e5cbe99c8_Traceguids,
      v16);
    goto LABEL_19;
  }
  P = 0LL;
  if ( v2 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v6 = 11;
    v16 = v2;
    v7 = 3;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_c9178c11c8093e361aee475e5cbe99c8_Traceguids);
LABEL_19:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v5 < 0 )
    *(_QWORD *)(a1 + 272) &= 0xFFFFE1FFFFFFFFFFuLL;
  v13 = P;
  if ( P )
  {
    v14 = 0LL;
    if ( *((_DWORD *)P + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v13[20 * v14 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v13[20 * v14 + 22]);
          v13 = P;
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < v13[4] );
    }
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)v5;
}
