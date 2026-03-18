/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00070F4 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6)
{
  unsigned __int16 *v6; // r14
  size_t v7; // rbx
  unsigned int *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD, unsigned __int16 *, unsigned int, void *); // r10
  struct _SURFOBJ *v13; // rcx
  unsigned __int64 v15; // rsi
  size_t v16; // rdi
  unsigned __int16 *v17; // rbx
  __int64 v18; // rsi
  struct _SURFOBJ *v19; // r10
  unsigned int v20; // ebx
  _QWORD v21[2]; // [rsp+40h] [rbp-328h] BYREF
  void *v22; // [rsp+50h] [rbp-318h]
  __int64 (__fastcall *v23)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD, unsigned __int16 *, unsigned int, void *); // [rsp+58h] [rbp-310h]
  _BYTE v24[704]; // [rsp+60h] [rbp-308h] BYREF

  v6 = a4;
  v7 = a3;
  v22 = a6;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = *(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD, unsigned __int16 *, unsigned int, void *))(v11 + 3040);
  v23 = v12;
  if ( !v12 )
    return 0LL;
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
      v13 = *(struct _SURFOBJ **)(v11 + 1768);
    else
      v13 = 0LL;
    return v12(v13, 0LL, 8LL, a3, a4, 0, 0LL);
  }
  v21[0] = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)v21, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v21[0] + 504LL));
  if ( !v21[0] )
    goto LABEL_26;
  if ( a2 != 514 )
    goto LABEL_33;
  v15 = (unsigned __int64)(int)v7 >> 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) != 0 )
  {
    if ( (unsigned int)v7 <= 0x2710000 )
    {
      v16 = v7;
      v17 = (_DWORD)v7 ? (unsigned __int16 *)Win32AllocPool(v7, 1886221383LL) : 0LL;
      v21[1] = v17;
      if ( v17 )
      {
        memmove(v17, v6, v16);
        goto LABEL_19;
      }
    }
LABEL_26:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v21);
    return 0LL;
  }
  v17 = v6;
LABEL_19:
  if ( (unsigned int)v15 <= 0x9C4000 && 4 * (_DWORD)v15 )
    v10 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(4 * v15), 1835426887LL);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    if ( v17 != v6 )
      Win32FreePool(v17);
    goto LABEL_26;
  }
  if ( (int)v15 > 1 )
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)v21, v17 + 1, v15 - 1, v10 + 1, 0, 0);
  *v10 = *v17;
  if ( v17 != v6 )
    Win32FreePool(v17);
  v6 = (unsigned __int16 *)v10;
  LODWORD(v7) = 4 * v15;
LABEL_33:
  v18 = *(_QWORD *)a1;
  v19 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
  if ( !v19 )
  {
    memset(v24, 0, 0x2B8uLL);
    v19 = SURFACE::pSurfobj((SURFACE *)v24);
    v19->dhpdev = *(DHPDEV *)(v18 + 24);
    v19->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v19->iType = 1;
  }
  v20 = v23(v19, v21[0], a2, (unsigned int)v7, v6, a5, v22);
  if ( v10 )
    Win32FreePool(v10);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v21);
  return v20;
}
