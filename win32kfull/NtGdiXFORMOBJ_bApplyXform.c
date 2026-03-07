__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, ULONG a2, ULONG a3, char *a4, char *a5)
{
  unsigned int v5; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  char *p_pvIn; // rsi
  char *pvOut; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  XFORMOBJ *pxo; // [rsp+38h] [rbp-90h]
  char pvIn; // [rsp+40h] [rbp-88h] BYREF
  char v24; // [rsp+60h] [rbp-68h] BYREF

  v5 = 0;
  if ( a3 <= 0x4E2000 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v11 = (_DWORD *)((char *)ThreadCurrentObj + 420);
    if ( ThreadCurrentObj )
    {
      ++*v11;
      pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
      if ( !pxo || !a4 || !a5 || !a3 )
        goto LABEL_21;
      v14 = 8 * a3;
      if ( a3 > 4 )
      {
        if ( !v14 )
        {
LABEL_21:
          --*v11;
          return v5;
        }
        p_pvIn = (char *)Win32AllocPool(v14, 1886221639LL, v12, v13);
        v19 = Win32AllocPool(v14, 1886221639LL, v17, v18);
        pvOut = (char *)v19;
        if ( !p_pvIn )
        {
LABEL_19:
          if ( pvOut )
            Win32FreePool(pvOut);
          goto LABEL_21;
        }
        if ( !v19 )
        {
LABEL_18:
          Win32FreePool(p_pvIn);
          goto LABEL_19;
        }
      }
      else
      {
        p_pvIn = &pvIn;
        pvOut = &v24;
      }
      if ( (unsigned int)bSafeReadBits(p_pvIn, a4, v14)
        && XFORMOBJ_bApplyXform(pxo, a2, a3, p_pvIn, pvOut)
        && (unsigned int)bSafeCopyBits(a5, pvOut, v14) )
      {
        v5 = 1;
      }
      if ( a3 <= 4 )
        goto LABEL_21;
      if ( !p_pvIn )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  return 0LL;
}
