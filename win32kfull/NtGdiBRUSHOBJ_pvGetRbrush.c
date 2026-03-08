/*
 * XREFs of NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02CA8C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0267B3C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C9400 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

struct UMPDOBJ *__fastcall NtGdiBRUSHOBJ_pvGetRbrush(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *result; // rax
  struct UMPDOBJ *v4; // rbx
  struct _BRUSHOBJ *v5; // rax
  PVOID RbrushUMPD; // r9

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = result;
  if ( result )
  {
    ++*((_DWORD *)result + 105);
    v5 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)result, a1);
    if ( v5 )
      RbrushUMPD = BRUSHOBJ_pvGetRbrushUMPD(v5);
    --*((_DWORD *)v4 + 105);
    return (struct UMPDOBJ *)RbrushUMPD;
  }
  return result;
}
