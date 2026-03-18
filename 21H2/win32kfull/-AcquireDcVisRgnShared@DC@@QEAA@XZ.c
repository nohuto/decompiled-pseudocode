/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C015DA98
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C01147B0 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0104BEC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C015DADC (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
    CPushLock::AcquireLockShared((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
