/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1406A29BC
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *Process; // rsi
  struct _KPROCESS *v4; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = *(struct _KPROCESS **)(a1 + 32);
    if ( v4 != Process )
      KeStackAttachProcess(v4, &ApcState);
    MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
