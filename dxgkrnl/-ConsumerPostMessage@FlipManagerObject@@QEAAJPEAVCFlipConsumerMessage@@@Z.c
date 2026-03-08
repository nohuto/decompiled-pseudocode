/*
 * XREFs of ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C007F264
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C007FF60 (NtFlipObjectConsumerPostMessage.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerPostMessage(FlipManagerObject *this, struct CFlipConsumerMessage *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct CFlipConsumerMessage *))(**((_QWORD **)this + 32) + 8LL))(
      *((_QWORD *)this + 32),
      a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
