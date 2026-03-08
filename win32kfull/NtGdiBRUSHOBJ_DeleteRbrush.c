/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02CA6E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C9400 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (__int64)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = result;
  if ( result )
  {
    ++*(_DWORD *)(result + 420);
    if ( a1 )
    {
      v7 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(result, a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 )
        {
          if ( v9 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v9 - 16));
            *(_QWORD *)(v8 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v10 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v6, a2);
      v11 = v10;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v12 )
        {
          if ( v12 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v12 - 16));
            *(_QWORD *)(v11 + 8) = 0LL;
          }
        }
      }
    }
    --*(_DWORD *)(v6 + 420);
    return 1LL;
  }
  return result;
}
