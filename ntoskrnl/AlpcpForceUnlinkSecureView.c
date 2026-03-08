/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x1409764EC
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x140704D30 (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  struct _KPROCESS *v2; // rsi
  ULONG_PTR v3; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(struct _KPROCESS **)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      KeStackAttachProcess(v2, &ApcState);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      *(_QWORD *)(v3 + 64) = 0LL;
    }
    *(_DWORD *)(v3 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v3 + 72) |= 4u;
  }
  else
  {
    v3 = 0LL;
  }
  AlpcpUnlockBlob(v1);
  if ( v3 )
    AlpcpDereferenceBlobEx(v3, 1);
}
