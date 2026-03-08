/*
 * XREFs of ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000AB14
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGSESSIONDATA::CanEnumerateAdapter(DXGSESSIONDATA *this, struct DXGADAPTER *a2)
{
  if ( !*((_BYTE *)this + 18504) )
    return (*((_DWORD *)a2 + 109) & 0x10) != 0;
  if ( *((_BYTE *)this + 18503) )
    return *((_BYTE *)a2 + 2875) != 0;
  return 1;
}
