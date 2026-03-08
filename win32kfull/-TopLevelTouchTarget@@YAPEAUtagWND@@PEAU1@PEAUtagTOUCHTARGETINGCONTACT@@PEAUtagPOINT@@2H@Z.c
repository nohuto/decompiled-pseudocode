/*
 * XREFs of ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C01E542C
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1C01E5EF0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBU.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E7610 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C01488EC (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1C01E8238 (xxxTouchTargetWindow.c)
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
  struct tagWND *v11; // r14
  int v12; // esi
  __int64 v13; // rax
  int v14; // esi
  const struct _D3DMATRIX *v15; // r8
  struct tagRECT *ScreenRect; // rax
  const struct _D3DMATRIX *v17; // r8
  __m128i v18; // xmm6
  const struct _D3DMATRIX *v19; // r8
  struct tagRECT *v20; // rax
  const struct _D3DMATRIX *v21; // r8
  __m128i v22; // xmm6
  const struct _D3DMATRIX *v23; // r8
  struct tagRECT *v24; // rax
  const struct _D3DMATRIX *v25; // r8
  __m128i v26; // xmm6
  const struct _D3DMATRIX *v27; // r8
  struct tagRECT *v28; // rax
  const struct _D3DMATRIX *v29; // r8
  __m128i v30; // xmm6
  unsigned __int16 v32; // [rsp+48h] [rbp-A1h] BYREF
  int v33; // [rsp+4Ch] [rbp-9Dh]
  _QWORD v34[3]; // [rsp+50h] [rbp-99h] BYREF
  BOOL v35; // [rsp+68h] [rbp-81h]
  int v36; // [rsp+6Ch] [rbp-7Dh]
  struct tagPOINT v37; // [rsp+70h] [rbp-79h] BYREF
  struct tagRECT v38; // [rsp+78h] [rbp-71h] BYREF
  struct tagRECT v39; // [rsp+88h] [rbp-61h] BYREF
  struct tagRECT v40; // [rsp+98h] [rbp-51h] BYREF
  struct tagRECT v41; // [rsp+A8h] [rbp-41h] BYREF
  struct tagRECT v42; // [rsp+B8h] [rbp-31h] BYREF
  struct tagRECT v43; // [rsp+C8h] [rbp-21h] BYREF
  struct tagRECT v44; // [rsp+D8h] [rbp-11h] BYREF
  struct tagRECT v45; // [rsp+E8h] [rbp-1h] BYREF
  char v46; // [rsp+148h] [rbp+5Fh] BYREF
  struct tagTOUCHTARGETINGCONTACT *v47; // [rsp+150h] [rbp+67h]
  struct tagPOINT *v48; // [rsp+158h] [rbp+6Fh]

  v48 = a3;
  v47 = a2;
  v36 = 4094;
  v35 = 0;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = 0LL;
  v9 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v46);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !v11 )
    goto LABEL_17;
  do
  {
    v32 = 0;
    v33 = 0;
    if ( !*((_DWORD *)v47 + 44) && !*((_DWORD *)v47 + 45) )
      break;
    v37 = *v48;
    v12 = xxxTouchTargetWindow(v11, v47, &v37, (__int64)&v32, (__int64)a4, a5);
    v13 = HMValidateHandleNoSecure(v7, 1);
    v6 = (struct tagWND *)v13;
    if ( v12 )
    {
      if ( !v13 )
        goto LABEL_11;
      v14 = a5;
      v15 = *(const struct _D3DMATRIX **)(v13 + 216);
      *(_OWORD *)&v34[1] = *(_OWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
      ScreenRect = GetScreenRect(&v38, a5, v15, (struct tagRECT *)&v34[1]);
      v17 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v18 = *(__m128i *)ScreenRect;
      *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v11 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(v18) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v39, v14, v17, (struct tagRECT *)&v34[1]),
                                         8)) )
        goto LABEL_10;
      v19 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v11 + 5) + 88LL);
      v20 = GetScreenRect(&v40, v14, v19, (struct tagRECT *)&v34[1]);
      v21 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      v22 = *(__m128i *)v20;
      *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(v22) >= _mm_cvtsi128_si32(
                                       _mm_srli_si128(
                                         *(__m128i *)GetScreenRect(&v41, v14, v21, (struct tagRECT *)&v34[1]),
                                         8)) )
        goto LABEL_10;
      v23 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
      *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL);
      v24 = GetScreenRect(&v42, v14, v23, (struct tagRECT *)&v34[1]);
      v25 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27);
      v26 = *(__m128i *)v24;
      *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v11 + 5) + 88LL);
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v26, 4)) >= _mm_srli_si128(
                                                          *(__m128i *)GetScreenRect(
                                                                        &v43,
                                                                        v14,
                                                                        v25,
                                                                        (struct tagRECT *)(v34 + 8)),
                                                          8).m128i_i32[1]
        || (v27 = (const struct _D3DMATRIX *)*((_QWORD *)v11 + 27),
            *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v11 + 5) + 88LL),
            v28 = GetScreenRect(&v44, v14, v27, (struct tagRECT *)&v34[1]),
            v29 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27),
            v30 = *(__m128i *)v28,
            *(_OWORD *)&v34[1] = *(_OWORD *)(*((_QWORD *)v6 + 5) + 88LL),
            _mm_cvtsi128_si32(_mm_srli_si128(v30, 4)) >= _mm_srli_si128(
                                                           *(__m128i *)GetScreenRect(
                                                                         &v45,
                                                                         v14,
                                                                         v29,
                                                                         (struct tagRECT *)(v34 + 8)),
                                                           8).m128i_i32[1]) )
      {
LABEL_10:
        if ( v32 + ((_WORD)v33 != 3 ? 0xFFF : 0) < (unsigned int)((unsigned __int16)v36 + (!v35 ? 0xFFF : 0)) )
        {
LABEL_11:
          v6 = v11;
          v35 = (_WORD)v33 == 3;
          v7 = *(_QWORD *)v11;
          v8 = *a4;
          v9 = v37;
          v36 = v32;
        }
      }
    }
    v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
  }
  while ( v11 );
  if ( v6 )
  {
    *v48 = v9;
    *a4 = v8;
  }
  else
  {
LABEL_17:
    *a4 = 0LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v46);
  return v6;
}
