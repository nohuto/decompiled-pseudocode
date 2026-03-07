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
