_BYTE *__fastcall NVMeWriteBufferFirmwareActivateCompletionAfterReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx

  SrbExtension = GetSrbExtension(a3);
  *(_DWORD *)(v4 + 32) &= ~0x800u;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  *(_BYTE *)(v5 + 3) = 1;
  return NVMeRequestComplete(v4, v6);
}
