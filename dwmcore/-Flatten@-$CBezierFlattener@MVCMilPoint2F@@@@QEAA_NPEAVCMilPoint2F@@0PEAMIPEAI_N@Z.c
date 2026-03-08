/*
 * XREFs of ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18001655C
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802AC128 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?Step@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18001662C (-Step@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x180083330 (-TryDoubleTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ.c)
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800838F4 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::Flatten(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r10
  char result; // al

  v9 = 1;
  v10 = 0LL;
  while ( *(_DWORD *)(a1 + 80) > v9 )
  {
    if ( (unsigned int)v10 >= a5 )
      goto LABEL_17;
    CBezierFlattener<float,CMilPoint2F>::Step();
    *(_QWORD *)(a2 + 8 * v12) = *(_QWORD *)(v11 + 48);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v12) = *(_DWORD *)(v11 + 84);
    if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(v11 + 64) & _xmm), COERCE_FLOAT(*(_DWORD *)(v11 + 68) & _xmm)) <= *(float *)(v11 + 32)
      || *(float *)(v11 + 88) <= 0.001 )
    {
      while ( (unsigned __int8)CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep() )
        ;
    }
    else
    {
      CBezierFlattener<float,CMilPoint2F>::HalveTheStep();
    }
  }
  if ( (unsigned int)v10 < a5 )
  {
    if ( a7 )
    {
      *(_QWORD *)(a2 + 8 * v10) = *(_QWORD *)(a1 + 24);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v10) = 1065353216;
      LODWORD(v10) = v9 + v10;
    }
    LOBYTE(v9) = 0;
  }
LABEL_17:
  result = v9;
  *a6 = v10;
  return result;
}
