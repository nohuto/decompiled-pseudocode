__int64 __fastcall SymCryptFdefModMulMontgomery256Asm(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4)
{
  unsigned __int64 v5; // r11
  unsigned __int128 v6; // rax
  unsigned __int128 v7; // kr00_16
  unsigned __int128 v8; // kr10_16
  unsigned __int128 v9; // kr20_16
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // kr30_8
  unsigned __int128 v12; // kr50_16
  unsigned __int128 v13; // kr70_16
  unsigned __int128 v14; // kr90_16
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // krA0_8
  unsigned __int128 v17; // krC0_16
  unsigned __int128 v18; // krE0_16
  unsigned __int128 v19; // kr100_16
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // kr110_8
  unsigned __int128 v22; // kr130_16
  unsigned __int128 v23; // kr150_16
  unsigned __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r8
  unsigned __int64 *v27; // rcx
  unsigned __int128 v28; // kr190_16
  __int64 v29; // rsi
  unsigned __int128 v30; // kr1F0_16
  __int64 v31; // rdi
  unsigned __int128 v32; // kr250_16
  unsigned __int128 v33; // kr270_16
  __int64 v34; // rbp
  unsigned __int128 v35; // kr2B0_16
  unsigned __int128 v36; // kr2D0_16
  unsigned __int128 v37; // rax
  unsigned __int128 v38; // kr2E0_16
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r14
  bool v41; // cf
  unsigned __int64 v42; // r15
  unsigned __int128 v43; // kr2F0_16
  unsigned __int64 v44; // rbp
  __int64 v45; // kr300_8
  __int64 v46; // rcx

  v5 = *a2;
  v6 = *a2 * (unsigned __int128)*a3;
  v7 = v5 * (unsigned __int128)a3[1] + *((unsigned __int64 *)&v6 + 1);
  v8 = v5 * (unsigned __int128)a3[2] + *((unsigned __int64 *)&v7 + 1);
  v9 = v5 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v8 + 1);
  v10 = a2[1];
  v11 = v10 * *a3 + v7;
  v12 = ((v10 * (unsigned __int128)*a3 + (unsigned __int64)v7) >> 64)
      + v10 * (unsigned __int128)a3[1]
      + (unsigned __int64)v8;
  v13 = *((unsigned __int64 *)&v12 + 1) + v10 * (unsigned __int128)a3[2] + (unsigned __int64)v9;
  v14 = *((unsigned __int64 *)&v13 + 1) + v10 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v9 + 1);
  v15 = a2[2];
  v16 = v15 * *a3 + v12;
  v17 = ((v15 * (unsigned __int128)*a3 + (unsigned __int64)v12) >> 64)
      + v15 * (unsigned __int128)a3[1]
      + (unsigned __int64)v13;
  v18 = *((unsigned __int64 *)&v17 + 1) + v15 * (unsigned __int128)a3[2] + (unsigned __int64)v14;
  v19 = *((unsigned __int64 *)&v18 + 1) + v15 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v14 + 1);
  v20 = a2[3];
  v21 = v20 * *a3 + v17;
  v22 = ((v20 * (unsigned __int128)*a3 + (unsigned __int64)v17) >> 64)
      + v20 * (unsigned __int128)a3[1]
      + (unsigned __int64)v18;
  v23 = *((unsigned __int64 *)&v22 + 1) + v20 * (unsigned __int128)a3[2] + (unsigned __int64)v19;
  v24 = *((_QWORD *)&v23 + 1) + v20 * a3[3] + *((_QWORD *)&v19 + 1);
  v25 = (*((unsigned __int64 *)&v23 + 1) + v20 * (unsigned __int128)a3[3] + *((unsigned __int64 *)&v19 + 1)) >> 64;
  v26 = *(_QWORD *)(a1 + 32);
  v27 = (unsigned __int64 *)(a1 + 128);
  v28 = (unsigned __int64)(((_QWORD)v6 != 0LL) + (((unsigned __int64)(v26 * v6) * (unsigned __int128)*v27) >> 64))
      + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[1]
      + v11;
  v29 = (((*((unsigned __int64 *)&v28 + 1) + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[2] + v16) >> 64)
       + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[3]
       + v21) >> 64;
  v30 = (unsigned __int64)(((_QWORD)v28 != 0LL) + (((unsigned __int64)(v26 * v28) * (unsigned __int128)*v27) >> 64))
      + (unsigned __int64)(v26 * v28) * (unsigned __int128)v27[1]
      + *((_QWORD *)&v28 + 1)
      + v26 * (_QWORD)v6 * v27[2]
      + v16;
  v31 = (((*((unsigned __int64 *)&v30 + 1)
         + (unsigned __int64)(v26 * v28) * (unsigned __int128)v27[2]
         + (unsigned __int64)(((*((unsigned __int64 *)&v28 + 1)
                              + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[2]
                              + v16) >> 64)
                            + v26 * v6 * v27[3]
                            + v21)) >> 64)
       + (unsigned __int64)(v26 * v28) * (unsigned __int128)v27[3]
       + (unsigned __int64)v22) >> 64;
  v32 = (unsigned __int64)(((_QWORD)v30 != 0LL) + (((unsigned __int64)(v26 * v30) * (unsigned __int128)*v27) >> 64))
      + (unsigned __int64)(v26 * v30) * (unsigned __int128)v27[1]
      + (unsigned __int64)(*((_QWORD *)&v30 + 1)
                         + v26 * v28 * v27[2]
                         + ((*((unsigned __int64 *)&v28 + 1)
                           + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[2]
                           + v16) >> 64)
                         + v26 * v6 * v27[3]
                         + v21);
  v33 = *((unsigned __int64 *)&v32 + 1)
      + (unsigned __int64)(v26 * v30) * (unsigned __int128)v27[2]
      + (unsigned __int64)(((*((unsigned __int64 *)&v30 + 1)
                           + (unsigned __int64)(v26 * v28) * (unsigned __int128)v27[2]
                           + (unsigned __int64)(((*((unsigned __int64 *)&v28 + 1)
                                                + (unsigned __int64)(v26 * v6) * (unsigned __int128)v27[2]
                                                + v16) >> 64)
                                              + v26 * v6 * v27[3]
                                              + v21)) >> 64)
                         + v26 * v28 * v27[3]
                         + v22);
  v34 = (*((unsigned __int64 *)&v33 + 1)
       + (unsigned __int64)(v26 * v30) * (unsigned __int128)v27[3]
       + (unsigned __int64)v23) >> 64;
  v35 = (unsigned __int64)(((_QWORD)v32 != 0LL) + (((unsigned __int64)(v26 * v32) * (unsigned __int128)*v27) >> 64))
      + (unsigned __int64)(v26 * v32) * (unsigned __int128)v27[1]
      + (unsigned __int64)v33;
  v36 = *((unsigned __int64 *)&v35 + 1)
      + (unsigned __int64)(v26 * v32) * (unsigned __int128)v27[2]
      + *((_QWORD *)&v33 + 1)
      + v26 * (_QWORD)v30 * v27[3]
      + (unsigned __int64)v23;
  v37 = (unsigned __int64)(v26 * v32) * (unsigned __int128)v27[3];
  v38 = *((unsigned __int64 *)&v36 + 1) + v37 + v24;
  v39 = v31 + __CFADD__(v29, (_QWORD)v35) + (_QWORD)v36;
  v40 = v34
      + (__CFADD__(__CFADD__(v29, (_QWORD)v35), (_QWORD)v36) | (unsigned __int8)__CFADD__(
                                                                                  v31,
                                                                                  __CFADD__(v29, (_QWORD)v35)
                                                                                + (_QWORD)v36))
      + (_QWORD)v38;
  v41 = __CFADD__(
          __CFADD__(
            __CFADD__(__CFADD__(v29, (_QWORD)v35), (_QWORD)v36) | (unsigned __int8)__CFADD__(
                                                                                     v31,
                                                                                     __CFADD__(v29, (_QWORD)v35)
                                                                                   + (_QWORD)v36),
            (_QWORD)v38) | (unsigned __int8)__CFADD__(
                                              v34,
                                              (__CFADD__(__CFADD__(v29, (_QWORD)v35), (_QWORD)v36) | (unsigned __int8)__CFADD__(v31, __CFADD__(v29, (_QWORD)v35) + (_QWORD)v36))
                                            + (_QWORD)v38),
          v25);
  v42 = (__CFADD__(
           __CFADD__(__CFADD__(v29, (_QWORD)v35), (_QWORD)v36) | (unsigned __int8)__CFADD__(
                                                                                    v31,
                                                                                    __CFADD__(v29, (_QWORD)v35)
                                                                                  + (_QWORD)v36),
           (_QWORD)v38) | (unsigned __int8)__CFADD__(
                                             v34,
                                             (__CFADD__(__CFADD__(v29, (_QWORD)v35), (_QWORD)v36) | (unsigned __int8)__CFADD__(v31, __CFADD__(v29, (_QWORD)v35) + (_QWORD)v36))
                                           + (_QWORD)v38))
      + v25;
  v41 |= __CFADD__(*((_QWORD *)&v38 + 1), v42);
  v42 += *((_QWORD *)&v38 + 1);
  v43 = __PAIR128__(v39, v29 + (__int64)v35) - *(_OWORD *)v27;
  v45 = (__PAIR128__(v42, v40) - __PAIR128__(v27[3], (__PAIR128__(v39, v29 + (__int64)v35) < *(_OWORD *)v27) + v27[2])) >> 64;
  v44 = v40 - ((__PAIR128__(v39, v29 + (__int64)v35) < *(_OWORD *)v27) + v27[2]);
  v46 = -(__int64)v41 ^ ((v42
                        - (unsigned __int128)((v40 < (__PAIR128__(v39, v29 + (__int64)v35) < *(_OWORD *)v27) + v27[2])
                                            + v27[3])) >> 64);
  *a4 = v46 & (v43 ^ (v29 + v35)) ^ v43;
  a4[1] = v46 & (*((_QWORD *)&v43 + 1) ^ v39) ^ *((_QWORD *)&v43 + 1);
  a4[2] = v46 & (v44 ^ v40) ^ v44;
  a4[3] = v46 & (v45 ^ v42) ^ v45;
  return v37;
}
