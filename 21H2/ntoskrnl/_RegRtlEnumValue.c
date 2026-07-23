/*
 * XREFs of _RegRtlEnumValue @ 0x1406108EC
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x140673004 (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        HANDLE KeyHandle,
        ULONG Index,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *a7)
{
  unsigned __int64 v9; // rax
  KEY_VALUE_INFORMATION_CLASS v12; // ebp
  ULONG v13; // ecx
  ULONG Length; // ebx
  _DWORD *PoolWithTag; // rsi
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // rbx
  size_t v19; // r8
  size_t v21; // r8
  __int64 v22; // rbx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-38h] BYREF

  ResultLength[0] = 0;
  v9 = 2LL * (unsigned int)*a4;
  if ( a7 )
  {
    v12 = KeyValueFullInformation;
    if ( v9 <= 0xFFFFFFFF )
    {
      v13 = v9 + 24;
      if ( (int)v9 + 24 >= (unsigned int)v9 )
      {
        Length = v13 + *a7;
        if ( Length >= v13 )
          goto LABEL_5;
      }
    }
    return (unsigned int)-1073741675;
  }
  v12 = KeyValueBasicInformation;
  if ( v9 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  Length = v9 + 16;
  if ( (int)v9 + 16 < (unsigned int)v9 )
    return (unsigned int)-1073741675;
LABEL_5:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
  if ( PoolWithTag )
  {
    v16 = ZwEnumerateValueKey(KeyHandle, Index, v12, PoolWithTag, Length, ResultLength);
    if ( !v16 || v16 == -2147483643 )
    {
      if ( v12 )
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( v16
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)PoolWithTag[4] >> 1) + 1
          || (v17 = PoolWithTag[3], *a7 < v17) )
        {
          v16 = -1073741789;
          *a4 = (PoolWithTag[4] >> 1) + 1;
          *a7 = PoolWithTag[3];
        }
        else
        {
          v18 = PoolWithTag[4] >> 1;
          *a7 = v17;
          v19 = (unsigned int)PoolWithTag[4];
          *a4 = v18;
          memmove(a3, PoolWithTag + 5, v19);
          *((_WORD *)a3 + v18) = 0;
          memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = PoolWithTag[1];
        if ( v16 || (v21 = (unsigned int)PoolWithTag[2], (unsigned int)*a4 < (v21 >> 1) + 1) )
        {
          v16 = -1073741789;
          LODWORD(v22) = (PoolWithTag[2] >> 1) + 1;
        }
        else
        {
          v22 = (unsigned int)v21 >> 1;
          memmove(a3, PoolWithTag + 3, v21);
          *((_WORD *)a3 + v22) = 0;
        }
        *a4 = v22;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v16;
}
