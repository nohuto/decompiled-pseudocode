__int64 __fastcall WheapWmiExecutePolicyManagementMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int AllPolicyValues; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int PolicyValue; // eax
  unsigned int v15; // eax
  unsigned int AllPolicyBufferSize; // eax
  _DWORD *v17; // r8
  int v18; // r10d
  unsigned int v19; // edx
  unsigned int v21[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = 0;
  v6 = 0;
  v21[0] = 0;
  v7 = a1 - 1;
  if ( !v7 )
  {
    AllPolicyBufferSize = WheapGetAllPolicyBufferSize();
    v6 = AllPolicyBufferSize + 12;
    if ( v19 < AllPolicyBufferSize + 12 )
      goto LABEL_21;
    *v17 = v18;
    v17[2] = AllPolicyBufferSize;
    AllPolicyValues = WheapGetAllPolicyValues(v21, AllPolicyBufferSize, v17 + 3);
    v15 = v21[0];
    goto LABEL_23;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a4 < 4 )
      goto LABEL_16;
    v6 = 8;
    if ( a2 < 8 )
      goto LABEL_21;
    PolicyValue = WheapGetPolicyValue(*a3, &v22);
    *a3 = PolicyValue;
    AllPolicyValues = PolicyValue;
    if ( PolicyValue )
      goto LABEL_24;
    v15 = v22;
LABEL_23:
    a3[1] = v15;
    goto LABEL_24;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a4 >= 8 )
    {
      v6 = 4;
      v13 = *a3;
      v22 = a3[1];
      if ( a2 >= 4 )
      {
        v12 = WheapSetPolicyValue(v13, &v22);
        goto LABEL_14;
      }
      goto LABEL_21;
    }
LABEL_16:
    AllPolicyValues = -1073741811;
    goto LABEL_24;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v12 = WheapCommitPolicy();
      goto LABEL_14;
    }
LABEL_21:
    AllPolicyValues = -1073741789;
    goto LABEL_24;
  }
  if ( v10 == 1 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v12 = WheapResetPolicyDefaults();
LABEL_14:
      AllPolicyValues = v12;
      *a3 = v12;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  AllPolicyValues = -1073741161;
LABEL_24:
  *a5 = v6;
  return AllPolicyValues;
}
