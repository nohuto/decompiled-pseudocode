/*
 * XREFs of _CmGetDeviceSiblings @ 0x1406D04CC
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     _CmGetDeviceChildren @ 0x1406D068C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzGetLen @ 0x1407889F4 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, const wchar_t *a2, _WORD *a3, unsigned int *a4)
{
  unsigned int v7; // r13d
  int DeviceChildren; // ebx
  _WORD *v9; // rdi
  __int64 Pool2; // rax
  wchar_t *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int Len; // eax
  wchar_t *v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // r12d
  void *v19; // rax
  void *v20; // r14
  unsigned int v21; // [rsp+20h] [rbp-1F8h] BYREF
  void *v22; // [rsp+28h] [rbp-1F0h]
  _BYTE v23[400]; // [rsp+30h] [rbp-1E8h] BYREF

  v22 = a3;
  if ( !a3 )
    goto LABEL_2;
  if ( !*a4 )
  {
    v22 = 0LL;
LABEL_2:
    v7 = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  v7 = *a4;
LABEL_3:
  *a4 = 0;
  v21 = 200;
  DeviceChildren = ((__int64 (__fastcall *)(__int64, const wchar_t *, _BYTE *, unsigned int *))CmGetDeviceParent)(
                     a1,
                     a2,
                     v23,
                     &v21);
  if ( DeviceChildren >= 0 )
  {
    v21 = 0;
    v9 = 0LL;
    DeviceChildren = CmGetDeviceChildren(a1, v23, 0LL, &v21);
    if ( !DeviceChildren )
      return (unsigned int)-1073741275;
    while ( DeviceChildren == -1073741789 )
    {
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      Pool2 = ExAllocatePool2(256LL, 2LL * v21, 1380994640LL);
      v9 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      DeviceChildren = CmGetDeviceChildren(a1, v23, Pool2, &v21);
      if ( !DeviceChildren )
        goto LABEL_10;
    }
    if ( DeviceChildren < 0 )
    {
      if ( !v9 )
        return (unsigned int)DeviceChildren;
      goto LABEL_24;
    }
LABEL_10:
    if ( !v9 )
      return (unsigned int)-1073741275;
    if ( a2 )
    {
      v11 = v9;
      if ( !*v9 )
        goto LABEL_17;
      while ( 1 )
      {
        v12 = wcsicmp(v11, a2);
        v13 = -1LL;
        do
          ++v13;
        while ( v11[v13] );
        if ( !v12 )
          break;
        v11 += v13 + 1;
        if ( !*v11 )
          goto LABEL_17;
      }
      v16 = &v11[v13];
      if ( !v16[1] )
      {
        *(_DWORD *)v11 = 0;
        goto LABEL_17;
      }
      v17 = 2 * PnpMultiSzGetLen(v16 + 1);
      if ( v17 )
      {
        v18 = v17;
        v19 = (void *)ExAllocatePool2(256LL, v17, 1380994640LL);
        v20 = v19;
        if ( v19 )
        {
          memmove(v19, v16 + 1, v18);
          memmove(v11, v20, v18);
          ExFreePoolWithTag(v20, 0);
LABEL_17:
          Len = PnpMultiSzGetLen(v9);
          if ( Len <= 1 )
          {
            DeviceChildren = -1073741275;
          }
          else
          {
            *a4 = Len;
            if ( v7 >= Len )
              memmove(v22, v9, 2LL * Len);
            else
              DeviceChildren = -1073741789;
          }
          goto LABEL_24;
        }
      }
    }
    DeviceChildren = -1073741595;
LABEL_24:
    ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)DeviceChildren;
}
