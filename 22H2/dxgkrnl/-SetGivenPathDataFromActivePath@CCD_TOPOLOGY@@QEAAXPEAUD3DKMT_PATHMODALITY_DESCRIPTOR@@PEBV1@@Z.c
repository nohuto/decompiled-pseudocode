/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02EBAE0
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0144C54 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EAEDC (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx

  v3 = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a3 + 8);
  if ( *(_WORD *)(v8 + 20) )
  {
    while ( 1 )
    {
      v9 = 272LL * v3;
      if ( *((_DWORD *)a2 + 4) == *(_DWORD *)(v9 + v8 + 64)
        && *((_DWORD *)a2 + 5) == *(_DWORD *)(v9 + v8 + 68)
        && *((_DWORD *)a2 + 6) == *(_DWORD *)(v9 + v8 + 72)
        && *((_DWORD *)a2 + 7) == *(_DWORD *)(v9 + v8 + 76) )
      {
        break;
      }
      if ( ++v3 >= *(unsigned __int16 *)(v8 + 20) )
        return;
    }
    v10 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 & 2) == 0
       || *((_DWORD *)a2 + 13) == *(_DWORD *)(v9 + v8 + 100) && *((_DWORD *)a2 + 14) == *(_DWORD *)(v9 + v8 + 104))
      && ((*(_BYTE *)(v9 + v8 + 48) & 4) == 0 || *(_DWORD *)(v9 + v8 + 128) == 1) )
    {
      v11 = *(unsigned int *)(v9 + v8 + 144);
      if ( (unsigned int)v11 <= *(_DWORD *)(v9 + v8 + 92) )
      {
        v12 = *(_DWORD *)(v9 + v8 + 148);
        if ( v12 <= *(_DWORD *)(v9 + v8 + 96) && *(_DWORD *)(v9 + v8 + 180) == 1 )
        {
          if ( ((*((_DWORD *)a2 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)v11 < *((_DWORD *)a2 + 38) )
              return;
            v13 = v12 < *((_DWORD *)a2 + 39);
          }
          else
          {
            if ( (unsigned int)v11 < *((_DWORD *)a2 + 39) )
              return;
            v13 = v12 < *((_DWORD *)a2 + 38);
          }
          if ( !v13 )
          {
            if ( (v10 & 0x100) != 0 )
            {
              v14 = WdLogNewEntry5_WdAssertion(v10, v11);
              *(_QWORD *)(v14 + 24) = 1108LL;
              WdLogEvent5_WdAssertion(v14);
              v10 = *(_QWORD *)a2;
            }
            if ( (v10 & 1) != 0 )
            {
              v15 = WdLogNewEntry5_WdAssertion(v10, v11);
              *(_QWORD *)(v15 + 24) = 1109LL;
              WdLogEvent5_WdAssertion(v15);
            }
            v16 = *((_QWORD *)a2 + 1);
            if ( (v16 & 0x100) != 0 )
            {
              v17 = WdLogNewEntry5_WdAssertion(v16, v11);
              *(_QWORD *)(v17 + 24) = 1110LL;
              WdLogEvent5_WdAssertion(v17);
              v16 = *((_QWORD *)a2 + 1);
            }
            if ( (v16 & 1) != 0 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v16, v11);
              *(_QWORD *)(v18 + 24) = 1111LL;
              WdLogEvent5_WdAssertion(v18);
              v16 = *((_QWORD *)a2 + 1);
            }
            *((_OWORD *)a2 + 6) = *(_OWORD *)(v9 + v8 + 144);
            *((_OWORD *)a2 + 7) = *(_OWORD *)(v9 + v8 + 160);
            *((_DWORD *)a2 + 11) = *(_DWORD *)(v9 + v8 + 92);
            *((_DWORD *)a2 + 12) = *(_DWORD *)(v9 + v8 + 96);
            *((_QWORD *)a2 + 1) = v16 | 0x101;
            v19 = *(_QWORD *)a2 | 0x10000000000101LL;
            *(_QWORD *)a2 = v19;
            *(_QWORD *)a2 = v19 | *(_DWORD *)(v9 + v8 + 48) & 0x400;
          }
        }
      }
    }
  }
}
