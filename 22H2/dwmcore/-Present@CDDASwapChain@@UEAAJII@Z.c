/*
 * XREFs of ?Present@CDDASwapChain@@UEAAJII@Z @ 0x1802505F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x18002D530 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18009279C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$07$0A@@@QEAA@XZ @ 0x180094E28 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_ea_180094E28.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18009B798 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800B89B8 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDDASwapChain::Present(CDDASwapChain *this, unsigned int a2, char a3)
{
  CD3DDevice *v3; // rbx
  __int64 v5; // rdx
  __int64 v8; // rcx
  CMILCOMBase *v9; // rax
  int RectangleCount; // eax
  int v11; // eax
  unsigned int v12; // r10d
  __int64 v13; // rdx
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // r10d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  CD3DDevice *v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h]
  _DWORD *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[3]; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+98h] [rbp-68h]
  const void *retaddr; // [rsp+158h] [rbp+58h]

  v3 = 0LL;
  v5 = *((_QWORD *)this + 3);
  v20[0] = 0LL;
  if ( v5
    && (v8 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 8LL),
        v9 = (CMILCOMBase *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8),
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(v20, v9),
        (v3 = v20[0]) != 0LL) )
  {
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>((__int64)v26);
    if ( **((_DWORD **)this + 9) )
    {
      v27 = 0;
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)this + 9);
      v11 = DynArrayImpl<0>::AddMultiple((__int64)v26, 16, RectangleCount, 0LL);
      if ( v11 < 0 )
        ModuleFailFastForHRESULT(v11, retaddr);
      FastRegion::Internal::CRgnData::BeginIterator(
        *((FastRegion::Internal::CRgnData **)this + 9),
        (struct FastRegion::CRegion::Iterator *)v21);
      while ( (unsigned __int64)v23 < v22 )
      {
        HIDWORD(v20[0]) = *v23;
        HIDWORD(v20[1]) = v23[2];
        v13 = 2 * v25;
        LODWORD(v20[0]) = *(_DWORD *)(v24 + 4 * v13);
        LODWORD(v20[1]) = *(_DWORD *)(v24 + 4 * v13 + 4);
        v14 = (FastRegion::Internal::CRgnData *)(2LL * v12);
        *(_OWORD *)(v26[0] + 8LL * (_QWORD)v14) = *(_OWORD *)v20;
        FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v21);
        v12 = v15 + 1;
      }
    }
    v16 = CD3DDevice::Present(v3, *((struct IDXGISwapChainDWM1 **)this + 2), a2, a3);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x64u, 0LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v26);
  }
  else
  {
    v18 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304307, 0x68u, 0LL);
  }
  **((_DWORD **)this + 9) = 0;
  if ( v3 )
    CD3DDevice::Release(v3);
  return v18;
}
