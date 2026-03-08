/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801B1E9C
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801B1A44 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 v1; // rsi
  char *i; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 544; (unsigned int)v1 < *((_DWORD *)this + 142); v1 = (unsigned int)(v1 + 1) )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)(*(_QWORD *)i + 8 * v1));
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)i, 8u);
}
