/*
 * XREFs of _anonymous_namespace_::SetMonitorDockThresholds @ 0x1C0041A14
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0043964 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C00E5BE4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SetMonitorDockThresholds(unsigned int a1, int a2, const wchar_t *a3)
{
  __int64 v3; // r14
  const wchar_t *v4; // r12
  unsigned int v5; // ebx
  PDEVICE_OBJECT v7; // rcx
  void *v8; // r9
  wchar_t *v9; // rdi
  unsigned int v10; // ebp
  wchar_t *v11; // rsi
  int v12; // r15d
  int v13; // edx
  int v14; // r8d
  void *v15; // rdx
  __int64 v16; // rax

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( (a1 & 0xFFFFFF00) == 0 )
    return 0LL;
  v7 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v8 = &WPP_1d77e3451ad735cb1bf203ab778c4d42_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dD(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (unsigned int)&WPP_1d77e3451ad735cb1bf203ab778c4d42_Traceguids);
  v9 = (wchar_t *)&unk_1C030F668;
  v10 = v5;
  v11 = (wchar_t *)&unk_1C030F668;
  while ( 1 )
  {
    v12 = *(_DWORD *)v11;
    LOBYTE(v7) = v10;
    if ( !((unsigned __int8 (__fastcall *)(PDEVICE_OBJECT, _QWORD, const wchar_t *, void *))v4)(
            v7,
            *(unsigned int *)v11,
            a3,
            v8) )
      break;
    v10 >>= 8;
    a3 = L"\\Software\\Microsoft\\Wisp\\Touch";
    v11 += 2;
    if ( v11 == L"\\Software\\Microsoft\\Wisp\\Touch" )
    {
      do
      {
        v15 = &unk_1C03591E0;
        v16 = 4 * v3 + *(int *)v9;
        v9 += 2;
        *((_BYTE *)&unk_1C03591E0 + v16) = v5;
        v5 >>= 8;
      }
      while ( v9 != L"\\Software\\Microsoft\\Wisp\\Touch" );
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v15,
          (_DWORD)a3,
          12,
          4,
          1,
          12,
          (__int64)&WPP_1d77e3451ad735cb1bf203ab778c4d42_Traceguids);
      }
      return 1LL;
    }
  }
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (_DWORD)gFullLog,
      3,
      1,
      11,
      (__int64)&WPP_1d77e3451ad735cb1bf203ab778c4d42_Traceguids,
      v3,
      v12);
  }
  return 2LL;
}
