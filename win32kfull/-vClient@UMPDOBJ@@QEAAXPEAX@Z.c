/*
 * XREFs of ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C029C960
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C029BFDC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02BC660 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::vClient(UMPDOBJ *this, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !*((_WORD *)a2 + 38) && *((char *)a2 + 78) < 0 && *((_DWORD *)a2 + 146) == 1 )
  {
    v3 = a2[6];
    v4 = a2[7];
    a2[6] = a2[71];
    a2[7] = a2[72];
    *((_DWORD *)a2 + 146) = 0;
    a2[71] = v3;
    a2[72] = v4;
  }
}
