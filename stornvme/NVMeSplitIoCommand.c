/*
 * XREFs of NVMeSplitIoCommand @ 0x1C0001CA0
 * Callers:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x1C00244D0 (ProcessCommandNvmePacket.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSplitIoCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // r9
  __int64 v4; // r10
  unsigned __int8 v5; // cl
  __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned int v8; // eax
  int v9; // r8d
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v13; // [rsp+40h] [rbp+18h]

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(SrbExtension + 4253) & 2) != 0 )
  {
    if ( *(_BYTE *)(v2 + 2) == 40 )
      v5 = *(_BYTE *)(*(unsigned int *)(v2 + 52) + v2 + 10);
    else
      v5 = *(_BYTE *)(v2 + 7);
    v6 = *(_QWORD *)(v4 + 8LL * v5 + 1952);
    v13 = *(_QWORD *)(SrbExtension + 4136);
    v7 = *(_DWORD *)(v6 + 52);
    v8 = *(unsigned __int16 *)(v6 + 92);
    if ( !(_WORD)v8 )
      v8 = *(_DWORD *)(v4 + 60) / v7;
    ++*(_DWORD *)(v6 + 36);
    v9 = v8 - v13 % v8;
    v10 = (*(_DWORD *)(SrbExtension + 4120) & 0xFFF) + 4095LL;
    *(_WORD *)(SrbExtension + 4144) = v9 - 1;
    v11 = ((unsigned __int64)(v7 * v9) + v10) >> 12;
    if ( (_DWORD)v11 == 1 )
    {
      *(_QWORD *)(SrbExtension + 4128) = 0LL;
    }
    else if ( (_DWORD)v11 == 2 )
    {
      *(_QWORD *)(SrbExtension + 4128) = *(_QWORD *)SrbExtension;
    }
    *(_QWORD *)(SrbExtension + 4224) = NVMeSplitIoCommandCompletion;
  }
  return 0LL;
}
