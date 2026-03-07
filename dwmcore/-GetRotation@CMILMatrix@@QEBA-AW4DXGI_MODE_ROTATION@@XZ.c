__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d

  v1 = 0;
  if ( CMILMatrix::Is2DAxisAlignedPreserving(this) )
  {
    v2 = ((__int64 (*)(void))CalcMatrixEpsilonValue)();
    v6 = CalcMatrixEpsilonValue(v4, v3, v5, v2);
    v10 = CalcMatrixEpsilonValue(v8, v7, v6, v9);
    v14 = CalcMatrixEpsilonValue(v11, v10, v12, v13);
    if ( v17 == 1 )
    {
      if ( !v16 && !v15 )
        return v14 == 1;
    }
    else if ( v17 )
    {
      if ( v17 == -1 && !v16 && !v15 && v14 == -1 )
        return 3;
    }
    else if ( v16 == 1 )
    {
      if ( v15 == -1 && !v14 )
        return 2;
    }
    else if ( v16 == -1 && v15 == 1 && !v14 )
    {
      return 4;
    }
  }
  return v1;
}
