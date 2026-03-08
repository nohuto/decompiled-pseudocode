/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028D170
 * Callers:
 *     EngLoadModule @ 0x1C028DDD0 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C028DDF0 (EngLoadModuleForWrite.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1C028D094 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     bMapFile @ 0x1C028E338 (bMapFile.c)
 *     MakeSystemRelativePath @ 0x1C0307BDC (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(char *Source, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // rbx
  __int64 v10; // rsi
  Gre::Base *v11; // rcx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rdx
  __int16 v14; // ax
  char *v15; // rax
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  __int64 v17; // rcx
  struct Gre::Base::SESSION_GLOBALS **v18; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1LL;
  Destination = 0LL;
  result = -1LL;
  v6 = 0LL;
  do
    ++result;
  while ( *(_WORD *)&Source[2 * result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount((wchar_t *)Source), (v6 = result) == 0) )
    {
      do
        ++v2;
      while ( *(_WORD *)&Source[2 * v2] );
      v7 = (2 * (_DWORD)v2 + 9) & 0xFFFFFFF8;
      if ( (unsigned int)MakeSystemRelativePath((PCWSTR)Source, &Destination) )
      {
        if ( (_DWORD)v7 != -104 )
        {
          v8 = Win32AllocPoolZInit((unsigned int)(v7 + 104), 1818846791LL);
          v9 = (char *)v8;
          if ( v8 )
          {
            v10 = v8 + v7;
            if ( (unsigned int)bMapFile(Destination.Buffer) )
            {
              v12 = (unsigned __int64)(unsigned int)v7 >> 1;
              v6 = v10 + 24;
              if ( a2 )
              {
                if ( v12 )
                {
                  v11 = (Gre::Base *)(2147483646 - v12);
                  v13 = (char *)&word_1C03142AC - v9;
                  do
                  {
                    if ( !(Gre::Base *)((char *)v11 + v12) )
                      break;
                    v14 = *(_WORD *)&v9[v13];
                    if ( !v14 )
                      break;
                    *(_WORD *)v9 = v14;
                    v9 += 2;
                    --v12;
                  }
                  while ( v12 );
                  v15 = v9 - 2;
                  if ( v12 )
                    v15 = v9;
                  *(_WORD *)v15 = 0;
                }
              }
              else
              {
                StringCchCopyW(v9, v12, Source);
              }
              *(_DWORD *)(v10 + 16) = 1;
              *(_DWORD *)(v10 + 20) = v7 + 24;
              v16 = Gre::Base::Globals(v11);
              v17 = *((_QWORD *)v16 + 405);
              if ( v17 )
                GreAcquireSemaphore(v17);
              v18 = (struct Gre::Base::SESSION_GLOBALS **)*((_QWORD *)v16 + 404);
              if ( *v18 != (struct Gre::Base::SESSION_GLOBALS *)((char *)v16 + 3224) )
                __fastfail(3u);
              *(_QWORD *)v10 = (char *)v16 + 3224;
              *(_QWORD *)(v10 + 8) = v18;
              *v18 = (struct Gre::Base::SESSION_GLOBALS *)v10;
              *((_QWORD *)v16 + 404) = v10;
              if ( *((_QWORD *)v16 + 405) )
              {
                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.GreEngLoadModuleAllocListLock");
                GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 405));
              }
            }
            else
            {
              Win32FreePool(v9);
            }
          }
        }
        Win32FreePool(Destination.Buffer);
      }
      return v6;
    }
  }
  return result;
}
