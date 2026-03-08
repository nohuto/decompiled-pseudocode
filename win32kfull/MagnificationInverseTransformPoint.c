/*
 * XREFs of MagnificationInverseTransformPoint @ 0x1C01F7D98
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C00DBA40 (AddMagnificationOutputTransform.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationInverseTransformPoint(__int128 *a1, int *a2)
{
  int v2; // r8d
  int v3; // r10d
  int v4; // r9d
  int v5; // eax
  __int128 v6; // [rsp+0h] [rbp-28h]
  __int128 v7; // [rsp+10h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    v7 = *a1;
    v6 = a1[1];
    if ( v2 )
    {
      v3 = *((_DWORD *)a1 + 11);
      if ( v3 )
      {
        v4 = v2 * (*a2 - (int)v7) / 256 + v6;
        v5 = DWORD1(v6) + v3 * (a2[1] - DWORD1(v7)) / 256;
        if ( v4 >= DWORD2(v6) - 1 )
          v4 = DWORD2(v6) - 1;
        *a2 = v4;
        if ( v5 >= HIDWORD(v6) - 1 )
          v5 = HIDWORD(v6) - 1;
        a2[1] = v5;
      }
    }
  }
}
