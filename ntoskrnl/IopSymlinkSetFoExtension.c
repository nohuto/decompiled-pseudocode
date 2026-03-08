/*
 * XREFs of IopSymlinkSetFoExtension @ 0x14087CA70
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSymlinkSetFoExtension(__int64 a1, signed __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 5, &v4);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v4);
    if ( (int)result < 0 )
      return result;
  }
  return IopSetTypeSpecificFoExtension(v4, 5u, a2);
}
