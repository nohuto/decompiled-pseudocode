/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x14081354C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
