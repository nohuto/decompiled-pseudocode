/*
 * XREFs of ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0032AD0
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vTighten(RGNOBJ *this)
{
  __int64 v1; // r9
  int v2; // r10d
  int v3; // r8d
  int *v4; // r11
  signed int v5; // ebx
  int v6; // edi
  int v7; // eax
  __int128 v8; // [rsp+0h] [rbp-18h]

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 96) = 0;
    *(_DWORD *)(*(_QWORD *)this + 108LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 104LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 100LL) = 0;
  }
  else
  {
    v3 = 0x7FFFFFFF;
    v4 = *(int **)(v1 + 88);
    v5 = 0x80000000;
    LODWORD(v8) = 0x7FFFFFFF;
    DWORD1(v8) = v4[2];
    if ( !v2 )
      goto LABEL_12;
    do
    {
      v6 = *v4;
      --v2;
      v7 = v3;
      if ( *v4 )
      {
        v3 = v4[3];
        if ( v7 <= v3 )
          v3 = v7;
        LODWORD(v8) = v3;
        if ( v5 < v4[v6 - 1 + 3] )
        {
          v5 = v4[v6 - 1 + 3];
          LODWORD(v8) = v3;
        }
      }
      v4 = (int *)((char *)v4 + (unsigned int)(4 * v6 + 16));
    }
    while ( v2 );
    DWORD2(v8) = v5;
    if ( v3 >= v5 )
    {
LABEL_12:
      LODWORD(v8) = 0;
      DWORD2(v8) = 0;
    }
    HIDWORD(v8) = *(_DWORD *)(*(_QWORD *)(v1 + 40)
                            - 4LL
                            - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16)
                            + 8);
    *(_OWORD *)(v1 + 96) = v8;
  }
}
