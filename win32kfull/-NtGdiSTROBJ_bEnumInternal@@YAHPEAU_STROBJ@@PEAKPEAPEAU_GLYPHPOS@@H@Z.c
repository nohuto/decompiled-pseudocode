/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C9A30
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02CF860 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C02CF880 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C94B8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02DDAA0 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, int a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // r15
  _DWORD *v11; // rbx
  STROBJ *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rsi
  char *v16; // rax
  struct _GLYPHPOS *v17; // r15
  GLYPHDEF **p_pgdf; // rax
  __int64 v19; // rcx
  ULONG pc; // [rsp+20h] [rbp-38h] BYREF
  PGLYPHPOS ppgpos[6]; // [rsp+28h] [rbp-30h] BYREF

  ppgpos[0] = 0LL;
  pc = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  v11 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v11;
  ppgpos[2] = (PGLYPHPOS)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  v12 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1);
  if ( !v12
    || (!a4 ? (v13 = STROBJ_bEnum(v12, &pc, ppgpos)) : (v13 = STROBJ_bEnumPositionsOnly(v12, &pc, ppgpos)),
        (v14 = v13, v13 == -1)
     || (v15 = pc, pc > 0x1A0AAA)
     || (v16 = UMPDOBJ::_AllocUserMem(v10, 24 * pc, 0),
         v17 = (struct _GLYPHPOS *)v16,
         (ppgpos[1] = (PGLYPHPOS)v16) == 0LL)) )
  {
    --*v11;
    return 0xFFFFFFFFLL;
  }
  memmove(v16, ppgpos[0], 24 * v15);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct _GLYPHPOS **)MmUserProbeAddress;
  *a3 = v17;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  *a2 = v15;
  if ( (_DWORD)v15 )
  {
    p_pgdf = &v17->pgdf;
    v19 = (unsigned int)v15;
    do
    {
      *p_pgdf = 0LL;
      p_pgdf += 3;
      --v19;
    }
    while ( v19 );
  }
  --*v11;
  return v14;
}
