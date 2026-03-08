/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0079624
 * Callers:
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00787D0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0078950 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0078C00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0078DE0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0078FE8 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0079460 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C0077300 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  CompositionSurfaceObject **v1; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // r15
  int v5; // esi
  int v6; // ebp
  __int64 v7; // rcx
  CompositionSurfaceObject *v8; // rax
  char v9; // bl
  __int64 v10; // r14
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int); // r12
  __int64 v12; // rdi
  unsigned int v13; // eax
  int started; // [rsp+A0h] [rbp+8h]
  _QWORD *v15; // [rsp+A8h] [rbp+10h]

  started = 0;
  v1 = (CompositionSurfaceObject **)((char *)this + 32);
  v15 = (_QWORD *)((char *)this + 32);
  if ( *((_DWORD *)this + 6) == 3 )
    started = (unsigned __int8)CompositionSurfaceObject::StartCompositionEarly(*v1, *((_QWORD *)this + 5));
  else
    v15 = (_QWORD *)((char *)this + 32);
  Global = DXGGLOBAL::GetGlobal();
  v4 = *((_QWORD *)this + 5);
  v5 = *((unsigned __int8 *)this + 560);
  v6 = *((_DWORD *)this + 6);
  v7 = *((_QWORD *)Global + 38069);
  v8 = *v1;
  v9 = *((_BYTE *)this + 563);
  v10 = *((_QWORD *)this + 12);
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, int))(v7 + 384);
  v12 = *((_QWORD *)v8 + 3);
  v13 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v11(*v15, *((unsigned int *)this + 26), v13, v10, v6, v5, v9 == 0, v12, v4, started);
}
