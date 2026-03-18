/*
 * XREFs of VfBindDifDDIWrappers @ 0x140A89818
 * Callers:
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 * Callees:
 *     ViBindDifThunkNormal @ 0x140A89F84 (ViBindDifThunkNormal.c)
 */

char __fastcall VfBindDifDDIWrappers(int a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r10
  char result; // al

  if ( (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfDifThunks, a2, a1, a2, a3) )
    return 1;
  if ( (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfPoolThunks, v3, v4, v5, v6) )
    return 1;
  if ( (unsigned __int8)ViBindDifThunkNormal((unsigned int)&VfMandatoryThunks, v7, v8, v9, v10) )
    return 1;
  result = ViBindDifThunkNormal((unsigned int)&VfRegularThunks, v11, v12, v13, v14);
  if ( result )
    return 1;
  return result;
}
