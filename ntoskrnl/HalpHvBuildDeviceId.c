/*
 * XREFs of HalpHvBuildDeviceId @ 0x140A92814
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpHvMapDeviceMsiRange @ 0x140A928BC (HalpHvMapDeviceMsiRange.c)
 *     HalpHvUnmapDeviceMsiRange @ 0x140A929EC (HalpHvUnmapDeviceMsiRange.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpHvBuildDeviceId(__int64 a1, int *a2, char a3, __int64 a4)
{
  int v4; // r10d
  __int16 v5; // ax
  int v6; // r10d
  int v7; // r10d
  char v8; // cl
  char v9; // cl
  __int16 v10; // ax

  v4 = *a2;
  LOBYTE(v5) = 0;
  *(_QWORD *)a4 = 0x4000000000000000LL;
  if ( !v4 )
    goto LABEL_5;
  v6 = v4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
LABEL_5:
        *(_WORD *)(a4 + 2) = *(_WORD *)(a1 + 2);
        *(_BYTE *)(a4 + 1) = *(_BYTE *)(a1 + 1);
        LOBYTE(v5) = *(_BYTE *)a1;
        *(_BYTE *)a4 = *(_BYTE *)a1;
      }
    }
    else
    {
      v8 = *((_BYTE *)a2 + 10);
      *(_WORD *)(a4 + 2) = *((_WORD *)a2 + 2);
      *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
      LOBYTE(v5) = 8 * *((_BYTE *)a2 + 9);
      *(_BYTE *)a4 = v5 | v8 & 7;
    }
  }
  else
  {
    v9 = *((_BYTE *)a2 + 10);
    *(_WORD *)(a4 + 2) = *((_WORD *)a2 + 2);
    *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
    v10 = *(_WORD *)(a4 + 6);
    *(_BYTE *)a4 = (8 * *((_BYTE *)a2 + 9)) | v9 & 7;
    v5 = v10 & 0xFFFC;
    *(_WORD *)(a4 + 6) = v5 | a3 & 3;
  }
  return v5;
}
