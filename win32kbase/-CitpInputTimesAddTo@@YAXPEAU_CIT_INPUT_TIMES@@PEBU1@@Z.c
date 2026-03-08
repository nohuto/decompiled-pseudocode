/*
 * XREFs of ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00B0B98
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B56C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpInputTimesAddTo(struct _CIT_INPUT_TIMES *a1, const struct _CIT_INPUT_TIMES *a2)
{
  __int16 v2; // dx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r9
  __int64 v30; // r10

  v2 = *(_WORD *)a2;
  if ( v2 )
  {
    CitpStatIncrement((unsigned __int16 *)a1, v2);
    CitpStatIncrement((unsigned __int16 *)(v4 + 2), *(_WORD *)(v3 + 2));
    CitpStatIncrement((unsigned __int16 *)(v6 + 4), *(_WORD *)(v5 + 4));
    CitpStatIncrement((unsigned __int16 *)(v8 + 8), *(_WORD *)(v7 + 8));
    CitpStatIncrement((unsigned __int16 *)(v10 + 12), *(_WORD *)(v9 + 12));
    CitpStatIncrement((unsigned __int16 *)(v12 + 14), *(_WORD *)(v11 + 14));
    CitpStatIncrement((unsigned __int16 *)(v14 + 18), *(_WORD *)(v13 + 18));
    CitpStatIncrement((unsigned __int16 *)(v16 + 26), *(_WORD *)(v15 + 26));
    CitpStatIncrement((unsigned __int16 *)(v18 + 24), *(_WORD *)(v17 + 24));
    CitpStatIncrement((unsigned __int16 *)(v20 + 10), *(_WORD *)(v19 + 10));
    CitpStatIncrement((unsigned __int16 *)(v22 + 6), *(_WORD *)(v21 + 6));
    CitpStatIncrement((unsigned __int16 *)(v24 + 16), *(_WORD *)(v23 + 16));
    CitpStatIncrement((unsigned __int16 *)(v26 + 20), *(_WORD *)(v25 + 20));
    CitpStatIncrement((unsigned __int16 *)(v28 + 28), *(_WORD *)(v27 + 28));
    CitpStatIncrement((unsigned __int16 *)(v30 + 22), *(_WORD *)(v29 + 22));
  }
}
