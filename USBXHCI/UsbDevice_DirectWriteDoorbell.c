/*
 * XREFs of UsbDevice_DirectWriteDoorbell @ 0x1C00080D0
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A00 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C002272E (McTemplateK0uqq_EtwWriteTransfer.c)
 */

int *__fastcall UsbDevice_DirectWriteDoorbell(__int64 a1, unsigned __int8 a2, int a3)
{
  int v4; // ebx
  int *result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 160) )
  {
    v4 = (a3 << 16) | a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq_EtwWriteTransfer(a1, a2, a3, *(_BYTE *)(a1 + 135), a2, a3);
    result = *(int **)(a1 + 160);
    *result = v4;
    _InterlockedOr(v6, 0);
  }
  return result;
}
