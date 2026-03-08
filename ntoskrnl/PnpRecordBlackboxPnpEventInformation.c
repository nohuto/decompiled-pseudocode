/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x140862A50
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PiGetTargetDeviceNode @ 0x140862B9C (PiGetTargetDeviceNode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, __int64 a3, char a4)
{
  int v5; // r14d
  const void **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  __int64 TargetDeviceNode; // r15
  unsigned int v11; // ebp
  int v12; // eax
  _QWORD *Pool2; // rdi
  __int128 v14; // xmm0
  int v15; // ecx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+4Ch] [rbp-3Ch]

  v5 = 0;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  TargetDeviceNode = PiGetTargetDeviceNode(a1);
  v11 = *(unsigned __int16 *)(TargetDeviceNode + 40) + 50;
  if ( a3 )
  {
    v6 = (const void **)(a3 + 8);
    if ( !v9 && a3 != -8 )
    {
      v12 = *(unsigned __int16 *)v6;
      if ( (_WORD)v12 )
      {
        if ( *(_QWORD *)(a3 + 16) != v8 )
          v5 = v12 + 2;
      }
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v5 + v11, 1265659472LL);
  if ( Pool2 )
  {
    InputBuffer[2] = 0LL;
    v18 = 0;
    v14 = *(_OWORD *)(a1 + 88);
    Pool2[2] = v7;
    *(_OWORD *)Pool2 = v14;
    v15 = *(_DWORD *)(a1 + 16);
    *((_DWORD *)Pool2 + 6) = a2;
    *((_DWORD *)Pool2 + 8) = v15;
    *((_BYTE *)Pool2 + 28) = a4;
    memmove((char *)Pool2 + 44, *(const void **)(TargetDeviceNode + 48), *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)Pool2 + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      *((_DWORD *)Pool2 + 9) = *(_DWORD *)a3;
      *((_DWORD *)Pool2 + 10) = v11;
      memmove((char *)Pool2 + v11, v6[1], *(unsigned __int16 *)v6);
      *(_WORD *)((char *)Pool2 + 2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1) + v11) = 0;
    }
    v17 = 2;
    InputBuffer[0] = Pool2;
    InputBuffer[1] = v5 + v11;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(Pool2, 0x4B706E50u);
  }
}
