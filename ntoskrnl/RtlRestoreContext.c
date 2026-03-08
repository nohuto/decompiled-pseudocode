/*
 * XREFs of RtlRestoreContext @ 0x140420880
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402D851C (RtlGuardRestoreContext.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     KasanWrapperRtlRestoreContext @ 0x1402EA9A0 (KasanWrapperRtlRestoreContext.c)
 *     ZwContinue @ 0x140412B70 (ZwContinue.c)
 *     KeKernelShadowStackRestoreContext @ 0x1405795E0 (KeKernelShadowStackRestoreContext.c)
 */

__int64 __fastcall RtlRestoreContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        __int64 a31)
{
  __int64 v33; // rax
  __int64 v35; // rcx
  _DWORD *v37; // rsi
  _QWORD v38[154]; // [rsp-30h] [rbp-520h] BYREF
  _DWORD v39[8]; // [rsp+4A0h] [rbp-50h] BYREF
  _QWORD _4C0[7]; // [rsp+4C0h] [rbp-30h] BYREF
  __int16 vars8; // [rsp+4F8h] [rbp+8h]
  int vars10; // [rsp+500h] [rbp+10h]
  __int64 vars18; // [rsp+508h] [rbp+18h]
  __int16 vars20; // [rsp+510h] [rbp+20h]

  KasanWrapperRtlRestoreContext(a1);
  if ( !a2 )
  {
LABEL_6:
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFF3F) == 0x10000F )
    {
      _mm_setcsr(*(_DWORD *)(a1 + 52));
      KeCheckStackAndTargetAddress(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 152));
      v35 = a1;
      if ( (KiKernelCetEnabled & 1) != 0 )
      {
        __asm { rdsspq  rdx }
        KeKernelShadowStackRestoreContext(a1, _RDX, a2);
        v35 = a1;
      }
      vars20 = *(_WORD *)(v35 + 66);
      vars18 = *(_QWORD *)(v35 + 152);
      vars10 = *(_DWORD *)(v35 + 68);
      vars8 = *(_WORD *)(v35 + 56);
      _4C0[6] = *(_QWORD *)(v35 + 248);
      _disable();
      __asm { iretq }
    }
    return ZwContinue(a1, 0LL);
  }
  if ( *(_DWORD *)a2 != -2147483607 || !*(_DWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)a2 == -2147483610 )
    {
      v33 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v33 + 8);
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(v33 + 16);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(v33 + 24);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(v33 + 32);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(v33 + 40);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(v33 + 48);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(v33 + 56);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(v33 + 64);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(v33 + 72);
      *(_QWORD *)(a1 + 248) = *(_QWORD *)(v33 + 80);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v33 + 88);
      *(_OWORD *)(a1 + 512) = *(_OWORD *)(v33 + 96);
      *(_OWORD *)(a1 + 528) = *(_OWORD *)(v33 + 112);
      *(_OWORD *)(a1 + 544) = *(_OWORD *)(v33 + 128);
      *(_OWORD *)(a1 + 560) = *(_OWORD *)(v33 + 144);
      *(_OWORD *)(a1 + 576) = *(_OWORD *)(v33 + 160);
      *(_OWORD *)(a1 + 592) = *(_OWORD *)(v33 + 176);
      *(_OWORD *)(a1 + 608) = *(_OWORD *)(v33 + 192);
      *(_OWORD *)(a1 + 624) = *(_OWORD *)(v33 + 208);
      *(_OWORD *)(a1 + 640) = *(_OWORD *)(v33 + 224);
      *(_OWORD *)(a1 + 656) = *(_OWORD *)(v33 + 240);
    }
    goto LABEL_6;
  }
  qmemcpy(v38, (const void *)a1, sizeof(v38));
  v37 = (_DWORD *)(a1 + 1232);
  if ( (v38[6] & 0x100080) == 0x100080 )
  {
    v39[6] = (_DWORD)v37 - (unsigned int)v39 + v37[6];
    v39[7] = v37[7];
    v39[2] = v37[2];
    v39[3] = v37[3];
    v39[0] = -1232;
    v39[1] = (_DWORD)v37 - (unsigned int)v39 + v37[1];
  }
  _4C0[3] = v38[19];
  _4C0[0] = v38[31];
  return RcFrameConsolidation(
           a2,
           (unsigned int)RcFrameConsolidation,
           (unsigned int)_4C0,
           a2,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31);
}
