/*
 * XREFs of _RegRtlEnumValue @ 0x14086C580
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x140412570 (ZwEnumerateValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  _DWORD *Pool2; // rsi
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
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1279739218LL);
  if ( Pool2 )
  {
    v16 = ZwEnumerateValueKey(KeyHandle, Index, v12, Pool2, Length, ResultLength);
    if ( !v16 || v16 == -2147483643 )
    {
      if ( v12 )
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v16
          || (unsigned int)*a4 < ((unsigned __int64)(unsigned int)Pool2[4] >> 1) + 1
          || (v17 = Pool2[3], *a7 < v17) )
        {
          v16 = -1073741789;
          *a4 = (Pool2[4] >> 1) + 1;
          *a7 = Pool2[3];
        }
        else
        {
          v18 = Pool2[4] >> 1;
          *a7 = v17;
          v19 = (unsigned int)Pool2[4];
          *a4 = v18;
          memmove(a3, Pool2 + 5, v19);
          *((_WORD *)a3 + v18) = 0;
          memmove(a6, (char *)Pool2 + (unsigned int)Pool2[2], (unsigned int)Pool2[3]);
        }
      }
      else
      {
        if ( a5 )
          *a5 = Pool2[1];
        if ( v16 || (v21 = (unsigned int)Pool2[2], (unsigned int)*a4 < (v21 >> 1) + 1) )
        {
          v16 = -1073741789;
          LODWORD(v22) = (Pool2[2] >> 1) + 1;
        }
        else
        {
          v22 = (unsigned int)v21 >> 1;
          memmove(a3, Pool2 + 3, v21);
          *((_WORD *)a3 + v22) = 0;
        }
        *a4 = v22;
      }
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v16;
}
