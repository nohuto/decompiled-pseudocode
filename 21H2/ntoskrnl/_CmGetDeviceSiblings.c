/*
 * XREFs of _CmGetDeviceSiblings @ 0x14097A964
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     _CmGetDeviceParent @ 0x14060F984 (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x140611CBC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceChildren @ 0x140979F7C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzDeleteString @ 0x14097C550 (_PnpMultiSzDeleteString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r15
  unsigned int v8; // esi
  int DeviceParent; // ebx
  wchar_t *v10; // rdi
  wchar_t *i; // r8
  wchar_t *PoolWithTag; // rax
  unsigned int Len; // eax
  unsigned int v15[4]; // [rsp+20h] [rbp-1F8h] BYREF
  WCHAR v16[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  if ( !a3 )
    goto LABEL_4;
  if ( !*a4 )
  {
    v5 = 0LL;
LABEL_4:
    v8 = 0;
    goto LABEL_6;
  }
  *a3 = 0;
  v8 = *a4;
LABEL_6:
  *a4 = 0;
  v15[0] = 200;
  DeviceParent = CmGetDeviceParent(a1, a2, v16, v15);
  if ( DeviceParent >= 0 )
  {
    v10 = 0LL;
    v15[0] = 0;
    for ( i = 0LL; ; i = PoolWithTag )
    {
      DeviceParent = CmGetDeviceChildren(a1, v16, i, v15);
      if ( DeviceParent != -1073741789 )
        break;
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v15[0], 0x52504E50u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        DeviceParent = -1073741801;
        break;
      }
    }
    if ( DeviceParent >= 0 )
    {
      if ( !v10 )
        return (unsigned int)-1073741275;
      if ( (unsigned __int8)PnpMultiSzDeleteString(v10, a2) )
      {
        Len = PnpMultiSzGetLen(v10);
        if ( Len > 1 )
        {
          *a4 = Len;
          if ( v8 >= Len )
            memmove(v5, v10, 2LL * Len);
          else
            DeviceParent = -1073741789;
        }
        else
        {
          DeviceParent = -1073741275;
        }
      }
      else
      {
        DeviceParent = -1073741595;
      }
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)DeviceParent;
}
