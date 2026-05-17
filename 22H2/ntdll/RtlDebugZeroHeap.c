/*
 * XREFs of RtlDebugZeroHeap @ 0x1800FA358
 * Callers:
 *     RtlZeroHeap @ 0x1800F6390 (RtlZeroHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18005FA90 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800F6390 (RtlZeroHeap.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010DF24 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugZeroHeap(unsigned __int64 a1, int a2)
{
  char v4; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // ebx

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180166490)(a1);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlZeroHeap") )
    goto LABEL_7;
  v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v4 = 1;
    v8 |= 1u;
  }
  if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
    v9 = RtlZeroHeap(a1, v8, v7);
  else
LABEL_7:
    v9 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v6, v7);
  return v9;
}
