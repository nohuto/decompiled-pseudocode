__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  char *v7; // rdi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int *v11; // r12
  int v12; // eax
  unsigned int v13; // r15d
  int v14; // eax
  _QWORD *v15; // rdx
  _QWORD *i; // rax
  _OWORD v18[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h]
  _OWORD v20[2]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int *v21; // [rsp+A0h] [rbp+2Fh]
  PVOID P; // [rsp+D8h] [rbp+67h] BYREF

  v3 = *(_QWORD **)(a1 + 760);
  P = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  memset(v20, 0, sizeof(v20));
  memset(v18, 0, sizeof(v18));
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    a2[4] = 0;
  }
  if ( a3 )
  {
    memset(a3, 0, 0x48uLL);
    a3[1] = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
    *a3 = a3;
  }
  if ( !v3 || !AMLIIsNamedChildPresent(v3, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_53;
  }
  v8 = ACPIGet(a1, 0x444C505Fu, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v20, 0LL);
  if ( v8 < 0 )
    goto LABEL_55;
  if ( WORD1(v20[0]) != 3 )
  {
    if ( WORD1(v20[0]) == 4 )
    {
      v11 = v21;
      if ( *v21 )
      {
        v8 = AMLIEvalPkgDataElement((__int64)v20, 0, (__int64)v18);
        if ( v8 < 0 )
          goto LABEL_55;
        if ( WORD1(v18[0]) == 3 )
        {
          if ( a2 )
          {
            v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v18, a2);
            if ( v8 < 0 )
              goto LABEL_55;
          }
          if ( !a3 )
            goto LABEL_55;
          v12 = ACPICreatePhysicalDeviceLocationDescriptor((__int64)a2, (__int64 *)&P);
          v7 = (char *)P;
          v8 = v12;
          if ( v12 < 0 )
            goto LABEL_53;
          if ( !a2 )
          {
            v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v18, (_DWORD *)P + 4);
            if ( v8 < 0 )
              goto LABEL_53;
          }
          v10 = ACPIProcessPhysicalDeviceLocationPackage(v20, 0LL, v7);
LABEL_27:
          v8 = v10;
          if ( v10 >= 0 )
            goto LABEL_28;
LABEL_53:
          if ( v7 )
            ACPIFreePhysicalDeviceLocationDescriptor(v7);
          goto LABEL_55;
        }
        if ( WORD1(v18[0]) == 4 )
        {
          if ( a3 )
          {
            v13 = 0;
            while ( 1 )
            {
              v14 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, (__int64 *)&P);
              v7 = (char *)P;
              v8 = v14;
              if ( v14 < 0 )
                break;
              v8 = ACPIProcessPhysicalDeviceLocationPackage(v18, (char *)P + 16, P);
              if ( v8 < 0 )
                break;
              if ( !v13 && a2 )
              {
                *(_OWORD *)a2 = *((_OWORD *)v7 + 1);
                a2[4] = *((_DWORD *)v7 + 8);
              }
              ACPIInsertPhysicalDeviceLocationDescriptor((__int64)a3, (__int64)v7);
              ++v13;
              v7 = 0LL;
              P = 0LL;
              if ( v13 < *v11 )
              {
                AMLIFreeDataBuffs((__int64)v18);
                v8 = AMLIEvalPkgDataElement((__int64)v20, v13, (__int64)v18);
                if ( v8 < 0 )
                  goto LABEL_53;
                if ( WORD1(v18[0]) == 4 )
                  continue;
              }
              goto LABEL_40;
            }
          }
          else
          {
            if ( !a2 )
              goto LABEL_55;
            v8 = ACPIProcessPhysicalDeviceLocationPackage(v18, a2, 0LL);
            if ( v8 < 0 )
              goto LABEL_55;
          }
          goto LABEL_53;
        }
      }
    }
    v8 = -1073741823;
    goto LABEL_55;
  }
  if ( a2 )
  {
    v8 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v20, a2);
    if ( v8 < 0 )
      goto LABEL_55;
  }
  if ( !a3 )
    goto LABEL_55;
  v9 = ACPICreatePhysicalDeviceLocationDescriptor((__int64)a2, (__int64 *)&P);
  v7 = (char *)P;
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_53;
  if ( !a2 )
  {
    v10 = ACPIGetPhysicalDeviceLocationBuffer((__int64)v20, (_DWORD *)P + 4);
    goto LABEL_27;
  }
LABEL_28:
  ACPIInsertPhysicalDeviceLocationDescriptor((__int64)a3, (__int64)v7);
  v7 = 0LL;
LABEL_40:
  v15 = (_QWORD *)a3[2];
  if ( v15 || (_QWORD *)a3[5] != a3 + 5 )
    goto LABEL_53;
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( v15 )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
    v15 = i - 9;
  }
LABEL_55:
  if ( v19 )
    AMLIFreeDataBuffs((__int64)v18);
  if ( v21 )
    AMLIFreeDataBuffs((__int64)v20);
  return (unsigned int)v8;
}
