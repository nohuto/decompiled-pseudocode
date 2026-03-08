/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801A5C90
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801A8A10 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E4D30 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::AxisContainsMotion @ 0x1801A852C (_anonymous_namespace_--AxisContainsMotion.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801A97CC (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x1801AA8CC (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801AAAFC (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        _BYTE *a2,
        __int128 *a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        _OWORD *a8,
        __int64 a9,
        __int64 a10)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  struct _D3DMATRIX *v17; // rcx
  struct _D3DMATRIX *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  _OWORD *v22; // r8
  __m512 *v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rax
  char v26; // al
  char v27; // cl
  _QWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+70h] [rbp-90h]
  _D3DMATRIX v35; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v36[16]; // [rsp+E0h] [rbp-20h] BYREF

  v30[0] = a9;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v35);
  v14 = *(_OWORD *)&D3DMatrix->_21;
  v15 = *(_OWORD *)&D3DMatrix->_31;
  v16 = *(_OWORD *)&D3DMatrix->_41;
  *a8 = *(_OWORD *)&D3DMatrix->_11;
  a8[1] = v14;
  a8[2] = v15;
  a8[3] = v16;
  v18 = CMILMatrix::GetD3DMatrix(v17, &v35);
  v19 = *(_OWORD *)&v18->_21;
  v20 = *(_OWORD *)&v18->_31;
  v21 = *(_OWORD *)&v18->_41;
  *v22 = *(_OWORD *)&v18->_11;
  v22[1] = v19;
  v22[2] = v20;
  v22[3] = v21;
  *v23 = zmmword_180374E50;
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v32);
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v31);
  v33 = *(_QWORD *)v25;
  v34 = *(_DWORD *)(v25 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v36);
  v31 = *a3;
  if ( *(_QWORD *)a2 == a5 )
  {
    v26 = 0;
    v27 = 0;
  }
  else
  {
    v27 = BYTE1(v31);
    v26 = v31;
  }
  if ( v36[0] == 2 )
  {
    if ( !v26 )
    {
      if ( (a2[16] & 0x40) != 0 )
      {
        *a7 = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1248) = 1;
      }
      return 0;
    }
  }
  else if ( v36[0] == 4 && !v27 )
  {
    if ( (char)a2[16] < 0 )
    {
      a7[1] = 1;
      *a6 = 2;
      *(_BYTE *)(a1 + 1249) = 1;
    }
    return 0;
  }
  v24 = 0;
  if ( v32 == 1 && !a4[1] && !*a4 )
  {
    CInteractionProcessor::ConstructLocalToGlobalTransform(a1, &v35, a4 + 8);
    CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v30, &v33, &v35, a8, v30[0]);
    *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v31, v30, a10);
    if ( (unsigned __int8)anonymous_namespace_::AxisContainsMotion(a7, 0LL) )
      *a6 = 2;
  }
  return v24;
}
