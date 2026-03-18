/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C0204D08
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C0205774 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBU.c)
 *     EditionNonDwmTouchHitTest @ 0x1C0206E40 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C0204998 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 */

struct tagWND *__fastcall TopLevelTouchTarget(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        int a5)
{
  struct tagWND *v6; // r15
  __int64 v7; // r13
  struct tagPOINT v8; // rbx
  struct tagPOINT v9; // rdi
  __int64 v11; // r8
  struct tagWND *v12; // r14
  int v13; // esi
  __int64 v14; // rax
  int v15; // esi
  const struct _D3DMATRIX *v16; // r8
  struct tagRECT *ScreenRect; // rax
  const struct _D3DMATRIX *v18; // r8
  __m128i v19; // xmm6
  const struct _D3DMATRIX *v20; // r8
  struct tagRECT *v21; // rax
  const struct _D3DMATRIX *v22; // r8
  __m128i v23; // xmm6
  const struct _D3DMATRIX *v24; // r8
  struct tagRECT *v25; // rax
  const struct _D3DMATRIX *v26; // r8
  __m128i v27; // xmm6
  const struct _D3DMATRIX *v28; // r8
  struct tagRECT *v29; // rax
  const struct _D3DMATRIX *v30; // r8
  __m128i v31; // xmm6
  unsigned __int16 v33; // [rsp+48h] [rbp-A1h] BYREF
  int v34; // [rsp+4Ch] [rbp-9Dh]
  _QWORD v35[3]; // [rsp+50h] [rbp-99h] BYREF
  BOOL v36; // [rsp+68h] [rbp-81h]
  int v37; // [rsp+6Ch] [rbp-7Dh]
  struct tagPOINT v38; // [rsp+70h] [rbp-79h] BYREF
  struct tagRECT v39; // [rsp+78h] [rbp-71h] BYREF
  struct tagRECT v40; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v41; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v42; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v43; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v44; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v45; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v46; // [rsp+E8h] [rbp-1h] BYREF
  char v47; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v48; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v49; // [rsp+158h] [rbp+6Fh]

  v49 = a3;
  v48 = a2;
  v37 = 4094;
  v36 = 0;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = 0LL;
  v9 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v47);
  v12 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !v12 )
    goto LABEL_15;
  do
  {
    v33 = 0;
    v34 = 0;
    if ( !*((_DWORD *)v48 + 44) && !*((_DWORD *)v48 + 45) )
      break;
    v38 = *v49;
    v13 = xxxTouchTargetWindow(v12, v48, &v38, (__int64)&v33, (__int64)a4, a5);
    v14 = HMValidateHandleNoSecure(v7, 1);
    v6 = (struct tagWND *)v14;
    if ( v13 )
    {
      if ( !v14 )
        goto LABEL_11;
      v15 = a5;
      v16 = *(const struct _D3DMATRIX **)(v14 + 216);
      *(_OWORD *)&v35[1] = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      ScreenRect = GetScreenRect(&v39, a5, v16, (struct tagRECT *)&v35[1]);
      v18 = (const struct _D3DMATRIX *)*((_QWORD *)v12 + 27);
      v19 = *(__m128i *)ScreenRect;
      *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(v19) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v40, v15, v18, (struct tagRECT *)&v35[1]),
                                         8)) )
        goto LABEL_19;
      v20 = (const struct _D3DMATRIX *)*((_QWORD *)v12 + 27);
      *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL);
      v21 = GetScreenRect(&v41, v15, v20, (struct tagRECT *)&v35[1]);
      v22 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v23 = *(__m128i *)v21;
      *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(v23) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v42, v15, v22, (struct tagRECT *)&v35[1]),
                                         8)) )
        goto LABEL_19;
      v24 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL);
      v25 = GetScreenRect(&v43, v15, v24, (struct tagRECT *)&v35[1]);
      v26 = (const struct _D3DMATRIX *)*((_QWORD *)v12 + 27);
      v27 = *(__m128i *)v25;
      *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v27, 4)) >= _mm_srli_si128(
                                                          *(__m128i *)GetScreenRect(
                                                                        &v44,
                                                                        v15,
                                                                        v26,
                                                                        (struct tagRECT *)(v35 + 8)),
                                                          8).m128i_i32[1]
        || (v28 = (const struct _D3DMATRIX *)*((_QWORD *)v12 + 27),
            *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v12 + 5) + 88LL),
            v29 = GetScreenRect(&v45, v15, v28, (struct tagRECT *)&v35[1]),
            v30 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27),
            v31 = *(__m128i *)v29,
            *(_OWORD *)&v35[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL),
            _mm_cvtsi128_si32(_mm_srli_si128(v31, 4)) >= _mm_srli_si128(
                                                           *(__m128i *)GetScreenRect(
                                                                         &v46,
                                                                         v15,
                                                                         v30,
                                                                         (struct tagRECT *)(v35 + 8)),
                                                           8).m128i_i32[1]) )
      {
LABEL_19:
        v11 = (unsigned __int16)v37;
        if ( v33 + ((_WORD)v34 != 3 ? 0xFFF : 0) < (unsigned int)((unsigned __int16)v37 + (!v36 ? 0xFFF : 0)) )
        {
LABEL_11:
          v6 = v12;
          v36 = (_WORD)v34 == 3;
          v7 = *(_QWORD *)v12;
          v8 = *a4;
          v9 = v38;
          v37 = v33;
        }
      }
    }
    v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
  }
  while ( v12 );
  if ( v6 )
  {
    *v49 = v9;
    *a4 = v8;
  }
  else
  {
LABEL_15:
    *a4 = 0LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v47, 0LL, v11);
  return v6;
}
