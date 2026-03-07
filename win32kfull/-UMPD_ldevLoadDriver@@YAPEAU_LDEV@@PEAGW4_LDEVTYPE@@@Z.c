_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  void *v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  void *v9; // [rsp+20h] [rbp-1C8h] BYREF
  int v10[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x388u, 0x706D7547u);
  if ( v4 )
  {
    v9 = 0LL;
    if ( !UMPDDrvEnableDriver(a1, &v9) )
      goto LABEL_7;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 6) = a2;
    v6 = v9;
    v4[5] = v9;
    *((_DWORD *)v4 + 7) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v4[6] = CurrentProcessWin32Process;
    if ( !(unsigned int)UMPDDrvDriverFn(v6, v10) || !(unsigned int)UMPD_ldevFillTable((struct _LDEV *)v4, v10) )
    {
LABEL_7:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
