/*
 * XREFs of ?bCreateSemaphores@@YAHPEAU_PANDEV@@@Z @ 0x1C029F970
 * Callers:
 *     ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C029E3D0 (-PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCreateSemaphores(struct _PANDEV *a1)
{
  struct _KSEMAPHORE *v2; // rax
  bool v3; // zf
  HSEMAPHORE *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  HSEMAPHORE *v7; // rdi
  HSEMAPHORE Semaphore; // rax

  *((_QWORD *)a1 + 14) = EngCreateSemaphore();
  *((_QWORD *)a1 + 97) = EngCreateSemaphore();
  v2 = (struct _KSEMAPHORE *)EngAllocMem(6u, 0x60u, 0x6F6C5350u);
  v3 = *((_QWORD *)a1 + 14) == 0LL;
  *((_QWORD *)a1 + 98) = v2;
  if ( !v3 && *((_QWORD *)a1 + 97) && v2 )
  {
    KeInitializeSemaphore(v2, 0, 0x7FFFFFFF);
    KeInitializeMutex((PRKMUTEX)(*((_QWORD *)a1 + 98) + 32LL), 0);
    v4 = (HSEMAPHORE *)((char *)a1 + 120);
    *(_DWORD *)(*((_QWORD *)a1 + 98) + 88LL) = 0;
    *((_DWORD *)a1 + 192) = *((_DWORD *)a1 + 2) / 8;
    v5 = 0;
    *((_DWORD *)a1 + 193) = *((_DWORD *)a1 + 3) / 8;
LABEL_5:
    v6 = 0;
    v7 = v4;
    while ( 1 )
    {
      Semaphore = EngCreateSemaphore();
      *v7 = Semaphore;
      if ( !Semaphore )
        break;
      ++v6;
      ++v7;
      if ( v6 >= 9 )
      {
        ++v5;
        v4 += 9;
        if ( v5 < 9 )
          goto LABEL_5;
        return 1LL;
      }
    }
  }
  return 0LL;
}
