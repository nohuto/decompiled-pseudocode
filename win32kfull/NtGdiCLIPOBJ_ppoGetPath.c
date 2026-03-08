/*
 * XREFs of NtGdiCLIPOBJ_ppoGetPath @ 0x1C0150220
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C014DC28 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _PATHOBJ *result; // rax
  struct _PATHOBJ *v4; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (struct _PATHOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++result[52].cCurves;
    result = UMPDOBJ::GetCLIPOBJPath((UMPDOBJ *)result, a1);
    --v4[52].cCurves;
  }
  return result;
}
