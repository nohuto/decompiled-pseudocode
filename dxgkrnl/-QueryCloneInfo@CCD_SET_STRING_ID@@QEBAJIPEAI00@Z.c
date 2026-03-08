/*
 * XREFs of ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C017CA1C
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C017C6CC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01BFA3C (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_SET_STRING_ID::QueryCloneInfo(
        CCD_SET_STRING_ID *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v6; // rsi
  __int64 v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v14; // rdx

  v6 = a2;
  if ( a2 >= *((unsigned __int16 *)this + 16) || !a3 )
    WdLogSingleEntry0(1LL);
  if ( (unsigned int)v6 >= *((unsigned __int16 *)this + 16) || !a3 )
    return 3221225485LL;
  v9 = *((_QWORD *)this + 3);
  v10 = *(unsigned __int16 *)(v9 + 8 * v6 + 2);
  *a3 = v10;
  if ( a5 || a4 )
  {
    v11 = 0;
    v12 = v6 - 1;
    if ( (int)v6 - 1 >= 0 )
    {
      v14 = v12;
      do
      {
        if ( *(_WORD *)(v9 + 8 * v14 + 2) != (_WORD)v10 )
          break;
        ++v11;
        --v12;
        --v14;
      }
      while ( v14 >= 0 );
    }
    if ( a5 )
      *a5 = v11;
    if ( a4 )
      *a4 = v12 + 1;
  }
  return 0LL;
}
