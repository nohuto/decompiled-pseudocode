__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, __int64 a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int *Pool2; // rax
  int v18; // ebx
  unsigned int v19; // ebp
  __int64 v20; // rdi
  int v21; // r8d
  char *v22; // rdx
  __int16 v23; // ax
  __int64 v24; // rax
  int v26; // [rsp+68h] [rbp+10h]

  v26 = a2;
  *a4 = 0;
  v7 = a2;
  *a5 = 0LL;
  if ( a1 )
  {
    v8 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)(v8 - 1) > 0xA && *(_WORD *)a1 == 4 )
    {
      v9 = 0;
      v10 = a1 + 8;
      v11 = v8 + a1 + 8;
      v12 = v10;
      if ( v10 < v11 )
      {
        while ( *(_WORD *)v12 <= 4u )
        {
          v13 = *(_DWORD *)(v12 + 4);
          if ( v13 > (unsigned int)v8 )
            break;
          v14 = 4LL;
          if ( v13 >= 4 )
            v14 = v13;
          v15 = *(unsigned int *)(v12 + 4);
          if ( v12 + v14 + 8 > v11 )
            break;
          ++v9;
          if ( v13 < 4 )
            v15 = 4LL;
          v12 += v15 + 8;
          if ( v12 >= v11 )
            goto LABEL_13;
        }
        v18 = -1073741788;
        goto LABEL_35;
      }
LABEL_13:
      v16 = 40 * v9 + 8;
      *a4 = v16;
      Pool2 = (unsigned int *)ExAllocatePool2(v7, v16, 1097884481LL);
      *a5 = Pool2;
      if ( !Pool2 )
      {
        v18 = -1073741670;
        goto LABEL_35;
      }
      v19 = 0;
      *Pool2 = v9;
      if ( !v9 )
        return 0;
      v20 = 0LL;
      v21 = 4;
      while ( 1 )
      {
        v22 = (char *)*a5;
        if ( *(_WORD *)v10 == 4 )
          v23 = 4;
        else
          v23 = *(_WORD *)v10 + 1;
        *(_WORD *)&v22[v20 + 10] = v23;
        if ( *(_WORD *)v10 )
        {
          if ( *(_WORD *)v10 != 1 && *(_WORD *)v10 != 2 )
          {
            if ( *(_WORD *)v10 == 4 )
            {
              LOBYTE(v21) = a3;
              v18 = AcpiIoctlArgumentToPackageObjV2(v10, v7, v21, (int)v20 + (int)v22 + 32, (__int64)&v22[v20 + 40]);
              if ( v18 < 0 )
                goto LABEL_35;
              LODWORD(v7) = v26;
              v21 = 4;
              goto LABEL_30;
            }
            *(_WORD *)&v22[v20 + 10] = 3;
          }
          *(_DWORD *)&v22[v20 + 32] = *(_DWORD *)(v10 + 4);
          *(_QWORD *)&v22[v20 + 40] = v10 + 8;
        }
        else
        {
          *(_DWORD *)&v22[v20 + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v22[v20 + 24] = *(unsigned int *)(v10 + 8);
        }
LABEL_30:
        v24 = *(unsigned int *)(v10 + 4);
        if ( (unsigned int)v24 < 4 )
          v24 = 4LL;
        ++v19;
        v10 += v24 + 8;
        v20 += 40LL;
        if ( v19 >= v9 )
          return 0;
      }
    }
  }
  v18 = -1073741811;
LABEL_35:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x41706341u);
    *a4 = 0;
    *a5 = 0LL;
  }
  return (unsigned int)v18;
}
