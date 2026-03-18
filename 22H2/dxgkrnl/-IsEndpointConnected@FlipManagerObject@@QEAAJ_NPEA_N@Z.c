/*
 * XREFs of ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0080080
 * Callers:
 *     NtFlipObjectQueryEndpointConnected @ 0x1C00813B0 (NtFlipObjectQueryEndpointConnected.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::IsEndpointConnected(FlipManagerObject *this, unsigned __int8 a2, bool *a3)
{
  __int64 v4; // rbp
  int v6; // ebx

  v4 = a2;
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    *a3 = *((_QWORD *)this + (v4 ^ 1) + 9) != 0LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
