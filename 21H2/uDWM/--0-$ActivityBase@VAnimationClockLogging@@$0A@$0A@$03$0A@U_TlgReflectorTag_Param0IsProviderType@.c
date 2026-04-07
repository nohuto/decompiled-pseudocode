/*
 * XREFs of ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002E34C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002DABC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18002FD1C (-Begin@CAnimationClock@@QEAAJK@Z.c)
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002FE40 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180036998 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800412E4 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800BA228 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x180058192 (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax

  v2 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  v4 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(v2 + 48) = a2;
  *(_DWORD *)v2 = 0;
  *(_BYTE *)(v2 + 4) = 0;
  *(_BYTE *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 1LL;
  v4[18] = 0LL;
  v4[19] = 0LL;
  memset_0(v4, 0, 0x90uLL);
  *(_QWORD *)(v2 + 240) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  return result;
}
