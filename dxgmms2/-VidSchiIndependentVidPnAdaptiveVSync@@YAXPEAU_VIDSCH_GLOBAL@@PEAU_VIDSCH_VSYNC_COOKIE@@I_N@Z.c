/*
 * XREFs of ?VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N@Z @ 0x1C0035D44
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C000EA94 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall VidSchiIndependentVidPnAdaptiveVSync(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_VSYNC_COOKIE *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // r10
  __int64 v6; // r11
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // eax

  v4 = a3;
  if ( a4 )
  {
    *((_DWORD *)a1 + a3 + 584) = 0;
  }
  else if ( *((_BYTE *)a1 + 45) == 1 && *((_DWORD *)a1 + 601) )
  {
    if ( _InterlockedExchange((volatile __int32 *)a1 + a3 + 568, 0)
      || (unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3)
      || *((_DWORD *)a1 + v4 + 185)
      || *((_DWORD *)a1 + 203)
      || *((_DWORD *)a1 + 5 * v4 + 475) )
    {
      *((_DWORD *)a1 + v4 + 584) = 0;
    }
    else if ( (*(_BYTE *)(v6 + 124) & 1) == 0 )
    {
      v7 = *((_DWORD *)a1 + v4 + 584);
      if ( v7 != -1 )
      {
        v8 = v7 + 1;
        *((_DWORD *)a1 + v4 + 584) = v8;
        v9 = *((_DWORD *)a1 + 601);
        if ( v8 == v9 )
        {
          *((_DWORD *)a1 + 567) |= 1 << v4;
          if ( *((_DWORD *)a1 + 566) != 1 )
          {
            ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2232), CriticalWorkQueue);
            *((_DWORD *)a1 + 566) = 1;
          }
        }
        else if ( v8 > v9 )
        {
          *((_DWORD *)a1 + v4 + 584) = v9 + 1;
        }
      }
    }
  }
}
