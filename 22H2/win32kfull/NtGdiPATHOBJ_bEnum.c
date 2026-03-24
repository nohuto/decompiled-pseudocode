/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02B48B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DE74 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CF88C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B117C (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, PATHDATA *a2)
{
  unsigned int v4; // edi
  POINTFIX *v5; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rbx
  unsigned __int64 v10; // rax
  POINTFIX *v11; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  ppd = 0LL;
  v4 = 0;
  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 || *(_QWORD *)(v10 + 8) )
    {
      v4 = PATHOBJ_bEnum((PATHOBJ *)v10, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n",
        4074);
    }
    if ( ppd.count > 0x4E2000 )
    {
      --*((_DWORD *)v8 + 105);
      return 0LL;
    }
    v11 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v8, 8 * ppd.count, 0);
    v5 = v11;
    if ( v11 )
    {
      memmove(v11, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !v5 )
    ppd = 0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (PATHDATA *)MmUserProbeAddress;
  *a2 = ppd;
  --*((_DWORD *)v8 + 105);
  return v4;
}
