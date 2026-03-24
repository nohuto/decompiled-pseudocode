/*
 * XREFs of RtlRestoreContext @ 0x140407D00
 * Callers:
 *     RtlGuardRestoreContext @ 0x1402772A8 (RtlGuardRestoreContext.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402B2030 (KeCheckStackAndTargetAddress.c)
 *     ZwContinue @ 0x1403FAC00 (ZwContinue.c)
 */

__int64 __fastcall RtlRestoreContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
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
  __int64 v31; // rax
  _QWORD v34[154]; // [rsp-98h] [rbp-520h] BYREF
  _QWORD _458[7]; // [rsp+458h] [rbp-30h] BYREF
  __int16 vars8; // [rsp+490h] [rbp+8h]
  int vars10; // [rsp+498h] [rbp+10h]
  __int64 vars18; // [rsp+4A0h] [rbp+18h]
  __int16 vars20; // [rsp+4A8h] [rbp+20h]

  if ( a2 )
  {
    if ( *(_DWORD *)a2 == -2147483607 && *(_DWORD *)(a2 + 24) )
    {
      qmemcpy(v34, (const void *)a1, sizeof(v34));
      _458[3] = v34[19];
      _458[0] = v34[31];
      return RcFrameConsolidation(
               a2,
               (unsigned int)RcFrameConsolidation,
               (unsigned int)_458,
               a4,
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
    if ( *(_DWORD *)a2 == -2147483610 )
    {
      v31 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v31 + 8);
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(v31 + 16);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(v31 + 24);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(v31 + 32);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(v31 + 40);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(v31 + 48);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(v31 + 56);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(v31 + 64);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(v31 + 72);
      *(_QWORD *)(a1 + 248) = *(_QWORD *)(v31 + 80);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v31 + 88);
      *(_OWORD *)(a1 + 512) = *(_OWORD *)(v31 + 96);
      *(_OWORD *)(a1 + 528) = *(_OWORD *)(v31 + 112);
      *(_OWORD *)(a1 + 544) = *(_OWORD *)(v31 + 128);
      *(_OWORD *)(a1 + 560) = *(_OWORD *)(v31 + 144);
      *(_OWORD *)(a1 + 576) = *(_OWORD *)(v31 + 160);
      *(_OWORD *)(a1 + 592) = *(_OWORD *)(v31 + 176);
      *(_OWORD *)(a1 + 608) = *(_OWORD *)(v31 + 192);
      *(_OWORD *)(a1 + 624) = *(_OWORD *)(v31 + 208);
      *(_OWORD *)(a1 + 640) = *(_OWORD *)(v31 + 224);
      *(_OWORD *)(a1 + 656) = *(_OWORD *)(v31 + 240);
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(*(_DWORD *)(a1 + 52));
    KeCheckStackAndTargetAddress(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 152));
    vars20 = *(_WORD *)(a1 + 66);
    vars18 = *(_QWORD *)(a1 + 152);
    vars10 = *(_DWORD *)(a1 + 68);
    vars8 = *(_WORD *)(a1 + 56);
    _458[6] = *(_QWORD *)(a1 + 248);
    _disable();
    __asm { iretq }
  }
  return ZwContinue(a1, 0LL);
}
