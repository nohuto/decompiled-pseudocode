/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1C02B0D80
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0291450 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v4; // r15
  int v5; // ebp
  unsigned int v6; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  unsigned __int64 v11; // rax
  XCLIPOBJ *v12; // r14
  char *v13; // rax
  char *v14; // rsi
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v5 = -1;
  v6 = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v11 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
    v12 = (XCLIPOBJ *)v11;
    if ( !v11 )
    {
LABEL_15:
      --*((_DWORD *)v10 + 105);
      return v6;
    }
    if ( (*((_DWORD *)v10 + 103) & 0x100) == 0 || *(_QWORD *)(v11 + 56) )
    {
      if ( (unsigned int)(v4 - 1) <= 0x270FFFF )
      {
        v13 = (char *)Win32AllocPool(v4, 1886221639LL);
        v14 = v13;
        if ( v13 )
        {
          v16 = 0;
          v6 = XCLIPOBJ::bEnum(v12, v4, v13, &v16);
          if ( v6 != -1 && !(unsigned int)bSafeCopyBits(a3, v14, v16) )
            v6 = -1;
          Win32FreePool(v14);
        }
      }
      goto LABEL_15;
    }
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n",
        2635);
  }
  else
  {
    v5 = 0;
  }
  v6 = v5;
  if ( v10 )
    goto LABEL_15;
  return v6;
}
