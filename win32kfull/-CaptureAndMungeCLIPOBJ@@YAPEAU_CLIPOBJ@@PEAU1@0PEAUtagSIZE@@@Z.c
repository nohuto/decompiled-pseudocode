/*
 * XREFs of ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1C02C97F8
 * Callers:
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C99BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

struct _CLIPOBJ *__fastcall CaptureAndMungeCLIPOBJ(struct _CLIPOBJ *a1, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v3; // r10
  int v4; // ecx
  int v5; // eax
  LONG cx; // eax
  LONG cy; // eax
  _BYTE v9[24]; // [rsp+0h] [rbp-28h]

  v3 = a1;
  if ( a1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v3 = (struct _CLIPOBJ *)MmUserProbeAddress;
    *(_OWORD *)v9 = *(_OWORD *)&v3->iUniq;
    *(_QWORD *)&v9[16] = *(_QWORD *)&v3->rclBounds.bottom;
    if ( a2 )
    {
      if ( v9[20] )
      {
        if ( v9[20] != 1 )
          return 0LL;
        if ( a3 )
        {
          v4 = *(_DWORD *)&v9[4];
          if ( *(int *)&v9[4] < 0 )
            v4 = 0;
          *(_DWORD *)&v9[4] = v4;
          v5 = *(_DWORD *)&v9[8];
          if ( *(int *)&v9[8] < 0 )
            v5 = 0;
          *(_DWORD *)&v9[8] = v5;
          cx = *(_DWORD *)&v9[12];
          if ( a3->cx < *(int *)&v9[12] )
            cx = a3->cx;
          *(_DWORD *)&v9[12] = cx;
          cy = *(_QWORD *)&v3->rclBounds.bottom;
          if ( a3->cy < *(int *)&v9[16] )
            cy = a3->cy;
          *(_DWORD *)&v9[16] = cy;
        }
        a2->rclBounds = *(RECTL *)&v9[4];
      }
      a2->iDComplexity = v9[20];
    }
  }
  return a2;
}
