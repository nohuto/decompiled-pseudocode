/*
 * XREFs of HvpGetCellContextInitialize @ 0x140875D48
 * Callers:
 *     CmpValueEnumStackEntryInitialize @ 0x14032CAD4 (CmpValueEnumStackEntryInitialize.c)
 *     CmpDereferenceSecurityNode @ 0x1403EFFFC (CmpDereferenceSecurityNode.c)
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404ED99C (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellContextInitialize(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  *(_DWORD *)a1 = -1;
  return result;
}
