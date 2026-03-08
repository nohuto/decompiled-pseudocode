/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C020D9D0
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C02113C0 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C020FA64 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C0210B80 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(void *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagHID_POINTER_DEVICE_INFO *v8; // rdi
  __int64 v9; // rsi
  const struct INERTIA_INFO_INTERNAL *v10; // rbp
  struct tagPOINT v11; // rax
  CInertiaManager *v12; // rcx

  v3 = HMValidateHandleNoSecure((int)a1, 19);
  if ( v3 )
  {
    v8 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 472);
    if ( v8 )
    {
      v9 = SGDGetUserSessionState(v5, v4, v6, v7);
      v10 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                                                    v9 + 16904,
                                                    gptCursorAsync,
                                                    15LL);
      if ( v10 )
      {
        v11 = CPTPProcessor::TransformTPScreenToHimetric(v8, gptCursorAsync);
        CInertiaManager::PostInertiaMessage(v12, 0x23Cu, v10, gptCursorAsync, v11);
        *(_QWORD *)(v9 + 16904) = a2;
      }
    }
  }
}
