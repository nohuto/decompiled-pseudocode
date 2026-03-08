/*
 * XREFs of NtGdiGetPixel @ 0x1C00054A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00057D8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00803BC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, int a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct REGION *v7; // rax
  int IsCMYKColor; // esi
  Gre::Base *v9; // rcx
  __int64 v10; // rbx
  struct Gre::Base::SESSION_GLOBALS *v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+60h] [rbp-A0h] BYREF
  DC *v16[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  char v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+84h] [rbp-7Ch]
  _DWORD v20[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  _QWORD v27[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  __int64 v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  _BYTE v32[16]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v33[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v34[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v35[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v36[76]; // [rsp+134h] [rbp+34h] BYREF
  __int64 v37; // [rsp+180h] [rbp+80h]
  int v38; // [rsp+188h] [rbp+88h]
  int v39; // [rsp+1B0h] [rbp+B0h]
  __int64 v40; // [rsp+1C0h] [rbp+C0h]

  v15 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v16, a2, a3, 1, 1);
    v27[1] = 0LL;
    v24 = 0LL;
    v28 = 256;
    v25 = 0LL;
    v26 = 0;
    v27[0] = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v29 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v24, (struct XDCOBJ *)v16, 0) )
    {
      v5 = *((_QWORD *)v16[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v16[0] + 62)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v32, (struct XDCOBJ *)v16, 0x204u);
          v33[0].x = a2;
          v33[0].y = a3;
          EXFORMOBJ::bXform((EXFORMOBJ *)v32, v33, 1uLL);
          v6 = *((_DWORD *)v16[0] + 10) & 1LL;
          v34[0] = v33[0].x + *((_DWORD *)v16[0] + 2 * v6 + 254);
          v34[2] = *((_DWORD *)v16[0] + 2 * v6 + 254) + v33[0].x + 1;
          v34[1] = v33[0].y + *((_DWORD *)v16[0] + 2 * v6 + 255);
          v34[3] = *((_DWORD *)v16[0] + 2 * v6 + 255) + v33[0].y + 1;
          v7 = XDCOBJ::prgnEffRao((XDCOBJ *)v16);
          v37 = 0LL;
          v38 = 0;
          v39 = 1;
          v40 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v35, v7, (struct ERECTL *)v34, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v36) )
          {
            v15 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v16[0]);
            v20[0] = *(_DWORD *)(v5 + 96);
            v21 = 1LL;
            v23 = 1LL;
            v20[1] = 1;
            v22 = 0LL;
            *(_OWORD *)&v33[0].x = 0LL;
            if ( v20[0] == 1 )
            {
              v33[0].x = 7;
              v33[1].x = 8;
            }
            else if ( v20[0] == 2 )
            {
              v33[0].x = 1;
              v33[1].x = 2;
            }
            else
            {
              v33[1].x = 1;
            }
            v17 = 0LL;
            v18 = 0;
            v19 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v17, (struct _DEVBITMAPINFO *)v20, &v15, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v10 = *(_QWORD *)(v5 + 48);
              v33[0].y = 0;
              v33[1].y = 1;
              v11 = Gre::Base::Globals(v9);
              v12 = (*(_DWORD *)(v5 + 112) & 0x400) != 0
                  ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, struct _POINTL *, _DWORD *))(v10 + 2816))(
                      (v17 + 24) & -(__int64)(v17 != 0),
                      v5 + 24,
                      0LL,
                      (__int64)v11 + 6896,
                      v33,
                      v34)
                  : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, struct _POINTL *, _DWORD *))EngCopyBits)(
                      (v17 + 24) & -(__int64)(v17 != 0),
                      v5 + 24,
                      0LL,
                      (char *)v11 + 6896,
                      v33,
                      v34);
              if ( v12 && !IsCMYKColor )
                v15 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v16[0] + 11), v15);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v17);
          }
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v24);
    if ( v27[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v27);
  }
  v13 = v15;
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v13;
}
