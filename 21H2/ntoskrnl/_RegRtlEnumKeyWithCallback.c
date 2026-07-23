/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x1407B1680
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x1403C3B98 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _RegRtlQueryInfoKey @ 0x140615E68 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  int v3; // ebx
  void *v5; // rsi
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned int *v9; // r14
  ULONG v10; // r15d
  int v11; // eax
  int v12; // eax
  PVOID PoolWithTag; // rax
  PVOID v15; // rax
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-49h] BYREF
  char v19; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  v16 = 0;
  HighLimit = 0LL;
  v5 = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, &v16, 0LL, 0LL, 0LL) )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    v7 = v16;
    if ( v16 )
    {
      if ( v16 + 1 < v16 )
      {
        v3 = -1073741675;
        v7 = -1;
      }
      else
      {
        v7 = v16 + 1;
      }
      if ( v3 < 0 )
        return (unsigned int)v3;
      v3 = 0;
    }
    v8 = 2LL * v7;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  if ( (unsigned int)v8 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v9 = (unsigned int *)PoolWithTag;
  }
  else
  {
    v9 = (unsigned int *)&v19;
    LODWORD(v8) = 80;
  }
  v10 = 0;
  while ( 1 )
  {
    v16 = (unsigned int)v8 >> 1;
    v11 = RegRtlEnumKey(KeyHandle, v10, v9, &v16);
    if ( v11 == -2147483622 )
      break;
    if ( v11 == -1073741444 )
    {
      v3 = 0;
      break;
    }
    if ( v11 == -1073741789 )
    {
      v8 = 2LL * v16;
      if ( v8 > 0xFFFFFFFF )
      {
        v3 = -1073741675;
        break;
      }
      v3 = 0;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
      v5 = v15;
      if ( !v15 )
        return (unsigned int)-1073741801;
      v9 = (unsigned int *)v15;
    }
    else
    {
      v3 = 0;
      if ( v11 )
      {
        v3 = v11;
        break;
      }
      *((_WORD *)v9 + ((unsigned __int64)(unsigned int)v8 >> 1) - 1) = 0;
      v12 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v9, a3);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v10 = 0;
        }
        else if ( v12 != 2 )
        {
          if ( v12 == 3 )
            v3 = -1073741248;
          else
            v3 = -1073741595;
          break;
        }
      }
      else
      {
        ++v10;
      }
      if ( v12 == 2 )
        break;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v3;
}
