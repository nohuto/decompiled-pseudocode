/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C012F8A4
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C001D0C8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C012FB20 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::AcquireLockShared((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
