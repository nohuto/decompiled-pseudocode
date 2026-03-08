/*
 * XREFs of DrvDbSetDriverPackageMappedProperty @ 0x140A6A524
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140864E40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407FFCCC (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1408653CC (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetDriverPackageSignerName @ 0x140A694D0 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140A69588 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbSetDriverPackageMappedProperty(
        __int64 *a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        int a5,
        void *Src,
        unsigned int a7)
{
  int v8; // r8d
  const wchar_t *v10; // rbx
  int v11; // r11d
  _WORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // edx
  __int64 (**i)[3]; // r9
  __int64 *v22; // r10
  __int64 v23; // rcx
  __int64 (**v25)[3]; // r13
  int v26; // r14d
  int v27; // eax
  bool v28; // zf
  _OWORD *Pool2; // rdi
  HANDLE v30; // rcx
  int v31; // eax
  size_t v32; // r8
  char *v33; // rcx
  HANDLE v34; // rcx
  const wchar_t *v35; // rdx
  ULONG v36; // r12d
  int *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  HANDLE v41; // r8
  HANDLE v42; // rdx
  __int64 v43; // rax
  HANDLE v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  const wchar_t *v47; // rbx
  HANDLE v48; // r8
  int v49; // r8d
  HANDLE v50; // rdx
  NTSTATUS v51; // eax
  HANDLE v52; // r8
  HANDLE v53; // r8
  HANDLE v54; // rdx
  int v55; // r8d
  int v56; // [rsp+40h] [rbp-20h] BYREF
  int v57; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v59; // [rsp+50h] [rbp-10h]
  __int64 v62; // [rsp+B8h] [rbp+58h] BYREF

  v8 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v10 = a2;
  v57 = 0;
  v11 = (int)a1;
  v56 = 0;
  v12 = 0LL;
  v59 = 0LL;
  LODWORD(v62) = 0;
  if ( v8 == 2 )
  {
    v13 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v13 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v13 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 18 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
      v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 29 )
  {
    v15 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
      v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v15 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 30 )
  {
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v16 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 33 )
  {
    v17 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
      v17 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v17 )
      return (unsigned int)-1073741790;
  }
  if ( v8 == 40 )
  {
    v18 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
      v18 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v18 )
      return (unsigned int)-1073741790;
  }
  v20 = 0;
  for ( i = &off_140004640; ; i += 5 )
  {
    v22 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 )
    {
      v23 = *v22 - *(_QWORD *)a4;
      if ( *v22 == *(_QWORD *)a4 )
        v23 = v22[1] - *(_QWORD *)(a4 + 8);
      if ( !v23 )
        break;
    }
    if ( ++v20 >= 0x22 )
      return (unsigned int)-1073741802;
  }
  v25 = &off_140004640 + 5 * v20;
  if ( !v25 )
    return (unsigned int)-1073741802;
  v26 = a5;
  if ( a5 != *((_DWORD *)v25 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v19 = DrvDbOpenDriverPackageRegKey(v11, (int)v10, 3, 0, (__int64)&Handle, 0LL);
    if ( v19 < 0 )
      goto LABEL_111;
    v10 = a2;
  }
  v27 = *((_DWORD *)v25 + 8);
  if ( v27 )
  {
    if ( v26 )
      v28 = a7 == v27;
    else
      v28 = a7 == 0;
    if ( !v28 )
    {
      v19 = -1073741823;
      goto LABEL_111;
    }
    LODWORD(v62) = 48;
    Pool2 = (_OWORD *)ExAllocatePool2(256LL, 48LL, 1111770192LL);
    if ( !Pool2 )
      goto LABEL_48;
    v30 = Handle;
    if ( a3 )
      v30 = a3;
    v31 = RegRtlQueryValue(v30, L"Version", &v57, Pool2, (unsigned int *)&v62);
    v19 = v31;
    if ( v31 == -1073741772 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      goto LABEL_58;
    }
    if ( v31 == -1073741789 )
    {
      v19 = -1073741595;
    }
    else if ( v31 >= 0 )
    {
      if ( v57 == 3 && (_DWORD)v62 == 48 )
      {
LABEL_58:
        v32 = *((unsigned int *)v25 + 8);
        v33 = (char *)Pool2 + *((unsigned int *)v25 + 7);
        if ( v26 )
          memmove(v33, Src, v32);
        else
          memset(v33, 0, v32);
        v34 = Handle;
        if ( a3 )
          v34 = a3;
        v19 = RegRtlSetValue(v34, L"Version", 3u, Pool2, 0x30u);
        goto LABEL_65;
      }
      v19 = -1073741823;
    }
LABEL_65:
    ExFreePoolWithTag(Pool2, 0);
LABEL_109:
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_111;
  }
  v35 = L"Microsoft Windows";
  v36 = a7;
  v37 = (int *)Src;
  if ( *(_DWORD *)(a4 + 16) == 7 )
  {
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
      v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    v39 = 0LL;
    if ( !v38 && v26 == 18 && a7 > 2 )
    {
      if ( Src )
      {
        if ( !*((_WORD *)Src + ((unsigned __int64)a7 >> 1) - 1) )
        {
          v40 = wcsicmp((const wchar_t *)Src, L"Microsoft Windows");
          v39 = 0LL;
          if ( !v40 )
          {
            v41 = Handle;
            if ( a3 )
              v41 = a3;
            if ( (int)DrvDbGetDriverPackageSignerScore(a1, v10, v41, (wchar_t *)&v56) >= 0 && v56 == 218103811 )
            {
              v42 = Handle;
              if ( a3 )
                v42 = a3;
              v19 = DrvDbSetRegValueMappedProperty(v39, v42, (__int64)v25, 0, 0LL, 0);
              if ( v19 != -1073741275 )
                goto LABEL_111;
              goto LABEL_82;
            }
LABEL_106:
            v50 = Handle;
            if ( a3 )
              v50 = a3;
            v51 = DrvDbSetRegValueMappedProperty(v39, v50, (__int64)v25, v26, v37, v36);
            v12 = v59;
            v19 = v51;
            goto LABEL_109;
          }
        }
      }
    }
  }
  else
  {
    v39 = 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) != 8 )
    goto LABEL_106;
  v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerScore )
    v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v43 )
    goto LABEL_106;
  if ( v26 == 7 )
  {
    if ( v36 != 4 || !v37 )
      goto LABEL_106;
    if ( *v37 == 218103811 )
    {
      v44 = Handle;
      if ( a3 )
        v44 = a3;
      if ( (unsigned int)DrvDbGetDriverPackageSignerName(0LL, (__int64)v35, v44, 0LL, 0, (unsigned int *)&v62) == -1073741789
        && (_DWORD)v62 == 18 )
      {
        v59 = (_WORD *)ExAllocatePool2(256LL, 36LL, 1111770192LL);
        v47 = v59;
        if ( !v59 )
        {
LABEL_48:
          v19 = -1073741801;
          goto LABEL_111;
        }
        v48 = Handle;
        if ( a3 )
          v48 = a3;
        if ( (int)DrvDbGetDriverPackageSignerName(v46, v45, v48, v59, 18, (unsigned int *)&v62) >= 0
          && (_DWORD)v62
          && !v47[(unsigned int)(v62 - 1)]
          && !wcsicmp(v47, L"Microsoft Windows") )
        {
          v49 = (int)Handle;
          if ( a3 )
            v49 = (int)a3;
          DrvDbSetDriverPackageMappedProperty((int)a1, (int)a2, v49, (int)&DEVPKEY_DriverPackage_SignerName, 0, 0LL, 0);
        }
      }
      goto LABEL_106;
    }
  }
  else if ( v26 )
  {
    goto LABEL_106;
  }
  v52 = Handle;
  if ( a3 )
    v52 = a3;
  if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v52, (wchar_t *)&v56) < 0 || v56 != 218103811 )
    goto LABEL_106;
  v53 = Handle;
  if ( a3 )
    v53 = a3;
  if ( (unsigned int)DrvDbGetDriverPackageSignerName(v39, 0LL, v53, 0LL, 0, (unsigned int *)&v62) != -1073741275 )
    goto LABEL_106;
  v54 = Handle;
  if ( a3 )
    v54 = a3;
  v19 = DrvDbSetRegValueMappedProperty(v39, v54, (__int64)v25, v26, v37, v36);
  if ( v19 < 0 )
    goto LABEL_111;
  v55 = (int)Handle;
  if ( a3 )
    v55 = (int)a3;
  DrvDbSetDriverPackageMappedProperty(
    (int)a1,
    (int)a2,
    v55,
    (int)&DEVPKEY_DriverPackage_SignerName,
    18,
    (void *)L"Microsoft Windows",
    36);
LABEL_82:
  v19 = 0;
LABEL_111:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}
