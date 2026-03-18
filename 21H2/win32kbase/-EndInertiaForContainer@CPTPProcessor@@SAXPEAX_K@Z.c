/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01DDFF8
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01E1DB0 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01E01CC (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(void *a1, __int64 a2)
{
  __int64 v3; // rax
  struct tagHID_POINTER_DEVICE_INFO *v4; // rdi
  const struct INERTIA_INFO_INTERNAL *v5; // rsi
  struct tagPOINT v6; // rax
  CInertiaManager *v7; // rcx

  v3 = HMValidateHandleNoSecure((int)a1, 19);
  if ( v3 )
  {
    v4 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 472);
    if ( v4 )
    {
      v5 = (const struct INERTIA_INFO_INTERNAL *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                                                   &qword_1C029A5D0,
                                                   gptCursorAsync,
                                                   15LL);
      if ( v5 )
      {
        v6 = CPTPProcessor::TransformTPScreenToHimetric(v4, gptCursorAsync);
        CInertiaManager::PostInertiaMessage(v7, 0x23Cu, v5, gptCursorAsync, v6);
        qword_1C029A5D0 = a2;
      }
    }
  }
}
