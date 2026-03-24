/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A5500
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A61D0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00042D0 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004300 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01A7B90 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A8F40 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A9488 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  struct tagHID_POINTER_DEVICE_INFO *v3; // rbp
  CInertiaManager *Instance; // rsi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  struct tagPOINT v7; // rax
  void *v8; // r9
  CHidInput *v9; // rcx

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 50), 19);
  if ( v2 )
  {
    v3 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 480);
    Instance = CInertiaManager::GetInstance();
    v5 = (__int64 *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                      Instance,
                      gptCursorAsync,
                      15LL);
    v6 = v5;
    if ( v5 )
    {
      *(_OWORD *)((char *)this + 168) = *(_OWORD *)v5;
      *(_OWORD *)((char *)this + 184) = *((_OWORD *)v5 + 1);
      *(_OWORD *)((char *)this + 200) = *((_OWORD *)v5 + 2);
      *(_OWORD *)((char *)this + 216) = *((_OWORD *)v5 + 3);
      *(_OWORD *)((char *)this + 232) = *((_OWORD *)v5 + 4);
      *(_OWORD *)((char *)this + 248) = *((_OWORD *)v5 + 5);
      *(_OWORD *)((char *)this + 264) = *((_OWORD *)v5 + 6);
      *(_OWORD *)((char *)this + 280) = *((_OWORD *)v5 + 7);
      *(_OWORD *)((char *)this + 296) = *((_OWORD *)v5 + 8);
      *(_OWORD *)((char *)this + 312) = *((_OWORD *)v5 + 9);
      *(_OWORD *)((char *)this + 328) = *((_OWORD *)v5 + 10);
      *(_OWORD *)((char *)this + 344) = *((_OWORD *)v5 + 11);
      *((struct tagPOINT *)this + 45) = gptCursorAsync;
      v7 = CPTPProcessor::TransformTPScreenToHimetric(v3, gptCursorAsync);
      v8 = (void *)*((_QWORD *)this + 50);
      *((_DWORD *)this + 95) |= 1u;
      *((struct tagPOINT *)this + 46) = v7;
      CHidInput::HandlePTPInertiaTimer(v9, 0, 0x32u, v8);
      *((_BYTE *)this + 392) = 1;
      CInertiaManager::InvalidateInertiaInfo(Instance, *v6, v6[1]);
    }
  }
}
