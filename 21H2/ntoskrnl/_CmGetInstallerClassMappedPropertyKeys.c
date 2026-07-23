/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x14097B080
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14073EFA0 (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x1409754A4 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14073C480 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14073D934 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14073F360 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14073F76C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 *v7; // r14
  signed int v8; // r10d
  unsigned int v9; // r15d
  int v10; // r11d
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rsi
  char v15; // bp
  signed int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  __int64 *v23; // r14
  __int64 v24; // rsi
  char v25; // bp
  signed int InstallerClassMappedPropertyFromRegValue; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ebp
  __int64 *v33; // r14
  __int64 v34; // r15
  char v35; // si
  signed int InstallerClassMappedPropertyFromComposite; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // edx
  int v40; // esi
  int v41; // eax
  unsigned int v42; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v48; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v49[17]; // [rsp+44h] [rbp-44h] BYREF
  __int64 v50; // [rsp+90h] [rbp+8h]

  v50 = a1;
  v7 = (__int64 *)&CmClassRegPropMap;
  v8 = 0;
  v49[0] = 0;
  v9 = 0;
  v48 = 0;
  v10 = (int)a3;
  *a7 = 0;
  v12 = 0xFFFFFFFFLL;
  v13 = (int)a2;
  while ( 1 )
  {
    v14 = *v7;
    v15 = 0;
    if ( !*v7 )
      goto LABEL_17;
    if ( a4 )
      goto LABEL_73;
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                v13,
                                                v10,
                                                *v7,
                                                v49,
                                                0LL,
                                                0,
                                                &v48);
    v8 = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp == -1073741789 || !InstallerClassMappedPropertyFromRegProp )
    {
      v15 = 1;
    }
    else if ( InstallerClassMappedPropertyFromRegProp == -1073741772 )
    {
      goto LABEL_65;
    }
    v8 = 0;
    v12 = 0xFFFFFFFFLL;
    if ( v15 )
    {
LABEL_73:
      if ( a5 )
      {
        v17 = *a7;
        if ( (unsigned int)v17 < a6 )
        {
          v18 = 5 * v17;
          *(_OWORD *)(a5 + 4 * v18) = *(_OWORD *)v14;
          *(_DWORD *)(a5 + 4 * v18 + 16) = *(_DWORD *)(v14 + 16);
        }
      }
      v19 = *a7;
      v20 = -1;
      v21 = *a7 + 1;
      if ( v21 >= *a7 )
        v20 = *a7 + 1;
      v8 = v21 < v19 ? 0xC0000095 : 0;
      *a7 = v20;
      if ( v21 < v19 )
        break;
    }
    LODWORD(a1) = v50;
    v13 = (int)a2;
LABEL_17:
    ++v9;
    v7 += 3;
    if ( v9 >= 9 )
      goto LABEL_20;
    v10 = (int)a3;
  }
  *a7 = 0;
LABEL_20:
  if ( v8 < 0 )
    return (unsigned int)v8;
  v22 = 0;
  v23 = (__int64 *)&off_1409858C0;
  while ( 1 )
  {
    v24 = *v23;
    v25 = 0;
    if ( *v23 )
    {
      if ( a4 )
        goto LABEL_74;
      InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                   v50,
                                                   a2,
                                                   a3,
                                                   *v23,
                                                   v49,
                                                   0LL,
                                                   0,
                                                   &v48);
      v8 = InstallerClassMappedPropertyFromRegValue;
      if ( InstallerClassMappedPropertyFromRegValue == -1073741789 || !InstallerClassMappedPropertyFromRegValue )
      {
        v25 = 1;
      }
      else if ( InstallerClassMappedPropertyFromRegValue == -1073741772 )
      {
        goto LABEL_65;
      }
      v8 = 0;
      if ( v25 )
      {
LABEL_74:
        if ( a5 )
        {
          v27 = *a7;
          if ( (unsigned int)v27 < a6 )
          {
            v28 = 5 * v27;
            *(_OWORD *)(a5 + 4 * v28) = *(_OWORD *)v24;
            *(_DWORD *)(a5 + 4 * v28 + 16) = *(_DWORD *)(v24 + 16);
          }
        }
        v29 = *a7;
        v30 = -1;
        v31 = *a7 + 1;
        if ( v31 >= *a7 )
          v30 = *a7 + 1;
        v8 = v31 < v29 ? 0xC0000095 : 0;
        *a7 = v30;
        if ( v31 < v29 )
          break;
      }
    }
    ++v22;
    v23 += 4;
    if ( v22 >= 0xD )
      goto LABEL_39;
  }
  *a7 = 0;
LABEL_39:
  if ( v8 < 0 )
    return (unsigned int)v8;
  v32 = 0;
  v33 = (__int64 *)&off_1409840D0;
  while ( 2 )
  {
    v34 = *v33;
    v35 = 0;
    if ( !a4 )
    {
      InstallerClassMappedPropertyFromComposite = CmGetInstallerClassMappedPropertyFromComposite(
                                                    v50,
                                                    (__int64)a2,
                                                    (__int64)a3,
                                                    *v33,
                                                    v49,
                                                    0LL,
                                                    0,
                                                    &v48);
      v8 = InstallerClassMappedPropertyFromComposite;
      if ( InstallerClassMappedPropertyFromComposite == -1073741789 || !InstallerClassMappedPropertyFromComposite )
      {
        v35 = 1;
      }
      else if ( InstallerClassMappedPropertyFromComposite == -1073741772 )
      {
        goto LABEL_65;
      }
      v8 = 0;
      if ( !v35 )
      {
        v40 = -1;
        goto LABEL_67;
      }
    }
    if ( a5 )
    {
      v37 = *a7;
      if ( (unsigned int)v37 < a6 )
      {
        v38 = 5 * v37;
        *(_OWORD *)(a5 + 4 * v38) = *(_OWORD *)v34;
        *(_DWORD *)(a5 + 4 * v38 + 16) = *(_DWORD *)(v34 + 16);
      }
    }
    v39 = *a7;
    v40 = -1;
    v41 = -1;
    v42 = *a7 + 1;
    if ( v42 >= *a7 )
      v41 = *a7 + 1;
    v8 = v42 < v39 ? 0xC0000095 : 0;
    *a7 = v41;
    if ( v42 >= v39 )
    {
LABEL_67:
      ++v32;
      v33 += 2;
      if ( v32 >= 4 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  *a7 = 0;
LABEL_55:
  if ( v8 >= 0 )
  {
    if ( !a4 )
    {
      InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                       v50,
                                                       a2,
                                                       v12,
                                                       v49,
                                                       0LL,
                                                       0,
                                                       (__int64)&v48);
      if ( InstallerClassMappedPropertyFromCoInstallers != -1073741789 )
      {
        if ( InstallerClassMappedPropertyFromCoInstallers )
          return a6 < *a7 ? 0xC0000023 : 0;
      }
    }
    if ( a5 )
    {
      v44 = *a7;
      if ( (unsigned int)v44 < a6 )
        *(DEVPROPKEY *)(a5 + 20 * v44) = DEVPKEY_DeviceClass_ClassCoInstallers;
    }
    v45 = *a7;
    v46 = *a7 + 1;
    if ( v46 >= *a7 )
      v40 = *a7 + 1;
    v8 = v46 < v45 ? 0xC0000095 : 0;
    *a7 = v40;
    if ( v46 < v45 )
LABEL_65:
      *a7 = 0;
    else
      return a6 < *a7 ? 0xC0000023 : 0;
  }
  return (unsigned int)v8;
}
