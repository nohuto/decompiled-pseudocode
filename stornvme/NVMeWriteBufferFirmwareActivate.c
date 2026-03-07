__int64 __fastcall NVMeWriteBufferFirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r14d
  __int64 v10; // rbx
  bool v11; // si
  int v12; // eax
  unsigned int v13; // eax

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v9 = *(unsigned __int8 *)(v6 + 2);
  v10 = SrbExtension;
  v11 = 0;
  if ( (unsigned __int8)v9 <= (unsigned __int8)((*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 260LL) >> 1) & 7) )
  {
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v5);
    if ( IsFirmwareActivateWithoutResetEnabled(a1) )
      v11 = (*(_DWORD *)(a1 + 32) & 0x400) == 0;
    *(_BYTE *)(v10 + 4096) = 16;
    v12 = *(_DWORD *)(v10 + 4136) ^ (*(_DWORD *)(v10 + 4136) ^ v9) & 7;
    if ( v11 )
      v13 = v12 | 0x18;
    else
      v13 = v12 & 0xFFFFFFE7 | 8;
    *(_DWORD *)(v10 + 4136) = v13;
    *(_QWORD *)(v10 + 4224) = NVMeWriteBufferFirmwareActivateCompletion;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v6) = 5;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(v8, v5, v6, v7);
    return (unsigned int)-1056964602;
  }
  return v3;
}
