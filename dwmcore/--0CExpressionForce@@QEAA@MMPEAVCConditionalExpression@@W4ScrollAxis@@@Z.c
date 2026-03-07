__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `CMILRefCountBaseT<IAccelerator>'};
  *(_QWORD *)(a1 + 16) = &CExpressionForce::`vftable'{for `IScalarForce'};
  *(_QWORD *)(a1 + 96) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)(a1 + 104) = a5;
  result = a1;
  *(float *)(a1 + 132) = a2;
  *(float *)(a1 + 136) = a3;
  *(_BYTE *)(a1 + 128) = 0;
  return result;
}
