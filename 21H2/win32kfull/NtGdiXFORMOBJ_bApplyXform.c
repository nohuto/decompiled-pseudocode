/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C02B4020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C013B438 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C01431C4 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02BE010 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, ULONG a2, ULONG a3, char *a4, char *a5)
{
  unsigned int v5; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rdi
  unsigned int v13; // r15d
  char *p_pvIn; // r14
  char *pvOut; // rbx
  __int64 v16; // rax
  XFORMOBJ *pxo; // [rsp+38h] [rbp-90h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v20; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  if ( a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v12 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !pxo || !a4 || !a5 || !a3 )
      goto LABEL_22;
    v13 = 8 * a3;
    if ( a3 > 4 )
    {
      if ( !v13 )
      {
LABEL_22:
        --*((_DWORD *)v12 + 105);
        return v5;
      }
      p_pvIn = (char *)Win32AllocPool(v13, 1886221639LL);
      v16 = Win32AllocPool(v13, 1886221639LL);
      pvOut = (char *)v16;
      if ( !p_pvIn )
      {
LABEL_20:
        if ( pvOut )
          Win32FreePool(pvOut);
        goto LABEL_22;
      }
      if ( !v16 )
      {
LABEL_19:
        Win32FreePool(p_pvIn);
        goto LABEL_20;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v20;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, v13)
      && XFORMOBJ_bApplyXform(pxo, a2, a3, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, v13) )
    {
      v5 = 1;
    }
    if ( a3 <= 4 )
      goto LABEL_22;
    if ( !p_pvIn )
      goto LABEL_20;
    goto LABEL_19;
  }
  return v5;
}
