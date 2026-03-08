/*
 * XREFs of Isoch_TransferUrb_MarkLatePackets @ 0x1C00453C4
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C0033490 (Controller_GetFrameNumber.c)
 *     Isoch_GetPacketLength @ 0x1C00445B8 (Isoch_GetPacketLength.c)
 */

__int64 __fastcall Isoch_TransferUrb_MarkLatePackets(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned int FrameNumber; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r14d
  __int64 result; // rax
  unsigned int v11; // r12d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  unsigned int i; // edi

  v3 = (unsigned int)(*(_DWORD *)(a2 + 108) + *(_DWORD *)(a2 + 104));
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_DWORD *)(v5 + 128) + (unsigned int)(v3 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356);
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2, 0LL, 0LL);
  v8 = *(_DWORD *)(a1 + 356);
  v9 = FrameNumber;
  result = (*(_DWORD *)(a2 + 96) - (_DWORD)v3 + v8 - 1) / v8;
  v11 = result;
  if ( (_DWORD)result )
  {
    v12 = 0;
    v13 = v6 - v9;
    do
    {
      result = v12 + v6;
      if ( (unsigned int)result > v9 )
      {
        result = v13 + v12;
        if ( (unsigned int)result < 0x7FFFFFFF )
          break;
      }
      for ( i = 0; i < v8; v8 = *(_DWORD *)(a1 + 356) )
      {
        *(_DWORD *)(v5 + 12 * v3 + 148) = -1073414144;
        result = Isoch_GetPacketLength(a2, v3);
        *(_DWORD *)(a2 + 92) += result;
        v3 = (unsigned int)(v3 + 1);
        ++*(_DWORD *)(a2 + 108);
        ++i;
      }
      ++v12;
    }
    while ( v12 < v11 );
  }
  return result;
}
