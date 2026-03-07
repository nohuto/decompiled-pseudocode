char __fastcall CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  _DWORD *v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v7; // [rsp+28h] [rbp-70h]
  _BYTE v8[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0LL;
  if ( !*(_DWORD *)(v1 + 8) )
    return 1;
LABEL_2:
  v4 = (_DWORD *)(*(_QWORD *)v1 + 144 * v2);
  if ( (v4[1] & 0xFFFFFFCC) == 0 && *v4 <= 1u && v4[11] <= 1u )
  {
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v6, v2);
    while ( 1 )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v8, (const struct D2D_MATRIX_3X2_F *)(v7 + 16));
      if ( !CMILMatrix::IsPure2DUniformZ<0>((__int64)v8) || !CMILMatrix::IsTranslateAndScaleIgnoreZ<0>((__int64)v8) )
        break;
      if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v6) )
      {
        v1 = *((_QWORD *)this + 2);
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 < *(_DWORD *)(v1 + 8) )
          goto LABEL_2;
        return 1;
      }
    }
  }
  return 0;
}
