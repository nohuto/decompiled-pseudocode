/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02793C8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C001B2B0 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0059450 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C007F50C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C012F648 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C012FC34 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C012FD24 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0267C4C (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C0279338 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C0279358 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        int *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v10; // edi
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  Gre::Base *XlateObject; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  struct _SURFOBJ *v19; // r11
  struct _SURFOBJ *v20; // rax
  _DWORD *v21; // rbx
  unsigned int (__fastcall *v22)(struct _SURFOBJ *, Gre::Base *, _QWORD, bool, int, int *, unsigned int, _DWORD *); // r10
  __int64 v24; // [rsp+30h] [rbp-B8h]
  __int64 v25; // [rsp+38h] [rbp-B0h]
  __int64 v26; // [rsp+40h] [rbp-A8h]
  Gre::Base *v27; // [rsp+50h] [rbp-98h]
  __int64 v28; // [rsp+58h] [rbp-90h]
  Gre::Base *v29; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+68h] [rbp-80h] BYREF
  int v31; // [rsp+70h] [rbp-78h]
  int v32; // [rsp+78h] [rbp-70h]
  _BYTE v33[80]; // [rsp+80h] [rbp-68h] BYREF

  v10 = 0;
  v11 = 0;
  if ( a3 == 8 )
  {
    v32 = *a5;
    if ( v32 == 4119 )
      v12 = XDCOBJ::bSupportsJPEG(this);
    else
      v12 = XDCOBJ::bSupportsPNG(this);
    if ( v12 && *(_QWORD *)(*(_QWORD *)a2 + 3272LL) )
      return 1;
  }
  else if ( *(_QWORD *)(*(_QWORD *)a2 + 3272LL) )
  {
    if ( a6 >= 4 && a7 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)this + 496LL);
      if ( v13 )
        v28 = *(_QWORD *)(v13 + 128);
      else
        v28 = 0LL;
      v14 = *(_QWORD *)(*(_QWORD *)this + 88LL);
      v31 = 0;
      v30 = 0LL;
      v27 = 0LL;
      v29 = 0LL;
      if ( (a3 == 4119 && (unsigned int)XDCOBJ::bSupportsJPEG(this)
         || a3 == 4120 && (unsigned int)XDCOBJ::bSupportsPNG(this))
        && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v30, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        LODWORD(v26) = 0xFFFFFF;
        LODWORD(v25) = 0;
        LODWORD(v24) = 0;
        XlateObject = (Gre::Base *)CreateXlateObject(
                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 248LL),
                                     *(_DWORD *)(*(_QWORD *)this + 120LL),
                                     v30,
                                     v28,
                                     v14,
                                     v14,
                                     v24,
                                     v25,
                                     v26,
                                     0);
        v29 = XlateObject;
        if ( XlateObject )
          v27 = XlateObject;
        else
          v11 = -1;
      }
      if ( v27 )
      {
        v19 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)this + 496LL));
        if ( v19 )
        {
          LOBYTE(v10) = (*(unsigned int (__fastcall **)(struct _SURFOBJ *, __int64, _QWORD, bool, int, int *, unsigned int, __int64))(*(_QWORD *)a2 + 3272LL))(
                          v19,
                          v18,
                          0LL,
                          a3 != 4119,
                          a4,
                          a5,
                          a6,
                          v16) != 0;
          v11 = 1;
          v21 = a7;
        }
        else
        {
          SURFFAKEOBJ::SURFFAKEOBJ((SURFFAKEOBJ *)v33, *(HDEV *)(v17 + 48), *(struct DHPDEV__ **)(v17 + 24));
          if ( SURFREF::bValid((SURFREF *)v33) )
          {
            v20 = SURFREF::pSurfobj((SURFREF *)v33);
            v21 = a7;
            LOBYTE(v10) = v22(v20, v27, 0LL, a3 != 4119, a4, a5, a6, a7) != 0;
            v11 = 1;
          }
          else
          {
            v11 = -1;
            v21 = a7;
          }
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v33);
        }
        *v21 = v10;
      }
      EXLATEOBJ::vAltUnlock(&v29);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v30);
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v11;
}
