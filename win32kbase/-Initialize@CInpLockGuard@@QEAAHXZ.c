/*
 * XREFs of ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0097318
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0097188 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C00971FC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x1C0097AE8 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInpLockGuard::Initialize(CInpLockGuard *this)
{
  struct _ERESOURCE *Pool2; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)this = Pool2;
  if ( Pool2 && ExInitializeResourceLite(Pool2) >= 0 )
    return 1LL;
  if ( *(_QWORD *)this )
  {
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
