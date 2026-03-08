/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03ABDD4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0006428 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B598C (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  DMMVIDPNTARGET *v8; // rax
  struct DMMVIDPNTARGETMODESET *v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  DMMVIDPNSOURCEMODESET *v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  v8 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v4);
  if ( v8 )
  {
    v13 = 0LL;
    v10 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v8);
    if ( !v10 )
      WdLogSingleEntry0(1LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v13, (__int64)v10);
    v11 = DMMVIDPNSOURCEMODESET::Serialize(v13);
    v12 = v11;
    if ( v11 >= 0 )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, v4, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v12);
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v13, 0LL);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    return 3223192324LL;
  }
}
