void __fastcall AcpiDiagTraceFanEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, ULONG a3, __int64 a4)
{
  int v8; // ecx
  __int16 v9; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v10[2]; // [rsp+38h] [rbp-20h] BYREF

  v10[0] = 0LL;
  v9 = 0;
  RtlInitUnicodeString(v10, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, a2)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), v10, 1LL) >= 0 )
  {
    v8 = v10[0].Length >> 1;
    v9 = v10[0].Length >> 1;
    *(_QWORD *)a4 = &v9;
    *(_QWORD *)(a4 + 16) = v10[0].Buffer;
    *(_QWORD *)(a4 + 8) = 2LL;
    *(_DWORD *)(a4 + 24) = 2 * v8;
    *(_DWORD *)(a4 + 28) = 0;
    EtwWrite(AcpiDiagHandle, a2, 0LL, a3, (PEVENT_DATA_DESCRIPTOR)a4);
  }
  if ( v10[0].Buffer )
    ExFreePoolWithTag(v10[0].Buffer, 0);
}
