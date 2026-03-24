/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x180030650
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x180030580 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800736CC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // edi

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 13) + 24LL);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x56u, 0LL);
  }
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x254u, 0LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14));
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x256u, 0LL);
  if ( !v2 || v2 >= 0 && v7 < 0 )
    v2 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x258u, 0LL);
  if ( !v2 || v2 >= 0 && v10 < 0 )
    return (unsigned int)v10;
  return (unsigned int)v2;
}
