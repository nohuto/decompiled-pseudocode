void __fastcall __noreturn HalpBlkInvalidOpcodeFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  _BYTE v14[44]; // [rsp+8h] [rbp-80h] BYREF
  int v15; // [rsp+34h] [rbp-54h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+58h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]
  __int128 v23; // [rsp+78h] [rbp-10h]
  __int128 v24; // [rsp+88h] [rbp+0h]
  __int128 v25; // [rsp+98h] [rbp+10h]
  __int128 v26; // [rsp+A8h] [rbp+20h]
  __int128 v27; // [rsp+B8h] [rbp+30h]
  __int128 v28; // [rsp+C8h] [rbp+40h]

  v14[43] = 1;
  v16 = v4;
  v17 = a1;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v21 = v5;
  v22 = v6;
  v15 = _mm_getcsr();
  _mm_setcsr(0x1F80u);
  v23 = v7;
  v24 = v8;
  v25 = v9;
  v26 = v10;
  v27 = v11;
  v28 = v12;
  _InterlockedIncrement64(MK_FP(__GS__, 216LL));
  HalpBlkFatalErrorHalt(6u, (unsigned __int64)v14);
}
