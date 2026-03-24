/*
 * XREFs of ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C01A8900
 * Callers:
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C01A91D8 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 * Callees:
 *     _finite @ 0x1C00C5A44 (_finite.c)
 *     sqrtf_0 @ 0x1C00CE9EF (sqrtf_0.c)
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
  float _44; // xmm8_4
  float v12; // xmm12_4
  float v13; // xmm0_4
  float v15; // [rsp+24h] [rbp-104h]
  float _12; // [rsp+3Ch] [rbp-ECh]
  float _22; // [rsp+44h] [rbp-E4h]
  float _32; // [rsp+4Ch] [rbp-DCh]
  float _42; // [rsp+54h] [rbp-D4h]

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
  v15 = (float)(_34 * _13) - (float)(_33 * _14);
  _12 = a2->_12;
  _22 = a2->_22;
  _32 = a2->_32;
  _42 = a2->_42;
  v13 = sqrtf_0(
          (float)((float)((float)((float)((float)((float)(v15 * _22) - (float)(v12 * _32))
                                        - (float)((float)((float)(_34 * _23) - (float)(_33 * _24)) * _12))
                                * a2->_41)
                        + (float)((float)((float)((float)((float)((float)(_44 * _23) - (float)(_43 * _24)) * _12)
                                                - (float)((float)((float)(_44 * _13) - (float)(_43 * _14)) * _22))
                                        + (float)(v12 * _42))
                                * a2->_31))
                + (float)((float)((float)((float)((float)((float)(_44 * _13) - (float)(_43 * _14)) * _32)
                                        - (float)(v15 * _42))
                                - (float)((float)((float)(_44 * _33) - (float)(_43 * _34)) * _12))
                        * a2->_21))
        + (float)((float)((float)((float)((float)((float)(_44 * _33) - (float)(_43 * _34)) * _22)
                                - (float)((float)((float)(_44 * _23) - (float)(_43 * _24)) * _32))
                        + (float)((float)((float)(_34 * _23) - (float)(_33 * _24)) * _42))
                * a2->_11));
  if ( finite((float)(1.0 / v13)) )
  {
    *a1 = 1.0 / v13;
    return 1;
  }
  return v3;
}
