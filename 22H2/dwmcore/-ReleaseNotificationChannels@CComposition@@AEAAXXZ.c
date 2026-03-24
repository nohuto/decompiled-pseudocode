/*
 * XREFs of ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180155B20
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180154BF0 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180155784 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

void __fastcall CComposition::ReleaseNotificationChannels(CComposition *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 104); i = (unsigned int)(i + 1) )
    CDrawListEntry::Release(*(CDrawListEntry **)(*((_QWORD *)this + 49) + 8 * i));
  *((_DWORD *)this + 104) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 392, 8u);
}
