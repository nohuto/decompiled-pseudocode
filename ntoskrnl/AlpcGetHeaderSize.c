/*
 * XREFs of AlpcGetHeaderSize @ 0x1402BC080
 * Callers:
 *     AlpcGetMessageAttribute @ 0x1402BBFE0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1402BC020 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcGetHeaderSize(int a1)
{
  int v2; // eax
  bool v3; // cf
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  __int64 result; // rax

  v2 = ((a1 >> 31) & 0x18) + 40;
  if ( (a1 & 0x40000000) == 0 )
    v2 = ((a1 >> 31) & 0x18) + 8;
  v3 = (a1 & 0x20000000) != 0;
  v4 = v2 + 32;
  if ( !v3 )
    v4 = v2;
  v5 = v4 + 24;
  if ( (a1 & 0x10000000) == 0 )
    v5 = v4;
  v6 = v5 + 24;
  if ( (a1 & 0x8000000) == 0 )
    v6 = v5;
  v7 = v6 + 8;
  if ( (a1 & 0x4000000) == 0 )
    v7 = v6;
  result = v7 + 8;
  if ( (a1 & 0x2000000) == 0 )
    return v7;
  return result;
}
