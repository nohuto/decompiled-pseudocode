/*
 * XREFs of HalpIommuTraceFault @ 0x1405161EC
 * Callers:
 *     HalpIommuReportIommuFault @ 0x1405161A0 (HalpIommuReportIommuFault.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char HalpIommuTraceFault(__int64 a1, void *a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  _UNKNOWN **v4; // rdx
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  void **v8; // [rsp+58h] [rbp+7h]
  int v9; // [rsp+60h] [rbp+Fh]
  int v10; // [rsp+64h] [rbp+13h]
  int *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  va_list v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  void *v18; // [rsp+B8h] [rbp+67h] BYREF
  void *v19; // [rsp+C0h] [rbp+6Fh] BYREF
  int v20; // [rsp+C8h] [rbp+77h] BYREF
  void *v21; // [rsp+D0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+7Fh]
  va_list va1; // [rsp+D8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, void *);
  v3 = &retaddr;
  v20 = a3;
  v19 = a2;
  v18 = (void *)a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    v5 = HalpDiagnosticEventHandle;
    LOBYTE(v3) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_IOMMU_FAULT);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v18;
      v8 = &v19;
      v11 = &v20;
      UserData.Size = 8;
      va_copy(v14, va);
      v9 = 8;
      v12 = 4;
      v15 = 8;
      LOBYTE(v3) = EtwWriteEx(v5, &HAL_ETW_EVENT_IOMMU_FAULT, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  else if ( !HalpIommuGlobalEventBuffer )
  {
    v3 = (_UNKNOWN **)HalpMmAllocCtxAlloc(a1, 32LL);
    HalpIommuGlobalEventBuffer = (__int64)v3;
    v4 = v3;
    if ( v3 )
    {
      *(_OWORD *)v3 = 0LL;
      *((_OWORD *)v3 + 1) = 0LL;
      *v3 = v18;
      v3[1] = v19;
      *((_DWORD *)v3 + 4) = v20;
      LOBYTE(v3) = (_BYTE)v21;
      v4[3] = v21;
    }
  }
  return (char)v3;
}
