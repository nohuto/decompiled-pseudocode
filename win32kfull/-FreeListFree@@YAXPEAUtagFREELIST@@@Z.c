/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00E35A0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01FD710 (xxxCleanupAndFreeDdeConv.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  struct tagFREELIST *v2; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
