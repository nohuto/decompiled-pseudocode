/*
 * XREFs of MNEraseBackground @ 0x1C0247D38
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     GreSetBrushOrg @ 0x1C00C1C04 (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C014F5CC (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, LONG a3, LONG a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r8d
  __int64 *v15; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v20);
  v11 = 3;
  v12 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 116);
    if ( (v12 & 8) != 0 )
    {
      v11 = 0;
      LODWORD(v20) = 0;
      v14 = -*(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v13) + 68LL);
    }
    else
    {
      v11 = -3;
      LODWORD(v20) = -3;
      v15 = (__int64 *)MNGetpItemFromIndex(a2, v13);
      v16 = *(_DWORD *)(*v15 + 68);
      v14 = -3 - *(_DWORD *)(GetDPIMetrics(*v15, v17) + 28) - v16;
    }
    HIDWORD(v20) = v14;
    goto LABEL_8;
  }
  if ( (v12 & 8) != 0 )
  {
    v20 = 0x300000003LL;
    v14 = 3;
LABEL_8:
    GreSetBrushOrg(a1, v11, v14, &v20);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_10:
  v18 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v20, SHIDWORD(v20), 0LL);
  return GreSelectBrush(a1, v18);
}
