/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01C3754
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01C5C9C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C01C97EC (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v7; // r9
  int v8; // r8d
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  int v13; // r14d
  int v14; // r15d
  int v15; // ebp
  int v16; // r14d
  int v17; // ebx
  int v18; // r15d
  int v19; // r9d
  unsigned __int64 v20; // rtt
  unsigned int v21; // edi
  double v22; // xmm1_8
  double v24[2]; // [rsp+30h] [rbp-48h] BYREF
  double v25; // [rsp+88h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 12) != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 887) != 1 )
    return 0LL;
  v7 = *((_QWORD *)a3 + 3);
  v8 = *((_DWORD *)a3 + 10);
  v9 = *((_DWORD *)a3 + 11);
  v10 = v7 - v8;
  v11 = *((unsigned int *)this + 94);
  v12 = *((_QWORD *)this + 12);
  v13 = *((_DWORD *)a4 + 10);
  v14 = *((_DWORD *)a4 + 11);
  v15 = *((_QWORD *)a4 + 3) - v13;
  v16 = v13 - v8;
  v17 = HIDWORD(*((_QWORD *)a4 + 3)) - v14;
  v18 = v14 - v9;
  v19 = HIDWORD(v7) - v9;
  v20 = v11 * (*(_QWORD *)a2 - *((_QWORD *)a3 + 15));
  if ( v10 * v10 + v19 * v19 < (int)(v20 / v12 * (v20 / v12))
    || v15 * v15 + v17 * v17 < (int)(v11
                                   * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                   / v12
                                   * (v11
                                    * (*(_QWORD *)a2 - *((_QWORD *)a4 + 15))
                                    / v12)) )
  {
    return 0LL;
  }
  v25 = 0.0;
  v24[0] = 0.0;
  v21 = 0;
  if ( ndotprod(v16, v18, v10, v19, &v25) && ndotprod(v16, v18, v15, v17, v24) )
  {
    v22 = *((double *)this + 463);
    if ( COERCE_DOUBLE(*(_QWORD *)&v25 & _xmm) >= v22 && COERCE_DOUBLE(*(_QWORD *)&v24[0] & _xmm) >= v22 )
      return v25 > 0.0 != v24[0] > 0.0;
  }
  return v21;
}
