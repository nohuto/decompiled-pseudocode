/*
 * XREFs of IcAddGicInstance @ 0x1C009EAFC
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00ABA48 (AcpiIrqLibConfigureLibrary.c)
 *     IrqLibpParseMadt @ 0x1C00ABC98 (IrqLibpParseMadt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcAddGicInstance(int a1)
{
  __int64 Pool2; // rax
  __int64 v4; // rcx

  Pool2 = ExAllocatePool2(256LL, 32032LL, 1232102209LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 16) = a1;
  *(_DWORD *)(Pool2 + 20) = 159;
  v4 = IcListHead;
  if ( *(__int64 **)(IcListHead + 8) != &IcListHead )
    __fastfail(3u);
  *(_QWORD *)Pool2 = IcListHead;
  *(_QWORD *)(Pool2 + 8) = &IcListHead;
  *(_QWORD *)(v4 + 8) = Pool2;
  IcListHead = Pool2;
  return 0LL;
}
