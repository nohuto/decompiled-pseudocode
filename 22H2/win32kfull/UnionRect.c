/*
 * XREFs of UnionRect @ 0x1C00CF9E4
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C00176A0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00C1074 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     _ScrollDC @ 0x1C022EC60 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(_DWORD *a1, int *a2, int *a3)
{
  int v3; // ebx
  BOOL v5; // ecx
  int *v6; // r11
  int *v7; // r10
  BOOL v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  __int128 v13; // xmm0

  v3 = *a2;
  v5 = *a2 >= a2[2] || a2[1] >= a2[3];
  v6 = a3 + 3;
  v7 = a3 + 1;
  v8 = *a3 >= a3[2] || *v7 >= *v6;
  if ( !v5 )
  {
    if ( !v8 )
    {
      if ( v3 >= *a3 )
        v3 = *a3;
      *a1 = v3;
      v9 = a2[1];
      if ( v9 >= *v7 )
        v9 = *v7;
      a1[1] = v9;
      v10 = a2[2];
      if ( v10 <= a3[2] )
        v10 = a3[2];
      a1[2] = v10;
      v11 = a2[3];
      if ( v11 <= *v6 )
        v11 = *v6;
      a1[3] = v11;
      return 1LL;
    }
    v13 = *(_OWORD *)a2;
LABEL_22:
    *(_OWORD *)a1 = v13;
    return 1LL;
  }
  if ( !v8 )
  {
    v13 = *(_OWORD *)a3;
    goto LABEL_22;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
