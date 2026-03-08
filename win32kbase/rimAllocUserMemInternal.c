/*
 * XREFs of rimAllocUserMemInternal @ 0x1C01AB674
 * Callers:
 *     rimProcessInput @ 0x1C00045B0 (rimProcessInput.c)
 *     RIMAllocUserMem @ 0x1C01AB5A0 (RIMAllocUserMem.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimAllocUserMemInternal(struct _RTL_AVL_TABLE *a1, ULONG_PTR a2, PVOID *a3)
{
  unsigned int v6; // edi
  HANDLE v7; // rax
  void *v8; // r14
  PVOID inserted; // rsi
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+50h] BYREF
  int v13; // [rsp+A8h] [rbp+58h]

  RegionSize = a2;
  *a3 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, 0LL, &RegionSize, 0x3000u, 4u);
  if ( (v6 & 0x80000000) == 0 )
  {
    v7 = MmSecureVirtualMemory(*a3, RegionSize, 4u);
    v8 = v7;
    if ( v7 )
    {
      Buffer[0] = *a3;
      Buffer[1] = RegionSize;
      NewElement = 0;
      Buffer[2] = v7;
      inserted = RtlInsertElementGenericTableAvl(a1 + 9, Buffer, 0x18u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
          return v6;
        v13 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 101);
        if ( NewElement )
          return v6;
      }
      MmUnsecureVirtualMemory(v8);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      if ( inserted )
        RtlDeleteElementGenericTableAvl(a1 + 9, inserted);
      v6 = -1073741801;
    }
    else
    {
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, &RegionSize, 0x8000u);
      v6 = -2143354876;
    }
    *a3 = 0LL;
  }
  return v6;
}
