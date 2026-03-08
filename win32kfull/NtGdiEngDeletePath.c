/*
 * XREFs of NtGdiEngDeletePath @ 0x1C02CBE60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngDeletePath @ 0x1C014D9C0 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  if ( a1 )
  {
    if ( a1 == *((_QWORD *)ThreadCurrentObj + 31) )
    {
      EngDeletePath(*((PATHOBJ **)ThreadCurrentObj + 30));
      *((_QWORD *)v4 + 30) = 0LL;
      *((_QWORD *)v4 + 31) = 0LL;
    }
  }
  --*((_DWORD *)v4 + 105);
  return 0LL;
}
