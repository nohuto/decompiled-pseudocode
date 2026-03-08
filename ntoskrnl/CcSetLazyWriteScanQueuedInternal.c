/*
 * XREFs of CcSetLazyWriteScanQueuedInternal @ 0x1402EEE90
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403BA4E0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CcSetLazyWriteScanQueuedInternal(_BYTE *a1, int a2, char a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( !v5 )
      {
LABEL_4:
        a1[68] = a3;
        return;
      }
      v6 = v5 - 4;
      if ( v6 )
      {
        v7 = v6 - 8;
        if ( v7 )
        {
          if ( v7 == 16 )
            goto LABEL_4;
        }
        else
        {
          a1[71] = a3;
        }
      }
      else
      {
        a1[67] = a3;
      }
    }
    else
    {
      a1[70] = a3;
    }
  }
  else
  {
    a1[69] = a3;
  }
}
