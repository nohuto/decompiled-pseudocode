/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C0116450
 * Callers:
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0122EF0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0122F60 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0122FB8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0123A3C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0123AD4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0123AF4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0123B7C (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 */

__int64 __fastcall prfntDeactivateEudcRFONTs(Gre::Base *a1)
{
  __int64 v1; // r12
  Gre::Base *v2; // r13
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 i; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  struct RFONT *v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = a1;
  v15 = 0LL;
  v3 = Gre::Base::Globals(a1);
  v4 = *((_QWORD *)v3 + 6);
  GreAcquireSemaphore(v4);
  v5 = *((_QWORD *)v3 + 3);
  GreAcquireSemaphore(v5);
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v6) + 32) + 20272LL);
  if ( *(_DWORD *)(v8 + 24) )
  {
    do
    {
      for ( i = *(_QWORD *)(v8 + 8LL * v7 + 40); i; i = *(_QWORD *)(i + 8) )
      {
        if ( (*(_DWORD *)(i + 52) & 8) != 0 )
        {
          v11 = *(_QWORD *)(i + 72);
          if ( v11 )
          {
            v16 = 0LL;
            do
            {
              v12 = *(_QWORD *)(v11 + 120);
              if ( v12 == *(_QWORD *)v2 || v12 == *((_QWORD *)v2 + 1) )
              {
                v13 = *(_QWORD *)(v11 + 104);
                v19 = v13;
                v20 = v11;
                if ( *(_DWORD *)(v11 + 660) )
                {
                  v18 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
                  RFONTOBJ::vRemove(&v20, &v18, 1LL);
                  PDEVOBJ::prfntActive((PDEVOBJ *)&v19, v18);
                }
                else
                {
                  v18 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
                  RFONTOBJ::vRemove(&v20, &v18, 1LL);
                  PDEVOBJ::prfntInactive((PDEVOBJ *)&v19, v18);
                  v14 = PDEVOBJ::cInactive((PDEVOBJ *)&v19) - 1;
                  if ( (*(_DWORD *)(v13 + 40) & 0x800000) != 0 )
                    *(_DWORD *)(*(_QWORD *)(v13 + 3496) + 1528LL) = v14;
                  else
                    *(_DWORD *)(v13 + 1528) = v14;
                }
                RFONTOBJ::vInsert(&v20, &v15, 1LL);
                v20 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
                v2 = a1;
              }
              v11 = *(_QWORD *)(v11 + 496);
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
            }
            while ( v11 );
          }
        }
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(v8 + 24) );
    v1 = v15;
  }
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v5);
  }
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v4);
  }
  return v1;
}
