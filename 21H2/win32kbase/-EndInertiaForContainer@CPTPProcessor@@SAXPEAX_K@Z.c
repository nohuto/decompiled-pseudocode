/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A5AE4
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01A9780 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004300 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01A7C60 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A9010 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  struct tagHID_POINTER_DEVICE_INFO *v4; // rdi
  struct CInertiaManager *Instance; // rsi
  const struct INERTIA_INFO_INTERNAL *v6; // rbp
  struct tagPOINT v7; // rax
  CInertiaManager *v8; // rcx

  v3 = HMValidateHandleNoSecure(a1, 19);
  if ( v3 )
  {
    v4 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 480);
    if ( v4 )
    {
      Instance = CInertiaManager::GetInstance();
      v6 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                                                   Instance,
                                                   gptCursorAsync,
                                                   15LL);
      if ( v6 )
      {
        v7 = CPTPProcessor::TransformTPScreenToHimetric(v4, gptCursorAsync);
        CInertiaManager::PostInertiaMessage(v8, 0x23Cu, v6, gptCursorAsync, v7);
        *(_QWORD *)Instance = a2;
      }
    }
  }
}
