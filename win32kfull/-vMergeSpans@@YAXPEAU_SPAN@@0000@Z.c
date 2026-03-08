/*
 * XREFs of ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02D6194
 * Callers:
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02D590C (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02D5C70 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall vMergeSpans(struct _SPAN *a1, struct _SPAN *a2, struct _SPAN *a3, struct _SPAN *a4, struct _SPAN *a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10

  while ( a1 < a2 )
  {
    if ( a3 >= a4 )
    {
      do
      {
        v7 = *(_QWORD *)a1;
        a1 = (struct _SPAN *)((char *)a1 + 8);
        *(_QWORD *)a5 = v7;
        a5 = (struct _SPAN *)((char *)a5 + 8);
      }
      while ( a1 < a2 );
      break;
    }
    if ( *(_DWORD *)a1 >= *(_DWORD *)a3 )
    {
      v6 = *(_QWORD *)a3;
      a3 = (struct _SPAN *)((char *)a3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)a1;
      a1 = (struct _SPAN *)((char *)a1 + 8);
    }
    *(_QWORD *)a5 = v6;
    a5 = (struct _SPAN *)((char *)a5 + 8);
  }
  if ( a3 < a4 )
  {
    v8 = a5 - a3;
    do
    {
      *(_QWORD *)((char *)a3 + v8) = *(_QWORD *)a3;
      a3 = (struct _SPAN *)((char *)a3 + 8);
    }
    while ( a3 < a4 );
  }
}
