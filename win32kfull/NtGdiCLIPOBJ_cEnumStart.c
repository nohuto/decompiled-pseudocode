/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x1C02CAB60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C029B2F0 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  XCLIPOBJ *v12; // rax
  unsigned int v13; // r9d

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v12 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v12 )
  {
    if ( (*((_DWORD *)v11 + 103) & 0x100) != 0 && !*((_QWORD *)v12 + 7) )
    {
      --*((_DWORD *)v11 + 105);
      return 0xFFFFFFFFLL;
    }
    v13 = XCLIPOBJ::cEnumStart(v12, a2, a3, a4, a5);
  }
  --*((_DWORD *)v11 + 105);
  return v13;
}
