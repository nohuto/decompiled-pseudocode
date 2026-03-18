/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01FEE48
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C02013F4 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0204570 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0204E74 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  __int64 v5; // r10
  __int64 v8; // r9
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // r8d
  int v13; // r10d
  unsigned int v14; // ebx
  int v15; // r9d
  double v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = *(double *)&a2;
  v5 = *((_QWORD *)a3 + 1);
  v8 = *((_QWORD *)a4 + 1);
  v9 = *((_QWORD *)a3 + 6) - *((_QWORD *)a4 + 6);
  v10 = HIDWORD(*((_QWORD *)a3 + 6)) - HIDWORD(*((_QWORD *)a4 + 6));
  if ( v10 * v10 + v9 * v9 > (unsigned __int64)*((unsigned int *)this + 85) )
    return 0LL;
  v11 = v5 - *((_DWORD *)a3 + 12);
  v12 = v8 - *((_DWORD *)a4 + 12);
  v13 = HIDWORD(v5) - *((_DWORD *)a3 + 13);
  v14 = 0;
  v15 = HIDWORD(v8) - *((_DWORD *)a4 + 13);
  if ( !v11 && !v13 )
    return 0LL;
  if ( !v12 && !v15 )
    return 0LL;
  v17 = 0.0;
  if ( ndotprod(v11, v13, v12, v15, &v17) && v17 >= *((double *)this + 475) )
    return 1;
  return v14;
}
