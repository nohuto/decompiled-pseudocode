/*
 * XREFs of _SafeAllocBlob @ 0x14039C924
 * Callers:
 *     RtlpMuiRegCreateLanguages @ 0x1408440DC (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x140844284 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateStringPool @ 0x1408442EC (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SafeAllocBlob(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ecx
  __int64 result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v9 < v7 )
    return 0LL;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return ExAllocatePool2(256LL, v9, 1920232557LL);
  return result;
}
