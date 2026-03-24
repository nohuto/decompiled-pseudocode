/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01C3680
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01C5C9C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01C8EB4 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C01C97EC (-ndotprod@@YA_NHHHHPEAN@Z.c)
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
  v5 = *((_QWORD *)a3 + 3);
  v8 = *((_QWORD *)a4 + 3);
  v9 = *((_QWORD *)a3 + 5) - *((_QWORD *)a4 + 5);
  v10 = HIDWORD(*((_QWORD *)a3 + 5)) - HIDWORD(*((_QWORD *)a4 + 5));
  if ( v10 * v10 + v9 * v9 > (unsigned __int64)*((unsigned int *)this + 73) )
    return 0LL;
  v11 = v5 - *((_DWORD *)a3 + 10);
  v12 = v8 - *((_DWORD *)a4 + 10);
  v13 = HIDWORD(v5) - *((_DWORD *)a3 + 11);
  v14 = 0;
  v15 = HIDWORD(v8) - *((_DWORD *)a4 + 11);
  if ( !v11 && !v13 )
    return 0LL;
  if ( !v12 && !v15 )
    return 0LL;
  v17 = 0.0;
  if ( ndotprod(v11, v13, v12, v15, &v17) && v17 >= *((double *)this + 463) )
    return 1;
  return v14;
}
