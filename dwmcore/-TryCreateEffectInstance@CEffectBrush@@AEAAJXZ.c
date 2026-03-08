/*
 * XREFs of ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18003F4C4
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18003E4B0 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003F470 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18003F5B0 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18003F68C (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::TryCreateEffectInstance(CEffectBrush *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, const struct Windows::UI::Composition::ICompiledEffect *); // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int v13; // eax
  unsigned int v14; // ecx

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 112);
  if ( !*((_QWORD *)this + 14) && CEffectBrush::HasValidTemplate(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 96) + 80LL) + 48LL);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, v2);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1D3u, 0LL);
      return v1;
    }
    v9 = *((_QWORD *)this + 13);
    if ( v9 )
      *(_QWORD *)(v9 + 80) = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
  }
  if ( *v2 )
  {
    if ( !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2) )
    {
      if ( CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 12)) )
      {
        v10 = *v2;
        v11 = *(__int64 (__fastcall **)(__int64, const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v10 + 56LL);
        CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 12));
        v13 = v11(v10, CompiledEffectNoRef);
        v1 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1E4u, 0LL);
      }
    }
  }
  return v1;
}
