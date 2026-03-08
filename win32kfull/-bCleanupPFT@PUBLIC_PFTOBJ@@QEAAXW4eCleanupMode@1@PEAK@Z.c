/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C00D0D34
 * Callers:
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00D0C74 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     vCleanupPrivateFonts @ 0x1C0118D80 (vCleanupPrivateFonts.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C01181FC (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

int __fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct PFF **v11; // rdi
  __int64 v12; // r12
  struct PFF *v13; // rcx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rbx
  struct PFF *v16; // rcx
  _UNKNOWN **v18; // [rsp+28h] [rbp-E0h]
  _QWORD v19[7]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h]
  struct PFF *v22; // [rsp+78h] [rbp-90h]
  _QWORD *v23; // [rsp+F8h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF
  __int64 v25; // [rsp+190h] [rbp+88h]

  v3 = &retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (int)v3;
    v7 = 0;
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20;
    v7 = 128;
  }
  memset(v19, 0, sizeof(v19));
  memset_0(&v20, 0, 0xE0uLL);
  HIDWORD(v19[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v23 = v19;
  if ( a3 )
    *a3 = 0;
  v10 = SGDGetSessionState(v9);
  v11 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  v3 = *(_UNKNOWN ***)(v10 + 32);
  v18 = v3;
  if ( v8 )
  {
    v12 = v8;
    v25 = v8;
    do
    {
      v13 = *v11;
      if ( !*v11 )
        goto LABEL_13;
      do
      {
        if ( a2 != 1 )
          goto LABEL_18;
        LODWORD(v3) = *((_DWORD *)v13 + 13);
        if ( ((unsigned __int16)v3 & 0x400) == 0 )
          goto LABEL_11;
        if ( ((unsigned __int16)v3 & 0x800) != 0 )
        {
          LODWORD(v3) = (unsigned int)v3 & 0xFFFFF7FF;
          *((_DWORD *)v13 + 13) = (_DWORD)v3;
        }
        else
        {
LABEL_18:
          v22 = v13;
          v21 = *((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = &v20;
          if ( v21 )
            *(_QWORD *)(v21 + 16) = &v20;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, v13, v11, v7) )
          {
            GreQuerySystemTime(v18 + 2536);
            if ( a3 )
              ++*a3;
          }
          v15 = Gre::Base::Globals(v14);
          GreAcquireSemaphore(*((_QWORD *)v15 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v15 + 6), 14LL);
          if ( *v11 == (struct PFF *)&v20 )
            *v11 = (struct PFF *)v21;
          v16 = v22;
          if ( v22 )
          {
            *((_QWORD *)v22 + 1) = v21;
            v16 = v22;
          }
          LODWORD(v3) = v21;
          if ( v21 )
            *(_QWORD *)(v21 + 16) = v16;
          v13 = (struct PFF *)&v20;
        }
LABEL_11:
        v13 = (struct PFF *)*((_QWORD *)v13 + 1);
      }
      while ( v13 );
      v12 = v25;
LABEL_13:
      ++v11;
      v25 = --v12;
    }
    while ( v12 );
  }
  return (int)v3;
}
