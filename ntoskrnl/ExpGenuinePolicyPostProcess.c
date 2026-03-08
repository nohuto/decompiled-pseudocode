/*
 * XREFs of ExpGenuinePolicyPostProcess @ 0x1409F6FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140414ED0 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpOsProductCacheProviderHelper @ 0x140859E94 (ExpOsProductCacheProviderHelper.c)
 *     sub_1409F6ABC @ 0x1409F6ABC (sub_1409F6ABC.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGenuinePolicyPostProcess(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v9; // ebx
  void *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ebx
  void *Pool2; // rax
  __int64 v15; // rcx
  int v16; // eax
  _BYTE v18[8]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[3]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v20[3]; // [rsp+54h] [rbp-2Ch] BYREF
  _DWORD *v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+68h] [rbp-18h]

  v21 = a5;
  v20[0] = 0;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v20[1] = 4;
  v19[2] = 0;
  v22 = 0LL;
  v19[0] = 0;
  if ( *a1 )
  {
    v9 = sub_1409F6ABC(a2, a3, a4, a5, 2);
    *a6 = 1;
    return v9;
  }
  if ( a3 )
  {
    if ( a4 == 1 )
    {
      v11 = *(_BYTE *)a3 == 1;
    }
    else
    {
      if ( a4 != 2 )
      {
        if ( *a3 == 1 )
          return v9;
        goto LABEL_11;
      }
      v11 = *(_WORD *)a3 == 1;
    }
    if ( v11 )
      return v9;
  }
LABEL_11:
  ZwQueryLicenseValue((__int64)L"JL", 0LL);
  if ( !qword_140D53428 )
    return (unsigned int)-1073741637;
  v9 = qword_140D53428(v20);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  if ( !qword_140D533E8 )
    return (unsigned int)-1073741637;
  v9 = ExpOsProductCacheProviderHelper(v12, (UNICODE_STRING *)&qword_140A75038, 0LL, 0LL, 0, v19, v18);
  if ( v9 == -1073741789 )
  {
    v13 = v19[0];
    Pool2 = (void *)ExAllocatePool2(256LL, v19[0], 542329939LL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = ExpOsProductCacheProviderHelper(v15, (UNICODE_STRING *)&qword_140A75038, 0LL, Pool2, v13, v19, v18);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_26;
  v16 = qword_140D533E8(3LL, v10, 0LL);
  v9 = v16;
  if ( v16 < 0 )
  {
    if ( v16 == -1073741198 )
      goto LABEL_21;
  }
  else if ( (v22 & 0x40) != 0 )
  {
LABEL_21:
    v9 = 0;
    goto LABEL_24;
  }
  if ( v16 >= 0 )
  {
LABEL_24:
    if ( !v20[0] )
    {
      v9 = sub_1409F6ABC(a2, a3, a4, v21, 2);
      *a6 = 1;
    }
  }
LABEL_26:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
