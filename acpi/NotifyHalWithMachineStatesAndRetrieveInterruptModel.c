/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7BFC
 * Callers:
 *     ACPIInitialize @ 0x1C00A8F78 (ACPIInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C000AEC4 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _BYTE *Pool2; // r15
  unsigned int v2; // ebx
  int v3; // esi
  unsigned __int64 v4; // r13
  __int64 v5; // rdi
  void *v6; // rdx
  int v7; // ebx
  int v8; // r12d
  __int64 v9; // r14
  _BYTE *v10; // rdi
  __int64 *v11; // rdi
  char *v12; // rbx
  __int64 v13; // rdx
  int *v14; // rsi
  volatile signed __int32 *BugCheckParameter4; // rdi
  int v16; // eax
  __int64 v17; // rdx
  int v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-39h] BYREF
  int *v24; // [rsp+60h] [rbp-31h]
  __int128 v25; // [rsp+68h] [rbp-29h] BYREF
  __int128 v26; // [rsp+78h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v29[8]; // [rsp+B8h] [rbp+27h] BYREF

  v24 = a1;
  v27 = 0LL;
  strcpy(v29, "\\_PIC");
  v23 = 0LL;
  Src[0] = "\\_S1";
  v22 = 0LL;
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v25 = 0LL;
  InputBuffer = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 15LL, 1299211073LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  AcpiSupportedSystemStates = 98;
  v3 = 2;
  v4 = 0LL;
  do
  {
    v5 = (unsigned __int8)byte_1C0062F78[v4];
    v6 = &WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids;
    v7 = dword_1C0062F58[v4 / 4];
    if ( v3 == 2 )
    {
      if ( (AcpiOverrideAttributes & 0x10) != 0 )
        goto LABEL_16;
    }
    else if ( v3 == 3 && (AcpiOverrideAttributes & 0x20) != 0 || v3 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
LABEL_16:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          13,
          (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v21) |= v7;
        LODWORD(v21) = 2;
      }
      goto LABEL_31;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && (unsigned int)v3 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          14,
          (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
          (__int64)Src[v5]);
      }
      Pool2[2 * v5 + v5] = 0;
      if ( v7 )
      {
        HIDWORD(v22) |= v7;
        LODWORD(v22) = 9;
      }
      goto LABEL_31;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && (unsigned int)v3 >= 5 )
    {
      v8 = 1 << v3;
      v9 = (unsigned __int8)byte_1C0062F78[v4];
      goto LABEL_29;
    }
    v9 = (unsigned __int8)byte_1C0062F78[v4];
    v10 = Src[v5];
    if ( (int)AMLIGetNameSpaceObject(v10, 0LL, (__int64)&v23, 0) >= 0 )
    {
      v11 = (__int64 *)v23;
      v8 = 1 << v3;
      AcpiSupportedSystemStates |= 1 << v3;
      AMLIEvalPackageElement((__int64 *)v23, 0, (__int64)&v25);
      v12 = &Pool2[2 * v9];
      v12[v9 + 1] = v26;
      dword_1C006F938 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v25, 1u);
      AMLIEvalPackageElement(v11, 1u, (__int64)&v25);
      v12[v9 + 2] = v26;
      dword_1C006F938 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v25, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11, v13);
      v23 = 0LL;
LABEL_29:
      if ( (v8 & AcpiSupportedSystemStates) != 0 )
        Pool2[2 * v9 + v9] = 1;
      goto LABEL_31;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        6,
        15,
        (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
        (__int64)v10);
    }
    Pool2[2 * v9 + v9] = 0;
    if ( v7 )
    {
      HIDWORD(InputBuffer) |= v7;
      LODWORD(InputBuffer) = 1;
    }
LABEL_31:
    ++v3;
    v4 += 4LL;
  }
  while ( v3 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        22,
        16,
        (__int64)&WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v21 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v21, 8u, 0LL, 0);
  if ( (_DWORD)v22 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v22, 8u, 0LL, 0);
  v19 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(Pool2, &v19);
  ExFreePoolWithTag(Pool2, 0);
  if ( v19 == 1 || v19 == 2 || (unsigned int)(v19 - 3) < 2 )
  {
    v14 = v24;
    *v24 = v19;
  }
  else
  {
    v14 = v24;
    *v24 = 4096;
  }
  if ( (int)AMLIGetNameSpaceObject(v29, 0LL, (__int64)&v23, 0) >= 0 )
  {
    BugCheckParameter4 = (volatile signed __int32 *)v23;
    v25 = 0LL;
    v27 = 0LL;
    WORD1(v25) = 1;
    v26 = (unsigned __int64)v19;
    v16 = AMLIEvalNameSpaceObject((__int64 *)v23, 0LL, 1u, &v25);
    v2 = v16;
    if ( v16 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v14, v16, (ULONG_PTR)BugCheckParameter4);
    AMLIDereferenceHandleEx(BugCheckParameter4, v17);
  }
  else
  {
    return 0;
  }
  return v2;
}
