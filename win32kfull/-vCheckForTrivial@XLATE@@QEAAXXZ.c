/*
 * XREFs of ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02DE9BC
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02DDE94 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DE318 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XLATE::vCheckForTrivial(XLATE *this)
{
  int v1; // r10d
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  int v10; // ebx
  int v11; // r9d
  int *v12; // rdx
  int v13; // edi
  int v14; // esi
  int v15; // r11d
  int v16; // ecx
  int *v17; // rcx
  int v18; // eax

  v1 = *((_DWORD *)this + 1);
  if ( (v1 & 9) == 0 )
  {
    v3 = *((_DWORD *)this + 3);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5);
      if ( !v5 || (v6 = *((_QWORD *)this + 6)) == 0 || *(_DWORD *)(v5 + 28) == *(_DWORD *)(v6 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v4) == v4 )
        {
          if ( ++v4 >= v3 )
            goto LABEL_25;
        }
      }
    }
    else
    {
      v7 = *((_QWORD *)this + 5);
      v8 = *((_QWORD *)this + 6);
      if ( v7 && v8 && !*(_DWORD *)(v8 + 28) )
      {
        v9 = *(_DWORD *)(v7 + 24);
        v10 = 65280;
        v11 = 16711680;
        if ( (v9 & 2) != 0 )
        {
          v12 = *(int **)(v7 + 112);
          v13 = *v12;
          v14 = v12[1];
          v15 = v12[2];
        }
        else
        {
          v14 = 65280;
          if ( (v9 & 4) != 0 )
          {
            v13 = 255;
            v15 = 16711680;
          }
          else
          {
            v13 = 16711680;
            v15 = 255;
          }
        }
        v16 = *(_DWORD *)(v8 + 24);
        if ( (v16 & 2) != 0 )
        {
          v17 = *(int **)(v8 + 112);
          v18 = *v17;
          v10 = v17[1];
          v11 = v17[2];
        }
        else if ( (v16 & 4) != 0 )
        {
          v18 = 255;
        }
        else
        {
          v18 = 16711680;
          v11 = 255;
        }
        if ( v13 == v18 && v14 == v10 && v15 == v11 )
LABEL_25:
          *((_DWORD *)this + 1) = v1 | 1;
      }
    }
  }
}
