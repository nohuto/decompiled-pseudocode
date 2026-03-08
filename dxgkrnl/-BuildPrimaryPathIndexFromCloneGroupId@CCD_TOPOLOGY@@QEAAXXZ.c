/*
 * XREFs of ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01DB8B4
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(CCD_TOPOLOGY *this)
{
  unsigned int i; // r9d
  __int64 v3; // r8
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  unsigned int j; // r8d
  unsigned __int16 v7; // ax
  __int64 v8; // r9
  int v9; // r11d
  unsigned int k; // r9d
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int64 v13; // rdx

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      v4 = *(_WORD *)(v3 + 20);
      v5 = *((_QWORD *)this + 8);
    }
    else
    {
      v5 = 0LL;
      v4 = 0;
    }
    if ( i >= v4 )
      break;
    *(_QWORD *)(296LL * i + v3 + 56) &= ~0x4000000000000uLL;
  }
  for ( j = 0; ; ++j )
  {
    v7 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( j >= v7 )
      break;
    v8 = 296LL * j;
    if ( (*(_QWORD *)(v8 + v5 + 56) & 0x4000000000000LL) == 0 )
    {
      v9 = *(_DWORD *)(v8 + v5 + 240);
      for ( k = j; ; ++k )
      {
        v11 = *((_QWORD *)this + 8);
        if ( v11 )
        {
          v12 = *(_WORD *)(v11 + 20);
          v5 = *((_QWORD *)this + 8);
        }
        else
        {
          v5 = 0LL;
          v12 = 0;
        }
        if ( k >= v12 )
          break;
        v13 = 296LL * k;
        if ( *(_DWORD *)(v13 + v11 + 240) == v9 )
        {
          *(_DWORD *)(v13 + v11 + 324) = j;
          *(_QWORD *)(*((_QWORD *)this + 8) + v13 + 56) |= 0x4000000000000uLL;
        }
      }
    }
  }
}
