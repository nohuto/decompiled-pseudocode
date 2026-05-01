/*
 * XREFs of ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003B510
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003B3EC (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003B5BC (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003B5F0 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003B634 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003B688 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 */

__int64 __fastcall HampSessionLogoff(struct _HAM_SESSION *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8

  HampSessionAcquireLockExclusive(a1);
  v6 = *((_DWORD *)a1 + 33);
  if ( (v6 & 2) != 0 )
  {
    v7 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 33) = v6 | 2;
    v7 = 0;
  }
  HampSessionReleaseLockExclusive(a1);
  if ( v7 >= 0 )
  {
    v7 = HampSessionTerminate(a1, v8, v9, a2, a3);
    if ( v7 >= 0 )
    {
      HampHostIdStoreInvalidateForSession(
        (struct _HAM_HOSTID_STORE *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 376),
        a1);
      v7 = 0;
    }
    HampSessionAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 33) &= ~2u;
    HampSessionReleaseLockExclusive(a1);
  }
  return (unsigned int)v7;
}
