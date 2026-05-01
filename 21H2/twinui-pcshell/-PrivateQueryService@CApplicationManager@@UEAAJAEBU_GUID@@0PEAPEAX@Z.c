/*
 * XREFs of ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800493E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x1801BCC98 (-HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ.c)
 */

__int64 __fastcall CApplicationManager::PrivateQueryService(
        CApplicationManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rax
  unsigned int v9; // edi
  char *v10; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision;
  v9 = -2147467262;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationListeners.SubAuthority;
  if ( !v6 )
  {
    v10 = (char *)this - 192;
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ProcessLifetimeManagerControl.SubAuthority;
  if ( !v13 && CDesktopPositioner::HasWindowingEnvironmentManager(this) )
  {
    v10 = (char *)*((_QWORD *)this + 49);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data4;
  if ( !v14 )
  {
    v10 = (char *)*((_QWORD *)this + 45);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationManagerPriv.SubAuthority;
  if ( !v15 )
  {
    v10 = (char *)this - 192;
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4;
  if ( !v16 )
  {
    v10 = (char *)*((_QWORD *)this + 44);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IImmersiveWindowManager.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IImmersiveWindowManager.Data1 )
    v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IImmersiveWindowManager.Data4;
  if ( !v17 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**((_QWORD **)this + 48)
                                                                                                  + 32LL))(
                           *((_QWORD *)this + 48),
                           0LL,
                           a3,
                           a4);
  v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1 )
    v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4;
  if ( !v18 )
  {
    v10 = (char *)*((_QWORD *)this + 52);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1 )
    v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data4;
  if ( !v19 )
  {
    v10 = (char *)*((_QWORD *)this + 71);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v10)(v10, a3, a4);
  }
  return v9;
}
