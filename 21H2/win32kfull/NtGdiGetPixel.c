/*
 * XREFs of NtGdiGetPixel @ 0x1C008A200
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C003D428 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008A13C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, LONG a2, LONG a3)
{
  __int64 v5; // rbx
  char *v6; // rdx
  struct REGION *v7; // rax
  int IsCMYKColor; // edi
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+74h] [rbp-8Ch]
  _DWORD v17[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  DC *v21[6]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v22[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v24; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v25[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _POINTL v26[2]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v27[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v28[4]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v29[76]; // [rsp+174h] [rbp+74h] BYREF
  __int64 v30; // [rsp+1C0h] [rbp+C0h]
  int v31; // [rsp+1C8h] [rbp+C8h]
  int v32; // [rsp+1F0h] [rbp+F0h]
  __int64 v33; // [rsp+200h] [rbp+100h]

  v13 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( v21[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v21, a2, a3, 1, 1);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v21, 0) )
    {
      v5 = *((_QWORD *)v21[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v21[0] + 62)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v22, (struct XDCOBJ *)v21, 0x204u);
          v26[0].x = a2;
          v26[0].y = a3;
          EXFORMOBJ::bXform((EXFORMOBJ *)v22, v26, 1LL);
          v6 = (char *)v21[0] + 1024;
          if ( (*((_DWORD *)v21[0] + 10) & 1) == 0 )
            v6 = (char *)v21[0] + 1016;
          v27[0] = v26[0].x + *(_DWORD *)v6;
          v27[2] = *(_DWORD *)v6 + v26[0].x + 1;
          v27[1] = v26[0].y + *((_DWORD *)v6 + 1);
          v27[3] = *((_DWORD *)v6 + 1) + v26[0].y + 1;
          v7 = XDCOBJ::prgnEffRao(v21);
          v30 = 0LL;
          v31 = 0;
          v32 = 1;
          v33 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v7, (struct ERECTL *)v27, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v29) )
          {
            v13 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v21[0]);
            v17[0] = *(_DWORD *)(v5 + 96);
            v18 = 1LL;
            v20 = 1LL;
            v17[1] = 1;
            v19 = 0LL;
            *(_OWORD *)&v26[0].x = 0LL;
            if ( v17[0] == 1 )
            {
              v26[0].x = 7;
              v26[1].x = 8;
            }
            else if ( v17[0] == 2 )
            {
              v26[0].x = 1;
              v26[1].x = 2;
            }
            else
            {
              v26[1].x = 1;
            }
            v14 = 0LL;
            v15 = 0;
            v16 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, &v13, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v9 = (*(_DWORD *)(v5 + 112) & 0x400) == 0;
              v26[0].y = 0;
              v26[1].y = 1;
              v10 = v9
                  ? ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _POINTL *, _DWORD *))EngCopyBits)(
                      (v14 + 24) & -(__int64)(v14 != 0),
                      v5 + 24,
                      0LL,
                      xloIdent,
                      v26,
                      v27)
                  : (*(unsigned __int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _POINTL *, _DWORD *))(*(_QWORD *)(v5 + 48) + 2816LL))(
                      (v14 + 24) & -(__int64)(v14 != 0),
                      v5 + 24,
                      0LL,
                      xloIdent,
                      v26,
                      v27);
              if ( v10 && !IsCMYKColor )
                v13 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v21[0] + 11), v13);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v14);
          }
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v24 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v24);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
  }
  v11 = v13;
  DCOBJ::~DCOBJ((DCOBJ *)v21);
  return v11;
}
