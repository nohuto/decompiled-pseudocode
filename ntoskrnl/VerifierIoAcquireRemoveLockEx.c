/*
 * XREFs of VerifierIoAcquireRemoveLockEx @ 0x140ACF590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViRemLockFindSurrogate @ 0x140ACF978 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoAcquireRemoveLockEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 Surrogate; // rax

  if ( ViRemLockInitialized && a5 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))pXdvIoAcquireRemoveLockEx)(
             Surrogate + 16,
             a2,
             a3,
             a4,
             120);
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))pXdvIoAcquireRemoveLockEx)(
             a1,
             a2,
             a3,
             a4,
             a5);
}
