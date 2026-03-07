bool __fastcall VfBindDifDDIWrappers(int a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10

  return (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfDifThunks, a2, a1, a2, a3)
      || (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfPoolThunks, v3, v4, v5, v6)
      || (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfRegularThunks, v7, v8, v9, v10) != 0;
}
