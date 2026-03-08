/*
 * XREFs of _CmGetDeviceSiblings @ 0x140839C1C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _CmGetDeviceParent @ 0x1406C7D1C (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x1406C8258 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceChildren @ 0x140839DE0 (_CmGetDeviceChildren.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, const WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r12
  unsigned int v8; // r15d
  int DeviceParent; // ebx
  _WORD *v10; // rdi
  __int64 Pool2; // rax
  wchar_t *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int Len; // eax
  wchar_t *v17; // rbp
  unsigned int v18; // eax
  unsigned int v19; // r13d
  void *v20; // rax
  void *v21; // r15
  unsigned int v22; // [rsp+20h] [rbp-1F8h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-1F0h]
  wchar_t v24[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v8 = *a4;
  *a4 = 0;
  v23 = v8;
  v22 = 200;
  DeviceParent = CmGetDeviceParent(a1, a2, v24, &v22);
  if ( DeviceParent >= 0 )
  {
    v22 = 0;
    v10 = 0LL;
    DeviceParent = CmGetDeviceChildren(a1, v24, 0LL, &v22);
    if ( !DeviceParent )
      return (unsigned int)-1073741275;
    while ( DeviceParent == -1073741789 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      Pool2 = ExAllocatePool2(256LL, 2LL * v22, 1380994640LL);
      v10 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      DeviceParent = CmGetDeviceChildren(a1, v24, Pool2, &v22);
      if ( !DeviceParent )
        goto LABEL_10;
    }
    if ( DeviceParent < 0 )
    {
      if ( !v10 )
        return (unsigned int)DeviceParent;
      goto LABEL_20;
    }
    if ( !v10 )
      return (unsigned int)-1073741275;
LABEL_10:
    if ( a2 )
    {
      v12 = v10;
      if ( !*v10 )
        goto LABEL_16;
      while ( 1 )
      {
        v13 = wcsicmp(v12, a2);
        v14 = -1LL;
        do
          ++v14;
        while ( v12[v14] );
        if ( !v13 )
          break;
        v12 += v14 + 1;
        if ( !*v12 )
          goto LABEL_16;
      }
      v17 = &v12[v14];
      if ( !v17[1] )
      {
        *(_DWORD *)v12 = 0;
        goto LABEL_16;
      }
      v18 = 2 * PnpMultiSzGetLen(v17 + 1);
      if ( v18 )
      {
        v19 = v18;
        v20 = (void *)ExAllocatePool2(256LL, v18, 1380994640LL);
        v21 = v20;
        if ( v20 )
        {
          memmove(v20, v17 + 1, v19);
          memmove(v12, v21, v19);
          ExFreePoolWithTag(v21, 0);
          v8 = v23;
LABEL_16:
          Len = PnpMultiSzGetLen(v10);
          if ( Len <= 1 )
          {
            DeviceParent = -1073741275;
          }
          else
          {
            *a4 = Len;
            if ( v8 >= Len )
              memmove(v5, v10, 2LL * Len);
            else
              DeviceParent = -1073741789;
          }
          goto LABEL_20;
        }
      }
    }
    DeviceParent = -1073741595;
LABEL_20:
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)DeviceParent;
}
