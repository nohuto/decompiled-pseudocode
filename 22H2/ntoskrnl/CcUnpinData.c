/*
 * XREFs of CcUnpinData @ 0x140635390
 * Callers:
 *     CcUnpinData @ 0x140635390 (CcUnpinData.c)
 *     CcPinRead @ 0x14063C8C0 (CcPinRead.c)
 *     CcPinMappedData @ 0x14063CAA0 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140678510 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x1408678D0 (CcUnpinDataForThread.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcUnpinData @ 0x140635390 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  _DWORD *v1; // r9
  PVOID v2; // rbx
  char v3; // dl
  void *v4; // rax
  char *i; // rdi

  v2 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v3 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((char *)Bcb, v3, 0, v1);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  v4 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v4; i += 8 )
  {
    CcUnpinData(v4);
    v4 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v2, 0);
}
