/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18003A820
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180081D50 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180023030 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  int v1; // ebx
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // r15
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 30) )
  {
    v11 = CCompositor::CreateProxy<CRenderDataProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (__int64 *)this + 30);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x67u);
      goto LABEL_7;
    }
    v12 = *((_QWORD *)this + 30);
    if ( v12 )
      v13 = *(unsigned int *)(*(_QWORD *)(v12 + 16) + 24LL);
    else
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 424LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            v13);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x68u);
      goto LABEL_7;
    }
  }
  v3 = *((_DWORD *)this + 68);
  if ( v3 > 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5)
                                                                    + 16LL)
                                                      + 128LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x71u);
    }
    else
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, CRenderDataVisual *))(**(_QWORD **)(v9 + *((_QWORD *)this + 31))
                                                                              + 8LL))(
                *(_QWORD *)(v9 + *((_QWORD *)this + 31)),
                v15,
                this);
        v5 = v10;
        if ( v10 < 0 )
          break;
        ++v1;
        v9 += 8LL;
        if ( v1 >= v3 )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x75u);
    }
  }
  else
  {
LABEL_3:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL)
                                                                          + 16LL)
                                                            + 328LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 24LL),
           v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x7Cu);
    }
    else
    {
      if ( v3 > 0 )
        v6 = *((_QWORD *)this + 30);
      else
        v6 = 0LL;
      (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 40LL))(this, v6);
    }
  }
LABEL_7:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v5;
}
