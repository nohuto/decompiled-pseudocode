/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x1C026EFCC
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0276C50 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0017434 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001755C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0017620 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

struct DwmState *__fastcall GreAddBitmapD3DDirtyRgn(HWND a1, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rdi
  struct DwmState *result; // rax
  int v8; // r14d
  unsigned int v9; // ebp
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[48]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v17 = 0;
  result = g_pDwmState;
  v8 = 0;
  v9 = 0;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a1);
    v10 = v15;
    if ( v15 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct DWMSPRITE *)((char *)v15 + 88));
      v11 = *((_QWORD *)v10 + 21);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)(v11 + 256));
      if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v11) )
      {
        v8 = 1;
        if ( a2 )
        {
          v12 = a2;
          do
          {
            vSpUpdateDirtyRgn(v10, (struct SFMLOGICALSURFACE *)v11, 0LL, a3++, &v17, 0);
            --v12;
          }
          while ( v12 );
          v9 = v17;
        }
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
      if ( v8 )
      {
        v13 = *(_QWORD *)(v11 + 184);
        if ( v13 )
          v3 = *(_QWORD *)(v13 + 8);
        bSpDwmNotifyDirty(*(HSPRITE *)v10, (struct SFMLOGICALSURFACE *)v11, v9, v3);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
      DEC_SHARE_REF_CNT(v10, v14);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
