/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1C0235178
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C023783C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C023A830 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C023B168 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct CContactState *a2,
        const struct CContactState *a3)
{
  __int64 v3; // r10
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r10d
  unsigned int v10; // ebx
  int v11; // r9d
  double v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)a3 + 1);
  if ( (int)((HIDWORD(*((_QWORD *)a2 + 6)) - HIDWORD(*((_QWORD *)a3 + 6)))
           * (HIDWORD(*((_QWORD *)a2 + 6)) - HIDWORD(*((_QWORD *)a3 + 6)))
           + (*((_QWORD *)a2 + 6) - *((_QWORD *)a3 + 6)) * (*((_QWORD *)a2 + 6) - *((_QWORD *)a3 + 6))) > (unsigned __int64)*((unsigned int *)this + 85) )
    return 0LL;
  v7 = v3 - *((_DWORD *)a2 + 12);
  v8 = v6 - *((_DWORD *)a3 + 12);
  v9 = HIDWORD(v3) - *((_DWORD *)a2 + 13);
  v10 = 0;
  v11 = HIDWORD(v6) - *((_DWORD *)a3 + 13);
  if ( !v7 && !v9 )
    return 0LL;
  if ( !v8 && !v11 )
    return 0LL;
  v13 = 0.0;
  if ( ndotprod(v7, v9, v8, v11, &v13) && v13 >= *((double *)this + 475) )
    return 1;
  return v10;
}
