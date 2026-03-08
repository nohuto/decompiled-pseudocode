/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002590
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C016C260 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00058EC (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  unsigned int v2; // ebx
  char *v5; // r15
  __int64 v6; // r8
  DMMVIDPNSOURCEMODESET *v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = (char *)this + 120;
  *a2 = 0LL;
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 6), v6);
    return 3223192400LL;
  }
  else
  {
    v12 = 0LL;
    v7 = (DMMVIDPNSOURCEMODESET *)operator new[](152LL, 1313891414LL, 256LL);
    if ( v7 )
      v8 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v7, this);
    else
      v8 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v12, v8);
    v9 = v12;
    if ( v12 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v12 + 24))(v12 + 24) )
      {
        v12 = 0LL;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((char *)this + 120, v9);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v10 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v5;
        if ( *(_DWORD *)(v10 + 96) != 2 )
          WdLogSingleEntry0(1LL);
      }
      else
      {
        WdLogSingleEntry3(7LL, v9, *((unsigned int *)this + 6), *(int *)(v9 + 40));
        v2 = *(_DWORD *)(v9 + 40);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, 152LL);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v12, 0LL);
    return v2;
  }
}
