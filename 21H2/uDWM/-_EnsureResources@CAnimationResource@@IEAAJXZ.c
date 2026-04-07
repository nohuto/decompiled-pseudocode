/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180001FBC
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180001F28 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z @ 0x180008660 (--$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  unsigned int v1; // ebx
  CBaseObject **v2; // rsi
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return v1;
  v4 = CCompositor::CreateProxy<CAnimationProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (char *)this + 8);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x132u, v11);
  }
  else if ( *((_BYTE *)this + 73) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 744LL))(
           *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
           *((_QWORD *)this + 8),
           0LL);
    v1 = v9;
    if ( v9 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x136u, v11);
  }
  else
  {
    v5 = *((_QWORD *)this + 12);
    if ( !v5
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 768LL))(
                 *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
                 *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
                 *(unsigned int *)(*(_QWORD *)(v5 + 16) + 24LL)),
          v1 = v6,
          v6 >= 0) )
    {
LABEL_6:
      if ( *((_QWORD *)this + 3)
        && (v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 760LL))(
                    *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
                    *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL)),
            v1 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13Fu, v11);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL)
                                                                       + 752LL))(
               *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
               *((_QWORD *)this + 4),
               *((unsigned int *)this + 14));
        v1 = v7;
        if ( v7 >= 0 )
          return v1;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x143u, v11);
      }
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x13Au, v11);
  }
LABEL_16:
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return v1;
}
