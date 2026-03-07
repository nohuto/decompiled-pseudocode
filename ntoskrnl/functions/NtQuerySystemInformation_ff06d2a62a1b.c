__int64 __fastcall NtQuerySystemInformation(int a1, __int64 a2, int a3, __int64 a4)
{
  __int16 *v6; // rdx
  bool v8; // zf
  __int64 v9; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Group = 0;
  if ( a1 > 108 )
  {
    v11 = a1 - 121;
    if ( !v11 )
      return 3221225475LL;
    v12 = v11 - 20;
    if ( v12 )
    {
      v13 = v12 - 39;
      if ( !v13 )
        return 3221225475LL;
      v14 = v13 - 30;
      if ( !v14 )
        return 3221225475LL;
      v15 = v14 - 1;
      if ( !v15 )
        return 3221225475LL;
      v16 = v15 - 11;
      if ( !v16 )
        return 3221225475LL;
      v17 = v16 - 9;
      if ( !v17 )
        return 3221225475LL;
      v8 = v17 == 7;
      goto LABEL_11;
    }
    goto LABEL_22;
  }
  switch ( a1 )
  {
    case 108:
    case 8:
    case 23:
    case 42:
    case 61:
      goto LABEL_22;
    case 73:
LABEL_23:
      v9 = 2LL;
      v6 = &Group;
      return ExpQuerySystemInformation((unsigned int)a1, v6, v9, a2, a3, a4);
    case 83:
    case 100:
LABEL_22:
      Group = KeGetCurrentPrcb()->Group;
      goto LABEL_23;
  }
  v8 = a1 == 107;
LABEL_11:
  if ( !v8 )
  {
    v9 = 0LL;
    return ExpQuerySystemInformation((unsigned int)a1, v6, v9, a2, a3, a4);
  }
  return 3221225475LL;
}
