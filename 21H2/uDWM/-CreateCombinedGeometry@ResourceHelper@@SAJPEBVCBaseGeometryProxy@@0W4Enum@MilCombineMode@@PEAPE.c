/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x180093754
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001A0C4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800BD7D4 (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  int v7; // r8d
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  CBaseObject *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = *a4;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  else
  {
    v8 = CCompositor::CreateProxy<CCombinedGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           &v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x4Du);
      goto LABEL_16;
    }
  }
  if ( a2 )
    v7 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  else
    v7 = 0;
  if ( a1 )
    v10 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
  else
    v10 = 0LL;
  v11 = (volatile signed __int32 *)v14;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)v14 + 2) + 16LL)
                                                                         + 1000LL))(
          *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v14 + 2) + 24LL),
          1LL,
          v10,
          v7);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x50u);
    goto LABEL_17;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = (CBaseObject *)v11;
  _InterlockedIncrement(v11 + 2);
LABEL_16:
  v11 = (volatile signed __int32 *)v14;
LABEL_17:
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  return v9;
}
