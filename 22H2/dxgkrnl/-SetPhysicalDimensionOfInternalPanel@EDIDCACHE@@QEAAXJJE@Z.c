/*
 * XREFs of ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C017D970
 * Callers:
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C017D8D4 (--0EDIDCACHE@@QEAA@XZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01817E4 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FB38C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EDIDCACHE::SetPhysicalDimensionOfInternalPanel(EDIDCACHE *this, int a2, int a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _DWORD *v6; // rdx
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax

  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 624) )
  {
    v6 = (_DWORD *)((char *)this + 616);
    if ( a3 * (int)v5 > *((_DWORD *)this + 155) * *((_DWORD *)this + 154) )
    {
      *((_BYTE *)this + 624) = a4;
      *((_DWORD *)this + 155) = a3;
      *v6 = v5;
      updated = ZwUpdateWnfStateData(&WNF_DX_INTERNAL_PANEL_DIMENSIONS, v6, 8LL, 0LL, 0LL, 0, 0);
      v10 = updated;
      if ( updated < 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
        v12[3] = v10;
        v12[4] = v5;
        v12[5] = v4;
        WdLogEvent5_WdError(v12);
      }
      else
      {
        v11 = WdLogNewEntry5_WdTrace(v9, v8);
        *(_QWORD *)(v11 + 24) = v5;
        *(_QWORD *)(v11 + 32) = v4;
      }
    }
  }
}
