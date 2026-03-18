/*
 * XREFs of ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C008339C
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082D08 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0027DE8 (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage @ 0x1C0027E3C (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     _lambda_cfa85ae072c89c165dff36c328ecf84d_::operator() @ 0x1C0082638 (_lambda_cfa85ae072c89c165dff36c328ecf84d_--operator().c)
 *     ?SetIndependentFlipConfirmInfo@CFlipContentToken@@QEAAXPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C00854D0 (-SetIndependentFlipConfirmInfo@CFlipContentToken@@QEAAXPEAUFlipManagerTokenIFlipInfo@@@Z.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00862F4 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0087B1C (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 *     ?InFrame@CFlipContentToken@@QEAAJPEA_N@Z @ 0x1C008A044 (-InFrame@CFlipContentToken@@QEAAJPEA_N@Z.c)
 *     ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C008A134 (-SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmProcessUpdateTokens(
        CFlipManager *this,
        struct CFlipPresentUpdate *a2,
        struct CFlipManagerToken *a3,
        struct _LIST_ENTRY *a4)
{
  char *v5; // r12
  bool v9; // bl
  struct FlipManagerObject *v10; // rdx
  struct CFlipPropertySet *v11; // r8
  NTSTATUS updated; // ebx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY **v16; // rax
  int IsEnabledDeviceUsage; // eax
  struct FlipManagerTokenIFlipInfo *v18; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY v21; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+48h] [rbp-8h]
  bool v24; // [rsp+80h] [rbp+30h] BYREF

  v5 = (char *)this - 32;
  v9 = 0;
  if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    v9 = *((_DWORD *)this + 82) == 2;
  v11 = (struct CFlipPropertySet *)*((_QWORD *)a2 + 7);
  v21.Blink = &v21;
  v21.Flink = &v21;
  updated = CEndpointResourceStateManager::PrepareUpdateTokens((CFlipManager *)((char *)this + 104), v10, v11, v9, &v21);
  v23 = 1;
  v22 = &v21;
  if ( updated >= 0 )
  {
    CEndpointResourceStateManager::CommitPendingUpdates((CFlipManager *)((char *)this + 104));
    while ( v21.Flink != &v21 )
    {
      p_Blink = &v21.Flink[-1].Blink;
      Flink = v21.Flink;
      v15 = v21.Flink->Flink;
      if ( v21.Flink->Flink->Blink != v21.Flink || (v16 = (struct _LIST_ENTRY **)p_Blink[2], *v16 != v21.Flink) )
LABEL_18:
        __fastfail(3u);
      *v16 = v15;
      v15->Blink = (struct _LIST_ENTRY *)v16;
      updated = ObReferenceObjectByPointer(v5, 3u, g_pDxgkCompositionObjectType, 0);
      if ( updated < 0 )
        goto LABEL_16;
      p_Blink[14] = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 12);
      CFlipContentToken::SetFlipManagerObjectPreReferenced((CFlipContentToken *)p_Blink, (struct FlipManagerObject *)v5);
      p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 8);
      IsEnabledDeviceUsage = Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage();
      v18 = (struct FlipManagerTokenIFlipInfo *)*((_QWORD *)a3 + 8);
      if ( !IsEnabledDeviceUsage || v18 )
        CFlipContentToken::SetIndependentFlipConfirmInfo((CFlipContentToken *)p_Blink, v18);
      updated = CFlipContentToken::InFrame((CFlipContentToken *)p_Blink, &v24);
      if ( updated >= 0 && ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY **))(*p_Blink)[9].Blink)(p_Blink) )
      {
        Blink = a4->Blink;
        if ( Blink->Flink != a4 )
          goto LABEL_18;
        Flink->Flink = a4;
        p_Blink[2] = Blink;
        Blink->Flink = Flink;
        a4->Blink = Flink;
      }
      else
      {
LABEL_16:
        ((void (__fastcall *)(struct _LIST_ENTRY **))(*p_Blink)[3].Blink)(p_Blink);
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))(*p_Blink)->Flink)(p_Blink, 1LL);
        if ( updated < 0 )
          break;
      }
    }
  }
  v23 = 0;
  lambda_cfa85ae072c89c165dff36c328ecf84d_::operator()((_QWORD **)&v22);
  return (unsigned int)updated;
}
