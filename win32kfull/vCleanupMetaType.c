/*
 * XREFs of vCleanupMetaType @ 0x1C00F45A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteServerMetaFile @ 0x1C02D4A5C (GreDeleteServerMetaFile.c)
 */

__int64 __fastcall vCleanupMetaType(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = a1;
  for ( i = 0LL; ; i = v5 )
  {
    result = HmgNextOwned(i, v2, &v6);
    v5 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v6) & 0x1F) == 0x15 )
      GreDeleteServerMetaFile();
    v2 = a1;
  }
  return result;
}
