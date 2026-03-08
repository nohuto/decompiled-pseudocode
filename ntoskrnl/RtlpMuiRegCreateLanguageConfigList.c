/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x140844284
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x140843624 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x14084413C (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeAllocBlob @ 0x14039C924 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v1 = 4;
  if ( a1 >= 1 )
    v1 = a1;
  result = SafeAllocBlob(0x10u, v1, 0xCu, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_QWORD *)(result + 8) = result + 16;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
  }
  return result;
}
