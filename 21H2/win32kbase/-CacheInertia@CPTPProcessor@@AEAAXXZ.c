/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DD958
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DE5A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C000303C (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01E01CC (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01E15B0 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E1BD4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  struct tagHID_POINTER_DEVICE_INFO *v3; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rdi
  struct tagPOINT v6; // rax
  void *v7; // r9
  CHidInput *v8; // rcx

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 64), 19);
  if ( v2 )
  {
    v3 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 472);
    v4 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                      &qword_1C029A5D0,
                      gptCursorAsync,
                      15LL);
    v5 = v4;
    if ( v4 )
    {
      *((_OWORD *)this + 10) = *(_OWORD *)v4;
      *((_OWORD *)this + 11) = *((_OWORD *)v4 + 1);
      *((_OWORD *)this + 12) = *((_OWORD *)v4 + 2);
      *((_OWORD *)this + 13) = *((_OWORD *)v4 + 3);
      *((_OWORD *)this + 14) = *((_OWORD *)v4 + 4);
      *((_OWORD *)this + 15) = *((_OWORD *)v4 + 5);
      *((_OWORD *)this + 16) = *((_OWORD *)v4 + 6);
      *((_OWORD *)this + 17) = *((_OWORD *)v4 + 7);
      *((_OWORD *)this + 18) = *((_OWORD *)v4 + 8);
      *((_OWORD *)this + 19) = *((_OWORD *)v4 + 9);
      *((_OWORD *)this + 20) = *((_OWORD *)v4 + 10);
      *((_OWORD *)this + 21) = *((_OWORD *)v4 + 11);
      *((struct tagPOINT *)this + 44) = gptCursorAsync;
      v6 = CPTPProcessor::TransformTPScreenToHimetric(v3, gptCursorAsync);
      v7 = (void *)*((_QWORD *)this + 64);
      *((_DWORD *)this + 93) |= 1u;
      *((struct tagPOINT *)this + 45) = v6;
      CHidInput::HandlePTPInertiaTimer(v8, 0, 0x32u, v7);
      *((_BYTE *)this + 376) = 1;
      CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)&qword_1C029A5D0, *v5, v5[1]);
    }
  }
}
