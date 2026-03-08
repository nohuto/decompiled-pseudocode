/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x14023FE5C
 * Callers:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IoSetOplockPrivateFoExt @ 0x14023FA98 (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1403C9528 (IoSetOplockKeyContext.c)
 *     IoSetShadowFileInformation @ 0x140554D70 (IoSetShadowFileInformation.c)
 *     IopSymlinkSetFoExtension @ 0x14087CA70 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140944B5C (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 9 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
