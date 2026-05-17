/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x18005411C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18005424C (LdrpUnsuppressAddressTakenIat.c)
 *     ZwProtectVirtualMemory @ 0x18009DEE0 (ZwProtectVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

signed __int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  volatile signed __int64 *v5; // r15
  __int64 v7; // r14
  int v8; // ebx
  int v11; // r12d
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  char v18; // cl
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  char v21; // [rsp+98h] [rbp+20h] BYREF

  v5 = (volatile signed __int64 *)(a1 + 144);
  v7 = 8LL * (unsigned int)a4;
  v19 = v7;
  v8 = a4;
  v20 = a2;
  v11 = a4;
  RtlAcquireSRWLockExclusive(a1 + 144, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 8LL * a5) != *(_QWORD *)(a3 + 8LL * a5)
    && (int)ZwProtectVirtualMemory(-1LL, &v20, &v19, 4LL, &v21) >= 0 )
  {
    if ( v8 )
    {
      v12 = (_QWORD *)(v7 + a2);
      v13 = a3 - a2;
      do
      {
        --v12;
        --v8;
        v14 = *(_QWORD *)((char *)v12 + v13);
        if ( v14 )
          *v12 = v14;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v20, &v19, 2LL, &v21);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression(v15) )
    {
      v17 = LdrpUnsuppressAddressTakenIat(
              *(_QWORD *)(a1 + 48),
              (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
              (unsigned int)(8 * v11 - *(_DWORD *)(a1 + 48) + a2 - 8));
      v18 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          850,
          (unsigned int)"LdrpWriteBackProtectedDelayLoad",
          0,
          (__int64)"LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported"
                   " in the DLL based at 0x%p.Status = 0x%x\n",
          *(const void **)(a1 + 48),
          v17);
        v18 = LdrpDebugFlags;
      }
      if ( (v18 & 0x10) != 0 )
        __debugbreak();
    }
  }
  return RtlReleaseSRWLockExclusive(v5);
}
