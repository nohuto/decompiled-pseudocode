/*
 * XREFs of RevalidateDCE @ 0x1C00D5600
 * Callers:
 *     DeleteHrgnClip @ 0x1C00D5220 (DeleteHrgnClip.c)
 *     UpdateRedirectedDCE @ 0x1C00D52E0 (UpdateRedirectedDCE.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C024BF78 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x1C00D5694 (InvalidateDCE.c)
 *     SpbCheckDce @ 0x1C00D5700 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // ecx
  bool v7; // zf
  __int64 v9; // r9
  unsigned __int8 v10; // cl

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v1 >= 0 )
    {
      v1 &= 0x7FFFFFE7u;
      *(_DWORD *)(a1 + 64) = v1;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL) + 8LL) >= 0
        || (v9 = *(_QWORD *)(v3 + 40), (*(_BYTE *)(v9 + 21) & 1) == 0)
        && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 2) != 0
        || (v10 = *(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL), ((v10 ^ *(_BYTE *)(v9 + 31)) & 0x10) != 0) )
      {
        v5 = *(_QWORD *)(v3 + 40);
        v6 = v1;
        if ( (*(_BYTE *)(v5 + 31) & 0x22) == 2 )
        {
          v6 = v1 | 8;
          *(_DWORD *)(a1 + 64) = v1 | 8;
          v5 = *(_QWORD *)(v3 + 40);
        }
        v7 = (*(_BYTE *)(v5 + 31) & 4) == 0;
        v1 = v6;
      }
      else
      {
        v7 = (v10 & 4) == 0;
      }
      if ( !v7 )
        v1 |= 0x10u;
    }
    *(_DWORD *)(a1 + 64) = v1 | 0x2000;
    return UserSetDCVisRgn(a1);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
