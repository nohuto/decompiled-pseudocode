/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027B784
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00997C0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C011FCC0 (--1CAutoTGO@@QEAA@XZ.c)
 *     wil::scope_exit__lambda_529edb1b3a888443a255f78383d1a039___ @ 0x1C016B34C (wil--scope_exit__lambda_529edb1b3a888443a255f78383d1a039___.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016B364 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     wil::details::lambda_call__lambda_529edb1b3a888443a255f78383d1a039___::_lambda_call__lambda_529edb1b3a888443a255f78383d1a039___ @ 0x1C016B41C (wil--details--lambda_call__lambda_529edb1b3a888443a255f78383d1a039___--_lambda_call__lambda_529e.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016B450 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026D1F0 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C027367C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *a4,
        unsigned int a5,
        void *a6)
{
  size_t v7; // r14
  unsigned int v10; // ebx
  __int64 v11; // r10
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rdi
  __int64 v13; // rcx
  unsigned int **v14; // rdx
  unsigned __int64 v15; // rsi
  WCHAR *v16; // rax
  WCHAR *v17; // rdi
  unsigned int *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _SURFOBJ *v23; // rax
  unsigned int *v24; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v25[16]; // [rsp+48h] [rbp-E0h] BYREF
  WCHAR *v26; // [rsp+58h] [rbp-D0h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // [rsp+60h] [rbp-C8h]
  _BYTE v28[32]; // [rsp+68h] [rbp-C0h] BYREF
  int v29; // [rsp+88h] [rbp-A0h]
  _BYTE v30[112]; // [rsp+90h] [rbp-98h] BYREF
  unsigned int **v31; // [rsp+130h] [rbp+8h] BYREF

  v7 = a3;
  v10 = 0;
  v24 = 0LL;
  v31 = &v24;
  wil::scope_exit__lambda_529edb1b3a888443a255f78383d1a039___((__int64)v25, &v31);
  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v11 + 3064);
  v27 = v12;
  if ( v12 )
  {
    if ( a2 == 8 )
    {
      if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
        v13 = *(_QWORD *)(v11 + 1800);
      else
        v13 = 0LL;
      v10 = v12(v13, 0LL, 8LL, (unsigned int)v7, a4, 0, 0LL);
      goto LABEL_35;
    }
    v31 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v31, a1, 0, 2u) )
      GreAcquireSemaphore(v31[63]);
    v14 = v31;
    if ( v31 )
    {
      v29 = 0;
      if ( a2 == 514 )
      {
        v15 = (unsigned __int64)(int)v7 >> 1;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          if ( (unsigned int)v7 > 0x2710000 )
            goto LABEL_22;
          v16 = (WCHAR *)PALLOCMEM2((unsigned int)v7, 1886221383LL, 0);
          v17 = v16;
          v26 = v16;
          if ( !v16 )
            goto LABEL_22;
          memmove(v16, a4, v7);
        }
        else
        {
          v17 = a4;
        }
        if ( (unsigned int)v15 > 0x9C4000 )
          v18 = 0LL;
        else
          v18 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v15), 1835426887LL, 1);
        v24 = v18;
        if ( !v18 )
        {
          if ( v17 != a4 )
            Win32FreePool(v17);
          goto LABEL_22;
        }
        CAutoTGO::vGuard((CAutoTGO *)v28, v18, Win32FreePool);
        if ( (int)v15 > 1 )
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v31, v17 + 1, v15 - 1, v24 + 1, 0, 0);
        *v24 = *v17;
        if ( v17 != a4 )
          Win32FreePool(v17);
        a4 = (WCHAR *)v24;
        LODWORD(v7) = 4 * v15;
        v14 = v31;
        v12 = v27;
      }
      v20 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v21 = v20 + 24;
      v22 = -v20;
      if ( (v21 & -(__int64)(v22 != 0)) != 0 )
      {
        v10 = v12(v21 & -(__int64)(v22 != 0), v14, a2, (unsigned int)v7, a4, a5, a6);
      }
      else
      {
        SURFFAKEOBJ::SURFFAKEOBJ(
          (SURFFAKEOBJ *)v30,
          *(HDEV *)(*(_QWORD *)a1 + 48LL),
          *(struct DHPDEV__ **)(*(_QWORD *)a1 + 24LL));
        if ( !SURFREF::bValid((SURFREF *)v30) )
        {
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v30);
LABEL_22:
          CAutoTGO::~CAutoTGO((CAutoTGO *)v28);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
          wil::details::lambda_call__lambda_529edb1b3a888443a255f78383d1a039___::_lambda_call__lambda_529edb1b3a888443a255f78383d1a039___((__int64)v25);
          return 0LL;
        }
        v23 = SURFREF::pSurfobj((SURFREF *)v30);
        v10 = v12(v23, v31, a2, (unsigned int)v7, a4, a5, a6);
        SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v30);
      }
      CAutoTGO::~CAutoTGO((CAutoTGO *)v28);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
  }
LABEL_35:
  wil::details::lambda_call__lambda_529edb1b3a888443a255f78383d1a039___::_lambda_call__lambda_529edb1b3a888443a255f78383d1a039___((__int64)v25);
  return v10;
}
