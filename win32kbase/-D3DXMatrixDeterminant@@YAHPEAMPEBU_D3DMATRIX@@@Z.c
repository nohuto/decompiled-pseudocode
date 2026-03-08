/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C0210474
 * Callers:
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C0210F24 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 * Callees:
 *     _finite @ 0x1C00DAEC4 (_finite.c)
 *     sqrtf_0 @ 0x1C00E18AF (sqrtf_0.c)
 *     FloatingPointExceptionFilter @ 0x1C02110C4 (FloatingPointExceptionFilter.c)
 */

__int64 __fastcall D3DXMatrixDeterminant(float *a1, const struct _D3DMATRIX *a2)
{
  unsigned int v3; // ebx
  float _13; // xmm1_4
  float _14; // xmm2_4
  float _23; // xmm3_4
  float _24; // xmm4_4
  float _33; // xmm5_4
  float _34; // xmm6_4
  float _43; // xmm7_4
  float _44; // xmm9_4
  float v12; // xmm13_4
  float v13; // xmm14_4
  float v14; // xmm15_4
  float v15; // xmm11_4
  float _12; // xmm2_4
  float _22; // xmm4_4
  float _32; // xmm5_4
  float v19; // xmm6_4
  float v21; // [rsp+F0h] [rbp+18h]
  float v22; // [rsp+F8h] [rbp+20h]

  v3 = 0;
  _13 = a2->_13;
  _14 = a2->_14;
  _23 = a2->_23;
  _24 = a2->_24;
  _33 = a2->_33;
  _34 = a2->_34;
  _43 = a2->_43;
  _44 = a2->_44;
  v12 = (float)(_24 * _13) - (float)(_23 * _14);
  v13 = (float)(_34 * _13) - (float)(_33 * _14);
  v21 = (float)(_44 * _13) - (float)(_43 * _14);
  v14 = (float)(_34 * _23) - (float)(_33 * _24);
  v15 = (float)(_44 * _23) - (float)(_43 * _24);
  v22 = (float)(_44 * _33) - (float)(_43 * _34);
  _12 = a2->_12;
  _22 = a2->_22;
  _32 = a2->_32;
  v19 = 1.0
      / sqrtf_0(
          (float)((float)((float)((float)((float)((float)(v13 * _22) - (float)(v12 * _32)) - (float)(v14 * _12))
                                * a2->_41)
                        + (float)((float)((float)((float)(v15 * _12) - (float)(v21 * _22)) + (float)(v12 * a2->_42))
                                * a2->_31))
                + (float)((float)((float)((float)(v21 * _32) - (float)(v13 * a2->_42)) - (float)(v22 * _12)) * a2->_21))
        + (float)((float)((float)((float)(v22 * _22) - (float)(v15 * _32)) + (float)(v14 * a2->_42)) * a2->_11));
  if ( finite(v19) )
  {
    *a1 = v19;
    return 1;
  }
  return v3;
}
