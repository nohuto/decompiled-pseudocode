char __fastcall EtwpGetFieldValue(unsigned __int8 *a1, int a2, _QWORD *a3)
{
  char v3; // r9
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax

  v3 = 1;
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = *a1;
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *(unsigned __int16 *)a1;
    goto LABEL_10;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v7 = *(unsigned int *)a1;
    goto LABEL_10;
  }
  if ( v6 == 4 )
  {
    v7 = *(_QWORD *)a1;
LABEL_10:
    *a3 = v7;
    return v3;
  }
  return 0;
}
