/*
 * XREFs of HUBACPI_EvaluateDSD @ 0x1C008A5B8
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     RtlUnicodeStringPrintf @ 0x1C000C4DC (RtlUnicodeStringPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C008A174 (HUBACPI_EvalAcpiMethodEx.c)
 */

__int64 __fastcall HUBACPI_EvaluateDSD(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7)
{
  int v8; // eax
  NTSTATUS v9; // esi
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  _WORD *v16; // rbx
  _WORD *v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  const char *v20; // rbx
  __int64 v21; // rax
  unsigned __int16 v22; // r9
  unsigned int v23; // r8d
  unsigned __int16 v24; // si
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 v27; // [rsp+58h] [rbp-21h] BYREF
  __int128 v28; // [rsp+68h] [rbp-11h]
  __int128 v29; // [rsp+78h] [rbp-1h]
  __int64 v30; // [rsp+88h] [rbp+Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v27 = 0LL;
  LODWORD(v30) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v8 = HUBACPI_EvalAcpiMethodEx(a1, a2, 1146307679, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x1Cu,
        (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
        a6,
        v8);
    goto LABEL_46;
  }
  v9 = -1073741823;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          a5,
          0LL);
  v11 = v10;
  if ( !*(_DWORD *)(v10 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 6u, 0x1Du, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_46;
  }
  v12 = 0;
  v13 = v10 + 12;
  v14 = 4LL;
  while ( 1 )
  {
    if ( (v12 & 1) == 0
      && *(_DWORD *)v13 == 1048578
      && RtlCompareMemory((const void *)(v13 + 4), &ACPI_DEVICE_PROPERTIES_DSD_GUID, 0x10uLL) == 16 )
    {
      v15 = *(unsigned __int16 *)(v13 + 2);
      if ( (unsigned __int16)v15 < 4u )
        v15 = 4LL;
      v16 = (_WORD *)(v13 + v15 + 4);
      v17 = v16;
      v18 = (unsigned __int64)v16 + (unsigned __int16)v16[1];
      if ( *v16 == 3 )
        break;
    }
    v19 = *(unsigned __int16 *)(v13 + 2);
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    ++v12;
    v13 += v19 + 4;
    if ( v12 >= *(_DWORD *)(v11 + 8) )
      goto LABEL_46;
  }
  v20 = (const char *)(v16 + 2);
  if ( (unsigned __int64)(v17 + 6) >= v18 )
    goto LABEL_46;
  while ( 1 )
  {
    v21 = *((unsigned __int16 *)v20 + 1);
    if ( *(_WORD *)v20 != 3 || (unsigned __int16)v21 < 0x10u )
    {
      if ( (unsigned __int16)v21 < 4u )
        v21 = 4LL;
      goto LABEL_29;
    }
    if ( *((_WORD *)v20 + 2) == 1 && *((_WORD *)v20 + 3) == 20 )
      break;
LABEL_29:
    v20 += v21 + 4;
    if ( (unsigned __int64)(v20 + 8) >= v18 )
      goto LABEL_46;
  }
  if ( strncmp(v20 + 8, "usb4-host-interface", 0x13uLL) )
  {
    v21 = *((unsigned __int16 *)v20 + 1);
    if ( (unsigned __int16)v21 < 4u )
      v21 = 4LL;
    goto LABEL_29;
  }
  if ( *((_WORD *)v20 + 3) >= 4u )
    v14 = *((unsigned __int16 *)v20 + 3);
  if ( (unsigned __int64)&v20[v14 + 16] > v18 )
  {
    v9 = -1072431099;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 30;
      goto LABEL_36;
    }
LABEL_46:
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0x70334855u);
    return (unsigned int)v9;
  }
  if ( *(_WORD *)&v20[v14 + 8] != 1 )
  {
    v9 = -1072431096;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    v22 = 31;
LABEL_36:
    v23 = 6;
    goto LABEL_37;
  }
  v24 = 2 * *(_WORD *)&v20[v14 + 10];
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v24, 1882409045LL);
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v24;
    v9 = RtlUnicodeStringPrintf(&DestinationString, L"%S", &v20[v14 + 12]);
    if ( v9 >= 0 )
    {
      v30 = 0LL;
      *(_QWORD *)&v28 = 0LL;
      *((_QWORD *)&v28 + 1) = 0x100000001LL;
      v29 = 0LL;
      *(_QWORD *)&v29 = *(_QWORD *)(a1 + 16);
      v27 = 0LL;
      LODWORD(v27) = 56;
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, __int128 *, __int64))(WdfFunctions_01015 + 2464))(
             WdfDriverGlobals,
             &DestinationString,
             &v27,
             a7);
    }
    goto LABEL_46;
  }
  v9 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = 32;
    v23 = 3;
LABEL_37:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, v23, v22, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_46;
  }
  return (unsigned int)v9;
}
