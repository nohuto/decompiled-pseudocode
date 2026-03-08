/*
 * XREFs of ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800AA8DC
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AA7F0 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_ECChannelContext@@EEAAPEAXI@Z @ 0x1800A9B60 (--_ECChannelContext@@EEAAPEAXI@Z.c)
 *     ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1800AA9C4 (--0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z.c)
 *     ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z @ 0x1800AAA30 (--0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAVCConnection@@@Z.c)
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1800AAD08 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800AB2F8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannelContext::Create(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct CConnection *a4,
        struct CChannelContext **a5)
{
  unsigned int v7; // ebx
  int ProcessAttribution; // eax
  CChannelContext *v10; // rax
  unsigned int v11; // ecx
  CChannelContext *v12; // rsi
  CResourceTable *v13; // rax
  CResourceTable *v14; // rax
  unsigned int v15; // ecx
  CResourceTable *v16; // rdi
  struct CProcessAttribution *v18[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0;
  v18[0] = 0LL;
  ProcessAttribution = CProcessAttributionManager::GetProcessAttribution(qword_1803E2C88, a2, a3, v18);
  if ( ProcessAttribution < 0 )
    ModuleFailFastForHRESULT((unsigned int)ProcessAttribution, retaddr);
  v10 = (CChannelContext *)DefaultHeap::AllocClear(0x60uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = CChannelContext::CChannelContext(v10, a1, a2, v18[0], a4);
  if ( v12 )
  {
    v13 = (CResourceTable *)DefaultHeap::AllocClear(0x50uLL);
    if ( !v13 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v14 = CResourceTable::CResourceTable(v13, a1, v18[0]);
    v16 = v14;
    if ( v14 )
    {
      (**(void (__fastcall ***)(CResourceTable *))v14)(v14);
      *((_QWORD *)v12 + 4) = v16;
      *a5 = v12;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x2Fu, 0LL);
      CChannelContext::`vector deleting destructor'(v12, 1);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x2Cu, 0LL);
  }
  ReleaseInterface<CProcessAttribution>(v18);
  return v7;
}
