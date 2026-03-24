/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x1406DADA8
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x1406DAC6C (AlpcpCaptureViewAttributeInternal.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E0AC4 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     MmUnsecureVirtualMemory @ 0x14061FB80 (MmUnsecureVirtualMemory.c)
 *     AlpcpReferenceBlob @ 0x1406D97D4 (AlpcpReferenceBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, unsigned __int8 a3)
{
  ULONG_PTR v3; // rdi
  int v5; // r14d
  ULONG_PTR v7; // rbp
  _DWORD *v8; // r9
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  _QWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // rax
  _OWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a3;
  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  memset(v16, 0, sizeof(v16));
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v9 = *(_DWORD *)(v3 + 48);
  if ( (v9 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_7;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
    v10 = *(_DWORD *)(v3 + 52);
    if ( v10 > 2 )
      goto LABEL_7;
    if ( v10 != 1 )
    {
      v13 = *(_QWORD **)(v3 + 56);
      if ( v13 == (_QWORD *)BugCheckParameter2 )
        v13 = (_QWORD *)*v13;
      v14 = *(_DWORD *)(BugCheckParameter2 + 72);
      if ( (v14 & 8) == 0 )
      {
        v15 = MmSecureVirtualMemoryAgainstWrites(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v15 )
          goto LABEL_7;
        *(_QWORD *)(BugCheckParameter2 + 64) = v15;
        v14 = *(_DWORD *)(BugCheckParameter2 + 72);
      }
      *(_DWORD *)(BugCheckParameter2 + 72) = v14 & 0xFFFFFFFE;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v13;
      goto LABEL_7;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v9 | 1;
LABEL_7:
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    v11 = 0;
    goto LABEL_8;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 64) )
        {
          KiStackAttachProcess(*(_KPROCESS **)(v7 + 32), 0LL, (__int64)v16, v8);
          MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
          KiUnstackDetachProcess((__int64)v16, 0);
          *(_QWORD *)(v7 + 64) = 0LL;
        }
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_7;
  }
  v11 = -1073741790;
LABEL_8:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= (*(_DWORD *)(BugCheckParameter2 + 72) ^ (2 * v5)) & 2;
  AlpcpUnlockBlob(v3);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1);
  return v11;
}
