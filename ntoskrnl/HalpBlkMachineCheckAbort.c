/*
 * XREFs of HalpBlkMachineCheckAbort @ 0x140B12280
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkHandleMachineCheckAbort @ 0x140B131B0 (HalpBlkHandleMachineCheckAbort.c)
 *     HalpBlkMceFastForward @ 0x140B132B0 (HalpBlkMceFastForward.c)
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall HalpBlkMachineCheckAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  unsigned __int64 v13; // rcx
  _BYTE v16[44]; // [rsp-8h] [rbp-90h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-64h]
  __int64 v18; // [rsp+28h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+58h] [rbp-30h]
  __int128 v25; // [rsp+68h] [rbp-20h]
  __int128 v26; // [rsp+78h] [rbp-10h]
  __int128 v27; // [rsp+88h] [rbp+0h]
  __int128 v28; // [rsp+98h] [rbp+10h]
  __int128 v29; // [rsp+A8h] [rbp+20h]
  __int128 v30; // [rsp+B8h] [rbp+30h]
  __int64 v31; // [rsp+148h] [rbp+C0h]
  __int64 v32; // [rsp+150h] [rbp+C8h]
  __int64 v33; // [rsp+158h] [rbp+D0h]
  _BYTE *v34; // [rsp+160h] [rbp+D8h]
  unsigned __int64 retaddr; // [rsp+170h] [rbp+E8h]
  unsigned __int64 v36; // [rsp+178h] [rbp+F0h]
  char v37; // [rsp+180h] [rbp+F8h]

  v16[43] = 1;
  v18 = v4;
  v19 = a1;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v23 = v5;
  v24 = v6;
  v17 = _mm_getcsr();
  _mm_setcsr(0x1F80u);
  v25 = v7;
  v26 = v8;
  v27 = v9;
  v28 = v10;
  v29 = v11;
  v30 = v12;
  ((void (__fastcall *)(_BYTE *, _QWORD))HalpBlkMceFastForward)(v16, 0LL);
  v13 = *(_QWORD *)(KeGetPcr()->Unused[0] + 52);
  if ( v36 <= v13 && v36 > v13 - 0x2000 )
  {
    v37 |= 4u;
    _InterlockedIncrement(MK_FP(__GS__, 2452LL));
  }
  if ( *v34 == 0xF4 && *(v34 - 1) == 0xFB )
  {
    LODWORD(retaddr) = retaddr & 0xFFFFFDFF;
    --v34;
    _InterlockedIncrement(MK_FP(__GS__, 2456LL));
  }
  ((void (__fastcall *)(_BYTE *))HalpBlkHandleMachineCheckAbort)(v16);
  _mm_setcsr(v17);
  if ( (v37 & 4) == 0 )
  {
    v33 = v18;
    v32 = v19;
    v31 = v20;
    __writemsr(0x17Au, 0LL);
    __asm { iretq }
  }
  v33 = v18;
  __writeeflags(retaddr);
  v32 = v19;
  v31 = v20;
  __writemsr(0x17Au, 0LL);
  __asm { retfq }
}
