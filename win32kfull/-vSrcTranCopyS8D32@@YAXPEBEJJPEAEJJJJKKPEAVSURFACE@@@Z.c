/*
 * XREFs of ?vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0091F30
 * Callers:
 *     <none>
 * Callees:
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0092220 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcTranCopyS8D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v15; // rbx

  v15 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13280LL);
  GreAcquireSemaphore(v15);
  vSrcTranCopyS8D32Unsafe(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v15);
  }
}
