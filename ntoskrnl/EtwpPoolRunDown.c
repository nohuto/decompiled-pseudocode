void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  _DWORD *v2; // rbx
  char v3; // si
  unsigned int v4; // edi
  unsigned __int16 v5; // r14
  _DWORD *Pool2; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  _DWORD *v10; // r15
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  unsigned __int16 v15; // si
  _DWORD *v16; // rax
  int BigPoolInfo; // eax
  unsigned int v18; // edi
  _DWORD *j; // r14
  unsigned int v20; // r8d
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v24; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int i; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h]
  int v28; // [rsp+4Ch] [rbp-34h]
  _DWORD *v29; // [rsp+50h] [rbp-30h]
  int v30; // [rsp+58h] [rbp-28h]
  int v31; // [rsp+5Ch] [rbp-24h]

  v24 = 0;
  v2 = 0LL;
  v26 = &v24;
  v28 = 0;
  v3 = a2;
  v27 = 4;
  v4 = 48;
  v5 = 3625 - (a2 != 0);
  for ( i = 48; ; v4 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 1953985605LL);
    v2 = Pool2;
    if ( !Pool2 )
      break;
    PoolTagInfo = ExGetPoolTagInfo(Pool2, v4, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1096);
            v13 = v9;
            v29 = v10;
            if ( v9 > 0x64 )
              v13 = 100;
            v31 = 0;
            v24 = v13;
            v30 = 40 * v13;
            EtwpLogKernelEvent((__int64)&v26, v12, v11, 2u, v5, 0x401802u);
            v10 += 10 * v24;
            v9 -= v24;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
  }
  v14 = 32;
  i = 32;
  v15 = 3627 - (v3 != 0);
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v16 = (_DWORD *)ExAllocatePool2(256LL, v14, 1953985605LL);
    v2 = v16;
    if ( !v16 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v16, v14, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v18 = *v2;
        for ( j = v2 + 2; v18; v18 -= v24 )
        {
          v20 = *(_DWORD *)a1;
          v21 = *(_QWORD *)(a1 + 1096);
          v22 = v18;
          v29 = j;
          if ( v18 > 0x64 )
            v22 = 100;
          v31 = 0;
          v24 = v22;
          v30 = 24 * v22;
          EtwpLogKernelEvent((__int64)&v26, v21, v20, 2u, v15, 0x401802u);
          j += 6 * v24;
        }
      }
      ExFreePoolWithTag(v2, 0);
      return;
    }
    v14 = i;
  }
}
