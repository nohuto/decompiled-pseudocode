/*
 * XREFs of Simulator_Free_Arguments @ 0x1C0049214
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C0048A7C (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C0048F10 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *i; // rdi
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 > 0 && a2 )
  {
    v3 = a2;
    v4 = (unsigned int)a1;
    for ( i = (_QWORD *)(a2 + 32); ; i += 5 )
    {
      v6 = *((unsigned __int16 *)i - 15);
      if ( v6 > 0x82 )
      {
        if ( v6 - 131 <= 1 )
          goto LABEL_17;
      }
      else
      {
        if ( v6 == 130 )
          goto LABEL_17;
        if ( v6 > 8 )
        {
          v8 = v6 - 9;
          v7 = v8 == 0;
        }
        else
        {
          if ( v6 == 8 )
            goto LABEL_17;
          v8 = v6 - 2;
          v7 = v8 == 0;
        }
        if ( v7 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || v11 == 2 )
        {
LABEL_17:
          if ( *i )
            FreeObjData(v3);
        }
      }
      v3 += 40LL;
      if ( !--v4 )
      {
        HeapFree(a2);
        return 0LL;
      }
    }
  }
  return 0LL;
}
