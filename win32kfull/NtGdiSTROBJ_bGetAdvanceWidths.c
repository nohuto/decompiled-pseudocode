/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CF8A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02C94B8 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02DDAD0 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, ULONG a2, unsigned int a3, void *a4)
{
  __int64 v5; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v10; // rbx
  STROBJ *v11; // rdi
  UMPDOBJ *v12; // r9
  char *v13; // rax
  char *v14; // r15
  unsigned int AdvanceWidths; // edi
  ULONG64 v16; // rax

  v5 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v10;
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v11 || (unsigned int)v5 > 0x271000 || (v13 = UMPDOBJ::_AllocUserMem(v12, 16 * (int)v5, 0), (v14 = v13) == 0LL) )
  {
    --*v10;
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v11, a2, v5, (POINTQF *)v13);
  if ( AdvanceWidths )
  {
    v16 = (ULONG64)a4 + 16 * v5;
    if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)a4 || ((unsigned __int8)a4 & 7) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, v14, 16 * v5);
  }
  --*v10;
  return AdvanceWidths;
}
