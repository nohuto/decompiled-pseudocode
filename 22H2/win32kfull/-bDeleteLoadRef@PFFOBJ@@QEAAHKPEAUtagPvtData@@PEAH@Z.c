/*
 * XREFs of ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C00A2274
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00A20A8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vKill@PFFOBJ@@QEAAXXZ @ 0x1C00A5348 (-vKill@PFFOBJ@@QEAAXXZ.c)
 *     ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02BB290 (-bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z.c)
 */

__int64 __fastcall PFFOBJ::bDeleteLoadRef(PFFOBJ *this, int a2, struct tagPvtData *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  bool v13; // zf
  __int64 v14; // r9
  int v15; // eax

  v4 = 0;
  *a4 = 0;
  v6 = *(_QWORD *)this;
  if ( *(struct PFT **const *)(v6 + 128) != gpPFTPrivate )
  {
    if ( a2 )
    {
      v15 = *(_DWORD *)(v6 + 60);
      if ( v15 )
        *(_DWORD *)(v6 + 60) = v15 - 1;
    }
    else
    {
      v7 = *(_DWORD *)(v6 + 56);
      if ( v7 )
        *(_DWORD *)(v6 + 56) = v7 - 1;
    }
    if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
    {
      PFFOBJ::vKill(this);
      return 1;
    }
    return v4;
  }
  if ( a3 )
  {
    if ( a2 == 128 )
    {
      *(_QWORD *)a3 = 0LL;
LABEL_21:
      if ( !*(_QWORD *)a3 )
        PFFOBJ::bRemovePvtData(this, a3);
      v12 = *(_QWORD *)(*(_QWORD *)this + 144LL);
      v13 = v12 == 0;
      if ( !v12 )
      {
        PFFOBJ::vKill(this);
        v13 = v14 == 0;
      }
      LOBYTE(v4) = v13;
      return v4;
    }
    v9 = *((_DWORD *)a3 + 2);
    v10 = a2 & v9;
    if ( (a2 & 0x6C) != 0 )
    {
      if ( v10 )
      {
        v11 = *((_DWORD *)a3 + 1);
        if ( v11 )
        {
          *((_DWORD *)a3 + 1) = v11 - 1;
          if ( a2 == 64 )
            *((_DWORD *)a3 + 2) = v9 & 0xFFFFFFBF;
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( !v10 )
        goto LABEL_21;
      if ( *(_DWORD *)a3 )
      {
        --*(_DWORD *)a3;
        goto LABEL_21;
      }
    }
    *a4 = 1;
    goto LABEL_21;
  }
  return 0LL;
}
