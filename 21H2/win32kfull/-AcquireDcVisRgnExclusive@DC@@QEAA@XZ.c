/*
 * XREFs of ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C0160034
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C011C7EC (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C015DADC (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
    CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
