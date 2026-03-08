/*
 * XREFs of ?vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z @ 0x1C029FD7C
 * Callers:
 *     ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C029E3D0 (-PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall vDeleteSemaphores(struct _PANDEV *a1)
{
  HSEMAPHORE v2; // rcx
  HSEMAPHORE v3; // rcx
  void *v4; // rcx
  HSEMAPHORE *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  if ( v2 )
    EngDeleteSemaphore(v2);
  v3 = (HSEMAPHORE)*((_QWORD *)a1 + 97);
  if ( v3 )
    EngDeleteSemaphore(v3);
  v4 = (void *)*((_QWORD *)a1 + 98);
  if ( v4 )
    EngFreeMem(v4);
  v5 = (HSEMAPHORE *)((char *)a1 + 120);
  v6 = 9LL;
  do
  {
    v7 = 9LL;
    do
    {
      if ( *v5 )
        EngDeleteSemaphore(*v5);
      ++v5;
      --v7;
    }
    while ( v7 );
    --v6;
  }
  while ( v6 );
}
