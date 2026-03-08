/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1406B6AF0
 * Callers:
 *     MiDeleteEmptyPageTableCommit @ 0x1402D426C (MiDeleteEmptyPageTableCommit.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 * Callees:
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     MiBitmapRangeZeroEx @ 0x140242D70 (MiBitmapRangeZeroEx.c)
 *     MiGetPreviousVad @ 0x140242E74 (MiGetPreviousVad.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     RtlAreBitsClearEx @ 0x1402E4560 (RtlAreBitsClearEx.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiVadPureReserve @ 0x140321EB0 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x140321F50 (MiVadPageTableChargeLevel.c)
 *     MiGetNextVad @ 0x140350908 (MiGetNextVad.c)
 *     MiUpdateChargedWsles @ 0x14065F8E4 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  BOOL v16; // eax
  __int64 v17; // r10
  _BYTE *v18; // r9
  BOOL v19; // ebp
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  int v22; // ecx
  unsigned __int8 *v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r12d
  __int64 v27; // r13
  bool v28; // zf
  signed __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r9
  char v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r10
  char v40; // r8
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  _BYTE *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // [rsp+20h] [rbp-A8h]
  __int64 v50; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+30h] [rbp-98h]
  __int64 v52; // [rsp+38h] [rbp-90h]
  int v53; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h]
  unsigned __int64 PreviousVad; // [rsp+58h] [rbp-70h]
  unsigned __int64 NextVad; // [rsp+60h] [rbp-68h]
  __int64 v58; // [rsp+68h] [rbp-60h] BYREF
  __int64 v59; // [rsp+70h] [rbp-58h]
  unsigned __int64 v60; // [rsp+78h] [rbp-50h]
  unsigned __int64 v61; // [rsp+80h] [rbp-48h]
  __int64 v62; // [rsp+88h] [rbp-40h]
  __int64 v63; // [rsp+90h] [rbp-38h]

  v8 = a3;
  v9 = *(unsigned int *)(a6 + 52);
  LODWORD(v9) = v9 & 0x7FFFFFFF;
  v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 31);
  result = 0x7FFFFFFFDLL;
  if ( v10 >= 0x7FFFFFFFDLL && v10 != 0x7FFFFFFFELL )
    return result;
  v12 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a4 & 1) == 0 )
  {
    v12 = a4;
    v13 = 0LL;
  }
  PreviousVad = v12;
  v60 = v13;
  v14 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) == 0 )
  {
    v14 = a5;
    v15 = 0LL;
  }
  v61 = v15;
  NextVad = v14;
  MiVadPageTableChargeLevel(a6, v14, v15, a4);
  v16 = MiVadPureReserve(a6);
  v18 = a7;
  v19 = v16;
  v20 = 1023LL;
  v22 = 0;
  v59 = *(_QWORD *)(v8 + 1680) + 48LL;
  v23 = a7 + 1;
  v54 = a7 + 1;
  v52 = 0LL;
  v50 = 0LL;
  v24 = (unsigned int)(a1 >> 21);
  v25 = (unsigned int)(v21 >> 21);
  v55 = 1023LL;
  if ( (int)v17 > 0 )
  {
    v46 = *v23;
    v22 = v17;
    v47 = v17;
    do
    {
      *a7 >>= 1;
      v24 >>= 9;
      v25 >>= 9;
      v46 >>= 1;
      v20 >>= 9;
      --v47;
    }
    while ( v47 );
    *v23 = v46;
    v51 = -1LL;
    v49 = 0LL;
    v55 = v20;
    if ( (int)v17 >= 3 )
    {
      result = 0LL;
      goto LABEL_33;
    }
  }
  else
  {
    v51 = -1LL;
    v49 = 0LL;
  }
  LOBYTE(v26) = 9 * v22;
  v53 = 9 * v22;
  v27 = v22;
  do
  {
    v28 = *v18 == 0;
    v62 = v24;
    v63 = v25;
    if ( v28 )
    {
LABEL_10:
      ++v24;
      goto LABEL_11;
    }
    v39 = PreviousVad;
    if ( PreviousVad )
    {
      v40 = v26;
      while ( (__int64)(((unsigned __int64)*(unsigned int *)(v39 + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 33) << 23)) >> v40 == v24 )
      {
        v41 = *(unsigned int *)(v39 + 52);
        LODWORD(v41) = v41 & 0x7FFFFFFF;
        v42 = v41 | ((unsigned __int64)*(unsigned __int8 *)(v39 + 34) << 31);
        if ( v42 >= 0x7FFFFFFFDLL )
        {
          if ( v42 != 0x7FFFFFFFELL )
            goto LABEL_52;
          v54 = v23;
        }
        if ( (unsigned int)MiVadDeleted(v39) || !MiVadPureReserve(v43) )
        {
          *v44 = 0;
          goto LABEL_10;
        }
LABEL_52:
        if ( v39 == v60 )
          v39 = a6;
        PreviousVad = MiGetPreviousVad((unsigned __int64 *)v39);
        v39 = PreviousVad;
        if ( !PreviousVad )
        {
          PreviousVad = 0LL;
          break;
        }
      }
    }
LABEL_11:
    if ( *v23 )
    {
      v34 = NextVad;
      if ( !NextVad )
        goto LABEL_13;
      v35 = v26;
      while ( 1 )
      {
        if ( (__int64)(((unsigned __int64)*(unsigned int *)(v34 + 24) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 23)) >> v35 != v25 )
          goto LABEL_13;
        v36 = *(unsigned int *)(v34 + 52);
        LODWORD(v36) = v36 & 0x7FFFFFFF;
        v37 = v36 | ((unsigned __int64)*(unsigned __int8 *)(v34 + 34) << 31);
        if ( v37 >= 0x7FFFFFFFDLL )
        {
          if ( v37 != 0x7FFFFFFFELL )
            goto LABEL_42;
          v54 = v23;
        }
        if ( (unsigned int)MiVadDeleted(v34) || !MiVadPureReserve(v38) )
        {
          *v23 = 0;
          break;
        }
LABEL_42:
        if ( v34 == v61 )
          v34 = a6;
        NextVad = MiGetNextVad(v34);
        v34 = NextVad;
        if ( !NextVad )
        {
          NextVad = 0LL;
          goto LABEL_13;
        }
      }
    }
    --v25;
LABEL_13:
    if ( v24 > v25 )
    {
      v31 = v8 + 1664;
      break;
    }
    if ( !v19 )
      v52 += v25 - v24 + 1;
    v29 = v24;
    v30 = v59 - 16 * v27;
    v58 = v24;
    do
    {
      if ( v19 )
      {
        if ( v29 == v24 )
        {
          v45 = MiBitmapRangeZeroEx(v30 + 536, v29, &v58);
          v24 = v58;
          if ( v45 )
          {
            v29 = v58 - 1;
            goto LABEL_20;
          }
        }
        if ( !_bittest64(*(const signed __int64 **)(v30 + 544), v29) )
          goto LABEL_20;
        ++v52;
      }
      _bittestandreset64(*(signed __int64 **)(v30 + 544), v29);
      if ( !(unsigned int)MmGetMinWsPagePriority() && (v29 == v25 || (v29 & 7) == 7 || v19) )
      {
        v48 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( RtlAreBitsClearEx((unsigned __int64 *)(v30 + 536), v29 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
          && ((*(_DWORD *)(a3 + 2172) & 1) != 0 || v48 != (v55 & 0xFFFFFFFFFFFFFFF8uLL)) )
        {
          if ( v27 )
          {
            ++v50;
            goto LABEL_20;
          }
          if ( v51 != -1LL )
          {
            if ( v51 + 8 * v49 == v48 )
            {
              ++v49;
              goto LABEL_20;
            }
            PdcCreateWatchdogAroundClientCall();
            v50 += v49;
          }
          v49 = 1LL;
          v51 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
        }
      }
LABEL_20:
      ++v29;
    }
    while ( v29 <= v25 );
    v8 = a3;
    v31 = a3 + 1664;
    if ( v49 )
    {
      PdcCreateWatchdogAroundClientCall();
      v50 += v49;
      v51 = -1LL;
      v49 = 0LL;
    }
    ++v27;
    v18 = a7;
    v26 = v53 + 9;
    v23 = v54;
    v32 = v62;
    v33 = v63;
    *a7 >>= 1;
    *v54 >>= 1;
    v24 = v32 >> 9;
    v25 = v33 >> 9;
    v55 >>= 9;
    v53 = v26;
  }
  while ( v26 < 27 );
  if ( v50 )
    MiUpdateChargedWsles(v31);
  result = v52;
  if ( v52 )
    *(_QWORD *)(v59 + 240) -= v52;
LABEL_33:
  if ( result + v50 )
    return MiReturnFullProcessCommitment(v8, result + v50);
  return result;
}
