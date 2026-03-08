/*
 * XREFs of ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802A1104
 * Callers:
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1802A52EC (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  bool v4; // di
  unsigned int Ptr; // eax
  unsigned int v6; // r8d
  CHolographicInteropTaskQueue *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct IUnknown *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  AcquireSRWLockExclusive(this + 13);
  v4 = 0;
  Ptr = (unsigned int)this[24].Ptr;
  v6 = Ptr + 1;
  if ( Ptr + 1 < Ptr )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_10;
  }
  if ( v6 > HIDWORD(this[23].Ptr) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[21], 8, 1, &v11);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    *((_QWORD *)this[21].Ptr + Ptr) = v11;
    LODWORD(this[24].Ptr) = v6;
  }
  ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->AddRef)(v11);
  v7 = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( v7 && LOBYTE(this[30].Ptr) )
    v4 = CHolographicInteropTaskQueue::PostMessageW(v7, 0xCu, v11, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
  ReleaseSRWLockExclusive(this + 13);
  return v4;
}
