__int64 __fastcall NP_CONTEXT::NpStart(struct NP_CONTEXT *a1, struct NP_CONTEXT::_NP_PARAMETERS *a2)
{
  PVOID *p_P; // r8
  char *v3; // r9
  PVOID *v6; // rcx
  char *v7; // r9
  PVOID *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  unsigned int v11; // ebx
  PVOID *v12; // rcx
  PVOID *Pool2; // rax
  unsigned __int64 v15; // rcx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v17; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v3 = 0LL;
  v17 = &P;
  if ( *((_DWORD *)a2 + 1) )
  {
    do
    {
      Pool2 = (PVOID *)ExAllocatePool2(64LL, 4096LL, 1884188019LL);
      p_P = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741670;
        goto LABEL_18;
      }
      *Pool2 = (char *)*v17 + 1;
      *v17 = Pool2;
      v15 = *((unsigned int *)a2 + 1);
      v17 = Pool2;
      v3 = (char *)*Pool2;
    }
    while ( (unsigned __int64)*Pool2 < v15 );
  }
  v6 = (PVOID *)((char *)a1 + 64);
  if ( v3 )
  {
    v7 = &v3[**((_QWORD **)a1 + 9)];
    *p_P = *v6;
    *v6 = P;
    v8 = (PVOID *)*((_QWORD *)a1 + 9);
    if ( v8 == v6 )
    {
      v8 = v17;
      *((_QWORD *)a1 + 9) = v17;
    }
    *v8 = v7;
    p_P = &P;
    P = 0LL;
    v17 = &P;
  }
  v9 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v10 = *((_QWORD *)a2 + 4);
  v11 = 0;
  *((_OWORD *)a1 + 1) = v9;
  *((_QWORD *)a1 + 4) = v10;
  while ( p_P != &P )
  {
    v12 = (PVOID *)P;
    P = *(PVOID *)P;
    if ( v12 == p_P )
    {
      P = 0LL;
      v17 = &P;
    }
    else
    {
      *p_P = (char *)*p_P - 1;
    }
    if ( !v12 )
      break;
    ExFreePoolWithTag(v12, 0);
LABEL_18:
    p_P = v17;
  }
  return v11;
}
