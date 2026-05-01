/*
 * XREFs of ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18003157C
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18002C2F0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180072B90 (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18002DC64 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B6990 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1801B6990.c)
 */

char __fastcall wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _BYTE *v5; // rdi
  bool v6; // zf
  char v7; // al
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v11; // rbx

  v4 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 1;
    v4[2] = 0;
    *((_BYTE *)v4 + 12) = 0;
    v4[2] = *(_DWORD *)a2;
    *((_BYTE *)v4 + 12) = *(_BYTE *)(a2 + 4);
    *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 8);
    *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 24);
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 0;
    *((_OWORD *)v4 + 3) = 0LL;
    *((_OWORD *)v4 + 4) = 0LL;
    v6 = *((_BYTE *)v4 + 72) == 0;
    v4[12] = *(_DWORD *)(a2 + 40);
    *((_QWORD *)v4 + 7) = *(_QWORD *)(a2 + 48);
    if ( !v6 )
    {
      v9 = (void *)*((_QWORD *)v4 + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
      v5[72] = 0;
    }
    *((_QWORD *)v5 + 8) = 0LL;
    *((_QWORD *)v5 + 8) = *(_QWORD *)(a2 + 56);
    v7 = *(_BYTE *)(a2 + 64);
    *(_QWORD *)(a2 + 56) = 0LL;
    v5[72] = v7;
    *(_BYTE *)(a2 + 64) = 0;
    *((_DWORD *)v5 + 20) = *(_DWORD *)(a2 + 72);
    *((_DWORD *)v5 + 21) = *(_DWORD *)(a2 + 76);
    wil::StoredFailureInfo::StoredFailureInfo((__int64)(v5 + 88), a2 + 80);
    *((_QWORD *)v5 + 31) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 0;
  if ( *a1 && _InterlockedExchangeAdd(*a1, 0xFFFFFFFF) == 1 )
  {
    v11 = *a1;
    if ( *a1 )
    {
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v11 + 2);
      operator delete((void *)v11, (const struct std::nothrow_t *)0x100);
    }
  }
  *a1 = (volatile signed __int32 *)v5;
  return 1;
}
