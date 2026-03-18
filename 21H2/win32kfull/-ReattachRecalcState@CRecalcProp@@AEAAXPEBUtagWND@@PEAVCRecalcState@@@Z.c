/*
 * XREFs of ?ReattachRecalcState@CRecalcProp@@AEAAXPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x1C023AF98
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C011083C (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRecalcProp::ReattachRecalcState(CRecalcProp *this, const struct tagWND *a2, struct CRecalcState *a3)
{
  struct CRecalcState *v3; // rdi
  char v5; // dl
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  struct CRecalcState **v7; // rcx
  struct CRecalcState *v8; // rax
  struct CRecalcState **v9; // rdx
  bool v10; // zf

  v3 = a3;
  if ( *((_QWORD *)this + 3) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v5 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(a3) = 0;
    }
    if ( v5 || (_BYTE)a3 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        (_DWORD)a3,
        75,
        5,
        23,
        75,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v6 )
      (**v6)(v6, 1LL);
    *((_QWORD *)this + 3) = 0LL;
  }
  v7 = (struct CRecalcState **)((char *)this + 32);
  v8 = (struct CRecalcState *)*((_QWORD *)this + 4);
  while ( v8 )
  {
    v9 = (struct CRecalcState **)((char *)v8 + 8);
    v10 = v8 == v3;
    v8 = (struct CRecalcState *)*((_QWORD *)v8 + 1);
    if ( v10 )
    {
      *v7 = v8;
      break;
    }
    v7 = v9;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  CRecalcProp::AddPendingRecalcWork(this, v3);
  *((_BYTE *)v3 + 60) = 1;
}
