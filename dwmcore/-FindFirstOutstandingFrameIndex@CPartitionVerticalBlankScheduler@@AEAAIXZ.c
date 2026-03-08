/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18004E168
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18004DFB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800AEE6C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  char i; // al
  unsigned int v5; // eax
  unsigned __int64 v6; // r9
  unsigned int v7; // ecx
  int v9; // r10d
  unsigned __int64 v10; // r9
  unsigned int v11; // eax

  v2 = *((_DWORD *)this + 1051);
  v3 = -1;
  if ( v2 == -1 )
  {
    v7 = *((_DWORD *)this + 1050);
    if ( v7 != -1 )
    {
      v9 = ((_BYTE)v7 + 1) & 0xF;
      while ( v7 != v9 )
      {
        v10 = (unsigned __int64)v7 << 8;
        if ( *((_BYTE *)this + v10 + 266) )
          break;
        v11 = v7;
        if ( !*((_BYTE *)this + v10 + 265) )
          v11 = v3;
        v7 = ((_BYTE)v7 - 1) & 0xF;
        v3 = v11;
      }
    }
  }
  else
  {
    for ( i = v2 + 1; ; i = v5 + 1 )
    {
      v5 = i & 0xF;
      if ( v5 == v2 || v3 != -1 )
        break;
      v6 = (unsigned __int64)v5 << 8;
      if ( *((_BYTE *)this + v6 + 265) )
      {
        if ( !*((_BYTE *)this + v6 + 266) )
          v3 = v5;
      }
    }
  }
  return v3;
}
