/*
 * XREFs of ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C00F0C48
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C0309050 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdUMBuffer::AlignSizeTo(unsigned int a1, __int64 a2, unsigned int *a3)
{
  if ( a1 + 4095 < a1 )
  {
    *a3 = -1;
    return 0;
  }
  else
  {
    *a3 = (a1 + 4095) & 0xFFFFF000;
    return 1;
  }
}
