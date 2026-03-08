/*
 * XREFs of DpiCleanup @ 0x1C03958A4
 * Callers:
 *     DpiDriverUnload @ 0x1C0395BE0 (DpiDriverUnload.c)
 *     DpiUnInitialize @ 0x1C0395C00 (DpiUnInitialize.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C003FBD0 (McTemplateK0p_EtwWriteTransfer.c)
 *     DpiDxgkDdiUnload @ 0x1C0065A44 (DpiDxgkDdiUnload.c)
 */

void __fastcall DpiCleanup(struct _DRIVER_OBJECT *ClientIdentificationAddress, char a2, __int64 a3)
{
  _DWORD *DriverObjectExtension; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventEnterDpiDriverUnload,
      a3,
      ClientIdentificationAddress);
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v6 = (__int64)DriverObjectExtension;
  if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
  {
    AcquireMiniportListMutex();
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)(v6 + 8), *v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( a2 )
      DpiDxgkDdiUnload(v6, v9, v10);
    RtlFreeUnicodeString((PUNICODE_STRING)(v6 + 40));
  }
  else
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventEnterDpiDriverUnload,
        v11,
        ClientIdentificationAddress);
  }
}
