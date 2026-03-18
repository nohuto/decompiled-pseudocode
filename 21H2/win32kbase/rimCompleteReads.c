/*
 * XREFs of rimCompleteReads @ 0x1C0044C40
 * Callers:
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     DeviceTypeToRimInputType @ 0x1C0044E70 (DeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00483D0 (RimInputTypeToDeviceType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00483F8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 */

__int64 __fastcall rimCompleteReads(struct RawInputManagerObject *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  unsigned int v4; // r15d
  __int64 i; // rbx
  int v7; // eax
  __int64 j; // rbx
  int v9; // eax

  if ( *((_DWORD *)a1 + 21) )
  {
    rimFindPausedDeviceAndCompleteRead(a1);
    v2 = 0;
    while ( 1 )
    {
      v4 = *((_DWORD *)a1 + 21) & DeviceTypeToRimInputType(v2);
      if ( v4 )
        break;
LABEL_4:
      if ( ++v2 > 2 )
        return 0LL;
    }
    for ( i = *((_QWORD *)a1 + 53); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      if ( v2 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL, v3) & *((_DWORD *)a1 + 21)) == 0 )
          continue;
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          rimProcessAnyQueuedCompleteFrames(a1);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v4) )
      {
        continue;
      }
      v7 = *(_DWORD *)(i + 184);
      if ( (v7 & 0x400) == 0 && (v7 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)i, 0);
    }
  }
  for ( j = *((_QWORD *)a1 + 53); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
    {
      v9 = *(_DWORD *)(j + 184);
      if ( (v9 & 0x400) == 0 && (v9 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)j, 0);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return 0LL;
}
