/*
 * XREFs of ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x18023A164
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180238FF0 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBounceParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm0_4
  void (__fastcall **v7)(__int64); // rax
  float v8; // xmm1_4

  CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
  v5 = *((_QWORD *)this + 56);
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = *((float *)a3 + 2);
  v7 = *(void (__fastcall ***)(__int64))v5;
  *(float *)(v5 + 20) = v6;
  *(float *)(v5 + 24) = v6 / 0.0099999998;
  LODWORD(v8) = *((_DWORD *)a3 + 3) & _xmm;
  *(float *)(v5 + 28) = v8;
  *(float *)(v5 + 32) = (float)((float)(v8 + 1.0) * -1.0) / 0.0099999998;
  v7[1](v5);
  return 0LL;
}
