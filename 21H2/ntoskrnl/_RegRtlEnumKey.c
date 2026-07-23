/*
 * XREFs of _RegRtlEnumKey @ 0x140766D3C
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14072DAB4 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     _RegRtlDeleteTreeInternal @ 0x140766B34 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1407B1680 (_RegRtlEnumKeyWithCallback.c)
 *     _PnpCtxRegEnumKey @ 0x1407C4164 (_PnpCtxRegEnumKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1408B04CC (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B6278 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x1408B6818 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140976020 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKey(HANDLE KeyHandle, ULONG a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v7; // rbp
  unsigned __int64 v8; // rdi
  ULONG Length; // r15d
  unsigned int *p_KeyInformation; // rsi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int *PoolWithTag; // rax
  NTSTATUS v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-B8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-B4h]
  char KeyInformation; // [rsp+38h] [rbp-B0h] BYREF

  Index = a2;
  ResultLength = 0;
  v7 = 0LL;
  if ( a3 )
  {
    v8 = 2LL * *a4;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  else
  {
    LODWORD(v8) = 0;
  }
  Length = 96;
  if ( (unsigned int)v8 > 0x60 )
  {
    p_KeyInformation = a3;
    Length = v8;
  }
  else
  {
    p_KeyInformation = (unsigned int *)&KeyInformation;
  }
  v11 = ZwEnumerateKey(KeyHandle, a2, KeyBasicInformation, p_KeyInformation, Length, &ResultLength);
  v12 = v11;
  if ( !v11 || v11 == -2147483643 )
  {
    v13 = p_KeyInformation + 3;
    v14 = p_KeyInformation[3];
    v15 = v14 + 2;
    if ( v14 + 2 >= v14 )
    {
      *a4 = v15 >> 1;
      if ( v15 > (unsigned int)v8 )
        return (unsigned int)-1073741789;
      if ( ResultLength <= Length )
        goto LABEL_9;
      if ( (unsigned int)v8 < 0xFFFFFFF0 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v8 + 16), 0x4C474552u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        p_KeyInformation = PoolWithTag;
        v18 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, v8 + 16, &ResultLength);
        v12 = v18;
        if ( v18 && v18 != -2147483643 )
          goto LABEL_10;
        v13 = v7 + 3;
        v19 = v7[3];
        v20 = v19 + 2;
        if ( v19 + 2 < v19 )
        {
          v12 = -1073741675;
        }
        else
        {
          *a4 = v20 >> 1;
          if ( v20 <= (unsigned int)v8 )
          {
LABEL_9:
            memmove(a3, p_KeyInformation + 4, *v13);
            v12 = 0;
            *((_WORD *)a3 + *a4 - 1) = 0;
            goto LABEL_10;
          }
          v12 = -1073741789;
        }
LABEL_10:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        return v12;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v12;
}
