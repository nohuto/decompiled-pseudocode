/*
 * XREFs of RtlpFlsAlloc @ 0x140849B60
 * Callers:
 *     PspTlsAlloc @ 0x140849A64 (PspTlsAlloc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1403A0434 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z @ 0x1405B2560 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspTlsContext, 0LL);
  v7 = 0;
  v8 = 8LL;
  while ( 1 )
  {
    v9 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotAllocate((unsigned int **)&PspTlsContext + 1);
    v10 = v9;
    if ( v9 == -1 )
    {
      v7 = -1073741801;
      goto LABEL_22;
    }
    v11 = v9 - 16;
    if ( v9 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v17, 0x10u);
    v18 = *(&PspTlsContext + (unsigned int)(v17 - 4) + 1);
    if ( v18 )
      v19 = v18
          + 8
          * ((v9 ^ (unsigned __int64)(unsigned int)(1 << v17))
           + 4 * (v9 ^ (unsigned __int64)(unsigned int)(1 << v17))
           + 2);
    else
      v19 = 8LL;
    *(_QWORD *)v19 = -1LL;
  }
  if ( v11 < 0xF0 )
  {
    _BitScanReverse((unsigned int *)&v12, v9);
    v13 = *(&PspTlsContext + (unsigned int)(v12 - 4) + 1);
    if ( v13 )
    {
      v14 = 5 * (v9 ^ (unsigned __int64)(unsigned int)(1 << v12));
      v15 = v13 + 8 * (v14 + 3);
      v8 = v13 + 8 * (v14 + 2);
    }
    else
    {
      v15 = 16LL;
    }
    if ( !a3 )
      a3 = -1LL;
    *(_QWORD *)v8 = a3;
    *(_QWORD *)v15 = a4;
    if ( v11 > dword_140D0BFE8 )
      dword_140D0BFE8 = v10 - 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
    KeAbPostRelease((ULONG_PTR)&PspTlsContext);
    *a5 = v11;
    return v7;
  }
  v7 = -1073741801;
  RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)(&PspTlsContext + 1), v9);
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
  KeAbPostRelease((ULONG_PTR)&PspTlsContext);
  return v7;
}
