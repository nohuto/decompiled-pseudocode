/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180026F64
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026C90 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180027E5C (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x18009FAD0 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v7; // rdi
  char *i; // rbx
  int v9; // ebx
  RefCountedObject *v10; // rbx
  __int128 v11; // xmm0
  char *v12; // rax
  char *v13; // rax
  char v14; // bp
  bool v15; // r14
  bool v16; // si
  void *v18; // rax
  RefCountedObject *v19; // rdx
  char **v20; // rcx
  RefCountedObject *v21[2]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v7; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v21[0] = 0LL;
  v9 = PnpDevice::MakeAndInitialize(a2, v21);
  if ( v9 < 0 )
  {
    if ( v21[0] )
      RefCountedObject::Release(v21[0]);
    return (unsigned int)v9;
  }
  else
  {
    v10 = v21[0];
    v11 = *((_OWORD *)v21[0] + 3);
    *(_OWORD *)v21 = v11;
    v12 = (char *)(v11 - 0x11D074D3745A17A0LL);
    if ( (_QWORD)v11 == 0x11D074D3745A17A0LL )
      v12 = (char *)v21[1] + 0x25A8F0365FFF014ALL;
    if ( !v12 )
      goto LABEL_20;
    *(_OWORD *)v21 = v11;
    v13 = (char *)(v11 - 0x4647CD8BE0CBF06CLL);
    if ( (_QWORD)v11 == 0x4647CD8BE0CBF06CLL )
      v13 = (char *)v21[1] - 0x74F9F0433B268ABBLL;
    if ( v13 )
      v14 = 0;
    else
LABEL_20:
      v14 = 1;
    v15 = *((_WORD *)v10 + 56) == 89 && *((_WORD *)v10 + 57) == 1;
    v16 = 0;
    if ( IsEdition(0x1820uLL) && *((_WORD *)v10 + 56) == 12 )
      v16 = *((_WORD *)v10 + 57) == 1;
    if ( !v14 || !v15 && !v16 )
    {
      RefCountedObject::Release(v10);
      return 1LL;
    }
    v18 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
    {
      *(_QWORD *)v18 = 0LL;
      *((_QWORD *)v18 + 1) = 0LL;
      *((_QWORD *)v18 + 3) = 0LL;
      *((_QWORD *)v18 + 2) = 0LL;
      v19 = (RefCountedObject *)*((_QWORD *)v18 + 2);
      *((_QWORD *)v18 + 2) = v10;
      *((_BYTE *)v18 + 24) = 0;
      v20 = (char **)*((_QWORD *)v7 + 1);
      if ( *v20 != v7 )
        __fastfail(3u);
      *(_QWORD *)v18 = v7;
      *((_QWORD *)v18 + 1) = v20;
      *v20 = (char *)v18;
      *((_QWORD *)v7 + 1) = v18;
      ++*((_QWORD *)v7 + 2);
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v18;
      if ( v19 )
        RefCountedObject::Release(v19);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
        (const char *)0x8007000ELL,
        (int)v21[0]);
      RefCountedObject::Release(v10);
      return 2147942414LL;
    }
  }
}
