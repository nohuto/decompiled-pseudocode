/*
 * XREFs of Crashdump_CommonBufferAcquire @ 0x1C004C0B8
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004D200 (Crashdump_UcxEvtGetDumpData.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C004E46C (Crashdump_EventRing_InitializeForDump.c)
 *     Crashdump_Endpoint_Initialize @ 0x1C004F014 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1C0050630 (Crashdump_UsbDevice_Initialize.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0013038 (CommonBuffer_AcquireBuffer.c)
 */

__int64 __fastcall Crashdump_CommonBufferAcquire(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  _DWORD *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = (a2 + 63) & 0xFFFFFFC0;
  if ( v4 <= 0x1000 )
  {
    v6 = 0;
    v7 = (_DWORD *)(a1 + 520);
    if ( !*(_DWORD *)(a1 + 516) || v4 > ((4096 - (*v7 & 0xFFF)) & (unsigned int)-((*v7 & 0xFFF) != 0)) )
    {
      v8 = (_QWORD *)CommonBuffer_AcquireBuffer(*(struct _KEVENT **)(a1 + 488), 4096, a1, 829451588);
      if ( !v8 )
        return (unsigned int)-1073741670;
      v9 = (_QWORD *)(a1 + 496);
      v10 = *(_QWORD *)(a1 + 496);
      if ( *(_QWORD *)(v10 + 8) != a1 + 496 )
        __fastfail(3u);
      *v8 = v10;
      v8[1] = v9;
      *(_QWORD *)(v10 + 8) = v8;
      *v9 = v8;
      ++*(_DWORD *)(a1 + 512);
      *v7 = 0;
    }
    v11 = *(_QWORD *)(a1 + 496);
    *(_DWORD *)(a3 + 16) = v4;
    v12 = *(_QWORD *)(v11 + 16);
    *(_QWORD *)(a3 + 8) = v12;
    *(_QWORD *)(a3 + 8) = v12 + (unsigned int)*v7;
    v13 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)a3 = v13;
    *(_QWORD *)a3 = v13 + (unsigned int)*v7;
    *(_DWORD *)(a1 + 516) += v4;
    *v7 += v4;
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: CommonBuffer: %4u (0x%04X) bytes acquired, virtual: 0x%p, logical: 0x%I64X\n",
      v4,
      v4,
      *(const void **)(a3 + 8),
      *(_QWORD *)a3);
    return v6;
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_CommonBufferAcquire: Required Size: %4u\n", v4);
  return (unsigned int)-1073741670;
}
