/*
 * XREFs of ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C0130930
 * Callers:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0050094 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00F0AD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C012FB20 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::AcquireLockExclusive((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
