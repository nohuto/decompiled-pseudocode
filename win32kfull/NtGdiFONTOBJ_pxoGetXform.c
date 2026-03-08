/*
 * XREFs of NtGdiFONTOBJ_pxoGetXform @ 0x1C02CEF40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C029B638 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 */

struct UMPDOBJ *__fastcall NtGdiFONTOBJ_pxoGetXform(struct _FONTOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v4; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    result = (struct UMPDOBJ *)UMPDOBJ::GetFONTOBJXform(result, a1);
    --*((_DWORD *)v4 + 105);
  }
  return result;
}
