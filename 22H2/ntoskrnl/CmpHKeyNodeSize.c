/*
 * XREFs of CmpHKeyNodeSize @ 0x1404EC6F4
 * Callers:
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     CmpNameSize @ 0x1406774AC (CmpNameSize.c)
 */

__int64 CmpHKeyNodeSize()
{
  return (unsigned int)(unsigned __int16)CmpNameSize() + 76;
}
