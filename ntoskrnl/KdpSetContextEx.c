/*
 * XREFs of KdpSetContextEx @ 0x140392008
 * Callers:
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x140AAD658 (KdpCopyContext.c)
 *     KdpQuickMoveMemory @ 0x140AAE918 (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x140AAE938 (KdpSanitizeContextFlags.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0;
  v13[0] = 56LL;
  v13[1] = a1;
  v4 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)v4 < 0x800u && KiProcessorBlock[v4] && KdpContextSent )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v6 <= 0x3000
      && (v7 = *(unsigned int *)(a1 + 16), (unsigned int)v7 < (unsigned int)v6)
      && (v8 = *(unsigned int *)(a1 + 20), (_DWORD)v8)
      && v7 + v8 <= v6 )
    {
      KdpQuickMoveMemory((char *)&unk_140D12BA8 + (unsigned int)v7, *(_QWORD *)(a2 + 8), (unsigned int)v8);
      if ( v10 == v9 )
      {
        v11 = *(unsigned __int16 *)(a1 + 6);
        if ( (_WORD)v11 != (unsigned __int16)KeGetPcr()->Prcb.Number )
          a3 = *(_QWORD *)(KiProcessorBlock[v11] + 35264);
        KdpSanitizeContextFlags(&unk_140D12BA8, (unsigned int)v9, &v14);
        KdpCopyContext(a3, v14, &unk_140D12BA8);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v13, 0LL, &KdpContext);
}
