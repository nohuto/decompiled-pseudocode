/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x1C014CB0A
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C014D3B0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C000A650 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001E500 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C001EC6C (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C004F9EC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GreAddBitmapD3DDirtyRgn(Gre::Base *a1, unsigned int a2, const struct _RECTL *a3)
{
  unsigned int v3; // esi
  int v7; // ebp
  __int64 result; // rax
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  Gre::Base *v11; // rcx
  struct DWMSPRITE *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  struct DWMSPRITE *v17; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v18[48]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v19 = 0;
  v7 = 0;
  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    v10 = Gre::Base::Globals(v9);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9));
    if ( IsDwmActive(v11) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v17, (HWND)a1);
      v12 = v17;
      if ( v17 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v18, (struct DWMSPRITE *)((char *)v17 + 88));
        v13 = *((_QWORD *)v12 + 18);
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v17, (struct _EX_PUSH_LOCK *)(v13 + 256));
        if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v13) )
        {
          v7 = 1;
          if ( a2 )
          {
            v14 = a2;
            do
            {
              vSpUpdateDirtyRgn(v12, (struct SFMLOGICALSURFACE *)v13, 0LL, a3++, &v19, 0);
              --v14;
            }
            while ( v14 );
            v3 = v19;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v17);
        if ( v7 )
        {
          v15 = *(_QWORD *)(v13 + 184);
          if ( v15 )
            v16 = *(_QWORD *)(v15 + 8);
          else
            v16 = 0LL;
          bSpDwmNotifyDirty(*(HSPRITE *)v12, (struct SFMLOGICALSURFACE *)v13, v3, v16);
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
        if ( v12 )
          DEC_SHARE_REF_CNT(v12);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    return GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
  }
  return result;
}
