/*
 * XREFs of ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C012BF18
 * Callers:
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 * Callees:
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006AAC (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 */

void __fastcall DoGlobalTSFWork(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 i; // [rsp+40h] [rbp-38h]

  v11 = gppiList;
  for ( i = gppiList; v11; i = v11 )
  {
    if ( (*(_DWORD *)(v11 + 820) & 0x1000000) != 0 )
    {
      v12 = *(_QWORD *)(v11 + 320);
      if ( v12 )
      {
        do
        {
          if ( (a6 & *(_DWORD *)(*(_QWORD *)(v12 + 448) + 16LL)) != 0 )
            CreateAndPostTSFNotify(a1, a2, a3, a4, (struct tagTHREADINFO *)v12, a7, a8);
          v12 = *(_QWORD *)(v12 + 664);
        }
        while ( v12 );
        v11 = i;
      }
    }
    v11 = *(_QWORD *)(v11 + 376);
  }
}
