/*
 * XREFs of TransitionResourceBarrier_0 @ 0x18026FEA8
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18026F1E8 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TransitionResourceBarrier_0(__int64 *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  if ( a3 != a4 )
  {
    v7 = 0;
    v10 = 0;
    v6[0] = 0LL;
    v4 = *a1;
    v6[1] = a2;
    v8 = a3;
    v9 = a4;
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v4 + 208))(a1, 1LL, v6);
  }
  return result;
}
