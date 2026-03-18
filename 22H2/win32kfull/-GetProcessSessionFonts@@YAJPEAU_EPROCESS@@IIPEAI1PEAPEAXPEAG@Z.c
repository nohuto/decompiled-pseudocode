/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00A0C88
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C00A0910 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C026ABD8 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

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
  struct PFF *v17; // rdi
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int i; // edi
  int v24; // [rsp+20h] [rbp-98h]
  unsigned int v25; // [rsp+24h] [rbp-94h]
  __int64 v26; // [rsp+28h] [rbp-90h] BYREF
  struct _EPROCESS *v27; // [rsp+30h] [rbp-88h]
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v7 = 0;
  *a4 = 0;
  v9 = a6;
  v10 = a2;
  *a5 = 0;
  v25 = a3;
  v27 = PROCESS;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS, a2, a3);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v26 = *((_QWORD *)Gre::Base::Globals(v13) + 6);
  GreAcquireSemaphore(v26);
  v15 = 0LL;
  v24 = 0;
  v29 = *(_QWORD *)(SGDGetSessionState(v14) + 32);
  v16 = *(_QWORD *)(v29 + 20272);
  if ( *(_DWORD *)(v16 + 24) )
  {
    do
    {
      if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741789 )
        break;
      v17 = SkipInvalidPff(*(struct PFF **)(v16 + 8 * v15 + 40));
      if ( v17 )
      {
        do
        {
          if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
            break;
          if ( *((_QWORD *)v17 + 10) )
          {
            v18 = *((_DWORD *)v17 + 13);
            if ( (v18 & 8) == 0 && (v18 & 0x200) == 0 )
            {
              if ( ++*a4 == -1 )
                goto LABEL_14;
              v19 = *((_DWORD *)v17 + 8);
              v20 = -1;
              v21 = v19 + *a5;
              if ( v21 >= v19 )
                v20 = v19 + *a5;
              *a5 = v20;
              if ( v21 < v19 )
LABEL_14:
                v7 = -1073741675;
              if ( v10 && v7 >= 0 )
              {
                if ( *a4 > v10 || *a5 > v25 )
                {
                  v7 = -1073741789;
                }
                else
                {
                  v7 = PffDuplicateFileHandle(v17, CurrentProcess, v27, &a6[*a4 - 1]);
                  if ( v7 >= 0 )
                  {
                    memmove(a7, *(const void **)(**((_QWORD **)v17 + 25) + 80LL), 2LL * *((unsigned int *)v17 + 8));
                    a7 += *((unsigned int *)v17 + 8);
                  }
                }
              }
            }
          }
          v17 = SkipInvalidPff(*((struct PFF **)v17 + 1));
        }
        while ( v17 );
        LODWORD(v15) = v24;
      }
      v15 = (unsigned int)(v15 + 1);
      v24 = v15;
      v16 = *(_QWORD *)(v29 + 20272);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(v16 + 24) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
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
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  return (unsigned int)v7;
}
