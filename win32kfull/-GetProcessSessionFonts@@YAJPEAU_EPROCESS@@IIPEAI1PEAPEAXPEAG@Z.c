__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v9; // rsi
  unsigned int v10; // ebp
  Gre::Base *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int i; // edi
  int v25; // [rsp+20h] [rbp-98h]
  unsigned int v26; // [rsp+24h] [rbp-94h]
  __int64 v27; // [rsp+28h] [rbp-90h] BYREF
  struct _EPROCESS *v28; // [rsp+30h] [rbp-88h]
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-80h]
  __int64 v30; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v7 = 0;
  *a4 = 0;
  v9 = a6;
  v10 = a2;
  *a5 = 0;
  v26 = a3;
  v28 = PROCESS;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS, a2, a3);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v27 = *((_QWORD *)Gre::Base::Globals(v13) + 6);
  GreAcquireSemaphore(v27);
  v15 = 0LL;
  v25 = 0;
  v16 = *(_QWORD *)(SGDGetSessionState(v14) + 32);
  v30 = v16;
  v17 = *(_QWORD *)(v16 + 20272);
  if ( *(_DWORD *)(v17 + 24) )
  {
    do
    {
      if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
        break;
      v18 = *(_QWORD *)(v17 + 8 * v15 + 40);
      if ( v18 )
      {
        do
        {
          if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
            break;
          if ( *(_QWORD *)(v18 + 80) )
          {
            v19 = *(_DWORD *)(v18 + 52);
            if ( (v19 & 8) == 0 && (v19 & 0x200) == 0 )
            {
              if ( ++*a4 == -1 )
                goto LABEL_21;
              v21 = *(_DWORD *)(v18 + 32);
              v22 = -1;
              v23 = v21 + *a5;
              if ( v23 >= v21 )
                v22 = v21 + *a5;
              *a5 = v22;
              if ( v23 < v21 )
LABEL_21:
                v7 = -1073741675;
              if ( v10 && v7 >= 0 )
              {
                if ( *a4 > v10 || *a5 > v26 )
                {
                  v7 = -1073741789;
                }
                else
                {
                  v7 = PffDuplicateFileHandle((struct PFF *)v18, CurrentProcess, v28, &a6[*a4 - 1]);
                  if ( v7 >= 0 )
                  {
                    memmove(a7, *(const void **)(**(_QWORD **)(v18 + 200) + 80LL), 2LL * *(unsigned int *)(v18 + 32));
                    a7 += *(unsigned int *)(v18 + 32);
                  }
                }
              }
            }
          }
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( v18 );
        LODWORD(v15) = v25;
        v16 = v30;
      }
      v17 = *(_QWORD *)(v16 + 20272);
      v15 = (unsigned int)(v15 + 1);
      v25 = v15;
    }
    while ( (unsigned int)v15 < *(_DWORD *)(v17 + 24) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( i = 0; i < v10; ++v9 )
    {
      if ( !*v9 )
        break;
      NtClose(*v9);
      ++i;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  return (unsigned int)v7;
}
