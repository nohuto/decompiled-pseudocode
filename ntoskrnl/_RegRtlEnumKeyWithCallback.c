/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x140824EF8
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140395F5C (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _RegRtlQueryInfoKey @ 0x140868C7C (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  int v3; // r15d
  unsigned int v5; // ebx
  void *v6; // rdi
  unsigned int v8; // eax
  unsigned __int64 v9; // rsi
  char *v10; // r14
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edx
  __int64 Pool2; // rax
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 LowLimit; // [rsp+40h] [rbp-49h] BYREF
  char v21; // [rsp+50h] [rbp-39h] BYREF

  v3 = 0;
  v18 = 0;
  HighLimit = 0LL;
  v5 = 0;
  LowLimit = 0LL;
  v6 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v18, 0, 0LL, 0LL) )
    goto LABEL_8;
  v8 = v18;
  if ( v18 )
  {
    if ( v18 + 1 < v18 )
      return (unsigned int)-1073741675;
    v8 = v18 + 1;
  }
  v9 = 2LL * v8;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v9 > 0x50 )
    goto LABEL_19;
LABEL_8:
  v10 = &v21;
  LODWORD(v9) = 80;
  while ( 1 )
  {
    v18 = (unsigned int)v9 >> 1;
    v11 = RegRtlEnumKey(KeyHandle);
    if ( v11 == -2147483622 || v11 == -1073741444 )
      break;
    if ( v11 == -1073741789 )
    {
      v9 = 2LL * v18;
      if ( v9 > 0xFFFFFFFF )
      {
        v5 = -1073741675;
        break;
      }
      v5 = 0;
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
LABEL_19:
      Pool2 = ExAllocatePool2(256LL, (unsigned int)v9, 1279739218LL);
      v6 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v10 = (char *)Pool2;
    }
    else
    {
      if ( v11 )
      {
        v5 = v11;
        break;
      }
      *(_WORD *)&v10[2 * ((unsigned __int64)(unsigned int)v9 >> 1) - 2] = 0;
      v12 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v10, a3);
      v13 = v12;
      if ( v12 )
      {
        v16 = v12 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              v5 = -1073741248;
            else
              v5 = -1073741595;
            break;
          }
        }
        else
        {
          v3 = 0;
        }
      }
      else
      {
        ++v3;
      }
      if ( v13 == 2 )
        break;
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v5;
}
