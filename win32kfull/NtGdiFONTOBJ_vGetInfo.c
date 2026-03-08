/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x1C02CEFA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D1B64 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     FONTOBJ_vGetInfo @ 0x1C029B1A0 (FONTOBJ_vGetInfo.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C029B32C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02CA494 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, unsigned int a2, char *a3)
{
  unsigned __int64 v4; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v8; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  FONTOBJ *v12; // r12
  FONTINFO *v13; // rax
  FONTINFO *v14; // r14

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*v8;
  v12 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v12 && (_DWORD)v4 && a3 && (unsigned int)v4 <= 0x2710000 )
  {
    v13 = (FONTINFO *)Win32AllocPool(v4, 1886221639LL, v10, v11);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, v4);
      FONTOBJ_vGetInfo(v12, v4, v13);
      bSafeCopyBits(a3, v14, v4);
      Win32FreePool(v14);
    }
  }
  --*v8;
  return 0LL;
}
