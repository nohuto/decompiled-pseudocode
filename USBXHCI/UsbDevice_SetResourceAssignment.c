char __fastcall UsbDevice_SetResourceAssignment(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  __int64 v7; // r14
  int v8; // eax

  v3 = a2 + 160;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
  memset((void *)(a2 + 160), 0, 0x60uLL);
  *(_QWORD *)(v3 + 48) = a2;
  *(_QWORD *)(v3 + 40) = UsbDevice_SetResourceAssignmentCompletion;
  *(_DWORD *)(v3 + 36) = *(_DWORD *)(v3 + 36) & 0xFFF803FF | 0x16400;
  *(_BYTE *)(v3 + 39) = *(_BYTE *)(a1 + 135);
  v8 = (*(_DWORD *)(v3 + 36) ^ (*(_DWORD *)(a2 + 144) << 19)) & 0xF80000;
  *(_BYTE *)(v3 + 34) = a3;
  *(_DWORD *)(v3 + 36) ^= v8;
  *(_WORD *)(v3 + 32) = 1;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  return Command_SendCommand(v7, v3);
}
