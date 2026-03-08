/*
 * XREFs of EngHangNotification @ 0x1C026EDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

ULONG __stdcall EngHangNotification(HDEV hDev, PVOID Reserved)
{
  ULONG v3; // edi
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  _WORD *v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  UCHAR v10; // bl
  void *DriverObject; // rax
  char *ErrorLogEntry; // rax
  char *v13; // r14
  unsigned int (__fastcall *v14)(_QWORD, _QWORD); // rax

  v3 = 1;
  WdLogSingleEntry1(4LL, hDev);
  if ( hDev )
  {
    v4 = *((_QWORD *)hDev + 319);
    if ( ((v4 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    {
      WdLogSingleEntry0(5LL);
      return v3;
    }
    DbgPrint("GDI: EngHangNotification: %ls is not responding.\n", (const wchar_t *)(v4 + 64));
    WdLogSingleEntry1(5LL, v4);
    v5 = -1LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v4 + 2 * v6) );
    v7 = *(_WORD **)(v4 + 208);
    v8 = 2 * v6 + 2;
    do
      ++v5;
    while ( v7[v5] );
    v9 = 2 * v5 + 2;
    v10 = 2 * v5 + 2 + 2 * v6 + 42;
    DriverObject = (void *)UserGetDriverObject();
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DriverObject, v10);
    v13 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = -1073741436;
      *((_DWORD *)ErrorLogEntry + 1) = 2621442;
      memmove(ErrorLogEntry + 40, (const void *)v4, v8);
      memmove(&v13[v8 + 40], v7, v9);
      IoWriteErrorLogEntry(v13);
    }
    v14 = (unsigned int (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)hDev + 422);
    if ( v14 && !v14(*((_QWORD *)hDev + 221), 0LL) )
      v3 = 0;
  }
  WdLogSingleEntry1(5LL, v3);
  return v3;
}
