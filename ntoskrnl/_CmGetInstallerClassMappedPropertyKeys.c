/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14074D6F0 (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x140A5FE90 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14074DA38 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14074DDF4 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14087C86C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14087E160 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  __int64 *v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v30; // rax
  unsigned int v31; // ecx
  _DWORD v32[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h]
  void *v34; // [rsp+A0h] [rbp+18h]

  v34 = (void *)a3;
  v33 = a1;
  v7 = a7;
  v8 = (__int64 *)&CmClassRegPropMap;
  v32[0] = 0;
  LODWORD(a7) = 0;
  *v7 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *v8;
    if ( *v8 )
    {
      if ( a4
        || (result = CmGetInstallerClassMappedPropertyFromRegProp(
                       a1,
                       (int)a2,
                       a3,
                       *v8,
                       v32,
                       0LL,
                       0,
                       (unsigned int *)&a7),
            (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v14 = *v7;
          if ( (unsigned int)v14 < a6 )
          {
            v15 = 5 * v14;
            *(_OWORD *)(a5 + 4 * v15) = *(_OWORD *)v12;
            *(_DWORD *)(a5 + 4 * v15 + 16) = *(_DWORD *)(v12 + 16);
          }
        }
        v16 = *v7 + 1;
        if ( v16 < *v7 )
          goto LABEL_51;
        *v7 = v16;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_52;
      }
      a1 = v33;
    }
    ++v11;
    v8 += 3;
    if ( v11 >= 9 )
      break;
    a3 = (__int64)v34;
  }
  v17 = 0;
  v18 = (__int64 *)&off_140A770B0;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      if ( a4
        || (result = CmGetInstallerClassMappedPropertyFromRegValue(a1, (int)a2, v34, v19, v32, 0LL, 0, &a7),
            (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v20 = *v7;
          if ( (unsigned int)v20 < a6 )
          {
            v21 = 5 * v20;
            *(_OWORD *)(a5 + 4 * v21) = *(_OWORD *)v19;
            *(_DWORD *)(a5 + 4 * v21 + 16) = *(_DWORD *)(v19 + 16);
          }
        }
        v22 = *v7 + 1;
        if ( v22 < *v7 )
          goto LABEL_51;
        *v7 = v22;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_52;
      }
    }
    ++v17;
    v18 += 4;
    if ( v17 >= 0xD )
      break;
    a1 = v33;
  }
  v23 = 0;
  v24 = (__int64 *)&off_140A75910;
  do
  {
    v25 = *v24;
    if ( a4
      || (result = CmGetInstallerClassMappedPropertyFromComposite(
                     v33,
                     (__int64)a2,
                     (__int64)v34,
                     *v24,
                     v32,
                     0LL,
                     0,
                     (unsigned int *)&a7),
          (_DWORD)result == -1073741789)
      || !(_DWORD)result )
    {
      if ( a5 )
      {
        v26 = *v7;
        if ( (unsigned int)v26 < a6 )
        {
          v27 = 5 * v26;
          *(_OWORD *)(a5 + 4 * v27) = *(_OWORD *)v25;
          *(_DWORD *)(a5 + 4 * v27 + 16) = *(_DWORD *)(v25 + 16);
        }
      }
      v28 = *v7 + 1;
      if ( v28 < *v7 )
        goto LABEL_51;
      *v7 = v28;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
      goto LABEL_52;
    }
    ++v23;
    v24 += 2;
  }
  while ( v23 < 4 );
  if ( !a4 )
  {
    InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                     v33,
                                                     a2,
                                                     a3,
                                                     v32,
                                                     0LL,
                                                     0,
                                                     (__int64)&a7);
    if ( InstallerClassMappedPropertyFromCoInstallers != -1073741789 )
    {
      if ( InstallerClassMappedPropertyFromCoInstallers )
        return a6 < *v7 ? 0xC0000023 : 0;
    }
  }
  if ( a5 )
  {
    v30 = *v7;
    if ( (unsigned int)v30 < a6 )
      *(DEVPROPKEY *)(a5 + 20 * v30) = DEVPKEY_DeviceClass_ClassCoInstallers;
  }
  v31 = *v7 + 1;
  if ( v31 >= *v7 )
  {
    *v7 = v31;
    return a6 < *v7 ? 0xC0000023 : 0;
  }
LABEL_51:
  result = 3221225621LL;
LABEL_52:
  *v7 = 0;
  return result;
}
