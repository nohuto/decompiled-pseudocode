__int64 __fastcall PiQueryDeviceRelations(__int64 a1, int a2, unsigned int *a3, _WORD *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edi
  _QWORD *v13; // rax
  unsigned int v14; // ebp
  void *v15; // r13
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // edi
  unsigned int *Pool2; // rax
  _DWORD *v21; // r8
  __int64 **i; // r14
  __int64 v23; // rdx
  int DeviceRelations; // eax
  __int64 v25; // rdx
  unsigned __int16 *v26; // rdi
  int v27; // r9d
  _WORD *v28; // r15
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+28h] [rbp-30h]
  int v31; // [rsp+68h] [rbp+10h]

  P = 0LL;
  v7 = 0;
  v31 = 0;
  v8 = 0;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225485LL;
          v12 = 6;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  PpDevNodeLockTree(0);
  v13 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v14 = 0;
  v30 = v13;
  v15 = v13;
  if ( v13 && (v17 = *(_QWORD *)(v13[39] + 40LL), (unsigned int)(*(_DWORD *)(v17 + 300) - 789) > 1) )
  {
    if ( v12 )
    {
      DeviceRelations = PnpQueryDeviceRelations((__int64)v13, v12, 0LL, (__int64)&P);
      v21 = P;
      v7 = DeviceRelations;
      v31 = DeviceRelations;
      if ( DeviceRelations < 0 )
        v21 = 0LL;
      P = v21;
    }
    else
    {
      v18 = *(_QWORD **)(v17 + 8);
      v19 = 0;
      while ( v18 )
      {
        v18 = (_QWORD *)*v18;
        ++v19;
      }
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8LL * v19 + 16, 538996816LL);
      P = Pool2;
      v21 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v19;
        for ( i = *(__int64 ***)(v17 + 8); i && v14 < v19; i = (__int64 **)*i )
        {
          ObfReferenceObjectWithTag(i[4], 0x43706E50u);
          v23 = v14++;
          *((_QWORD *)P + v23 + 1) = i[4];
        }
        v21 = P;
        v14 = 0;
      }
      else
      {
        v7 = -1073741670;
        v31 = -1073741670;
      }
    }
    if ( v21 && *v21 )
    {
      v8 = 2;
      do
      {
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v21[2 * v14 + 2] + 312LL) + 40LL);
        if ( v25 )
        {
          v26 = (unsigned __int16 *)(v25 + 40);
          if ( v25 != -40 )
          {
            v27 = *v26;
            if ( (unsigned __int16)v27 >= 2u )
            {
              if ( a4 && *a3 >= (unsigned __int64)(v8 + v27) + 2 )
              {
                memmove(a4, *(const void **)(v25 + 48), *v26);
                v28 = &a4[(unsigned __int64)*v26 >> 1];
                *v28 = 0;
                a4 = v28 + 1;
                v21 = P;
              }
              v8 += *v26 + 2;
            }
          }
        }
        ObfDereferenceObjectWithTag(*(PVOID *)&v21[2 * v14 + 2], 0x43706E50u);
        v21 = P;
        ++v14;
      }
      while ( v14 < *(_DWORD *)P );
      v7 = v31;
      v15 = v30;
      if ( a4 && *a3 >= 2 )
        *a4 = 0;
      if ( *a3 < v8 )
        v7 = -1073741789;
    }
  }
  else
  {
    v7 = -1073741810;
  }
  PpDevNodeUnlockTree(0);
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
    v8 = 0;
  *a3 = v8;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x43706E50u);
  return v7;
}
