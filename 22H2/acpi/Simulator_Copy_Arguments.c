/*
 * XREFs of Simulator_Copy_Arguments @ 0x1C00639E8
 * Callers:
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063F4C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0064048 (Simulator_Pre_EvalNameSpaceObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 */

__int64 __fastcall Simulator_Copy_Arguments(int a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v7; // r15
  int v9; // esi
  unsigned __int64 v10; // rcx

  v3 = 0;
  v4 = a1;
  if ( a3 )
  {
    if ( a2 && a1 > 0 )
    {
      v7 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1413563464, 40 * a1);
      if ( !v7 )
        return 3221225495LL;
      v9 = 0;
      do
      {
        v10 = 40LL * v9;
        if ( v10 > 40 * v4 )
          break;
        if ( (unsigned int)DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v10 + v7, v10 + a2) )
          break;
        ++v9;
      }
      while ( v9 < (int)v4 );
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
