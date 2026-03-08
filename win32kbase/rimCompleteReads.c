/*
 * XREFs of rimCompleteReads @ 0x1C0039B74
 * Callers:
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003AE4 (rimProcessDeviceBufferAndStartRead.c)
 *     DeviceTypeToRimInputType @ 0x1C0039CC0 (DeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C0039D00 (RimInputTypeToDeviceType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0039E14 (rimFindPausedDeviceAndCompleteRead.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01D2AB4 (rimProcessAnyQueuedCompleteFrames.c)
 */

__int64 __fastcall rimCompleteReads(struct RawInputManagerObject *a1)
{
  unsigned int v2; // esi
  unsigned int v3; // r15d
  __int64 i; // rbx
  int v6; // eax
  __int64 j; // rbx
  int v8; // eax

  if ( *((_DWORD *)a1 + 21) )
  {
    rimFindPausedDeviceAndCompleteRead(a1);
    v2 = 0;
    while ( 1 )
    {
      v3 = *((_DWORD *)a1 + 21) & DeviceTypeToRimInputType(v2);
      if ( v3 )
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
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL) & *((_DWORD *)a1 + 21)) == 0 )
          continue;
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          rimProcessAnyQueuedCompleteFrames(a1);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v3) )
      {
        continue;
      }
      v6 = *(_DWORD *)(i + 184);
      if ( (v6 & 0x400) == 0 && (v6 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)i, 0);
    }
  }
  for ( j = *((_QWORD *)a1 + 53); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
    {
      v8 = *(_DWORD *)(j + 184);
      if ( (v8 & 0x400) == 0 && (v8 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)j, 0);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return 0LL;
}
