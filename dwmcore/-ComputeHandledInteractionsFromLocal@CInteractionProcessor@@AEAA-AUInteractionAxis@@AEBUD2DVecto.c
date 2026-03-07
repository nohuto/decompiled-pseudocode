__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal(
        __int64 a1,
        __int64 a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _OWORD *v11; // rax
  char v13[8]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]

  v14 = 0;
  *(__m512 *)a4 = zmmword_180374E50;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a2 + 12) = 0;
  v8 = *(_DWORD *)(a1 + 788) - 2;
  if ( !v8 )
  {
    v11 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v13,
                      (__int64 *)a1,
                      a3,
                      a4);
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v13,
                      (__int64 *)(a1 + 160),
                      a3,
                      a4);
    goto LABEL_10;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 2 )
    {
      v11 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                        a1,
                        (__int64)v13,
                        (__int64 *)(a1 + 480),
                        a3,
                        a4);
LABEL_10:
      *(_OWORD *)a2 = *v11;
    }
  }
  else if ( CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
  {
    v11 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v13,
                      (__int64 *)(a1 + 320),
                      a3,
                      a4);
    goto LABEL_10;
  }
  return a2;
}
