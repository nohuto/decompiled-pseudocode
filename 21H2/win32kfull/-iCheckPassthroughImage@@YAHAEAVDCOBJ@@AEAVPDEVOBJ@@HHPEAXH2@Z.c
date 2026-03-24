/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0159EB4
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00A8FFC (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0087360 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00B59BC (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C015A224 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1C016B364 (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C016B450 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026D1C4 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026D1F0 (-pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        int a4,
        int *a5,
        unsigned int a6,
        void *a7)
{
  int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // r11
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  _DWORD *XlateObject; // rax
  __int64 v20; // r10
  struct _SURFOBJ *v21; // rax
  _DWORD *v22; // rbx
  unsigned int (__fastcall *v23)(struct _SURFOBJ *, _DWORD *, _QWORD); // r10
  _DWORD *v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  _DWORD *v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+70h] [rbp-98h]
  int v30; // [rsp+78h] [rbp-90h]
  _BYTE v31[112]; // [rsp+80h] [rbp-88h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 8;
  if ( a3 == 8 )
  {
    v30 = *a5;
    if ( v30 == 4119 )
    {
      if ( !(unsigned int)XDCOBJ::bSupportsJPEG(this) )
        return v11;
      v13 = *(_QWORD *)a2;
    }
    else
    {
      v14 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) == 0 || *(_DWORD *)(v14 + 32) == 1 )
        return v11;
      v13 = *(_QWORD *)a2;
    }
    if ( *(_QWORD *)(v13 + 3296) )
      return 1;
  }
  else if ( *(_QWORD *)(*(_QWORD *)a2 + 3296LL) )
  {
    if ( a6 >= 4 && (v15 = a7) != 0LL )
    {
      v16 = *(_QWORD *)this;
      v17 = *(_QWORD *)(*(_QWORD *)this + 496LL);
      if ( v17 )
        v26 = *(_QWORD *)(v17 + 128);
      else
        v26 = 0LL;
      v18 = *(_QWORD *)(v16 + 88);
      v29 = 0;
      v28 = 0LL;
      v25 = 0LL;
      v27 = 0LL;
      if ( a3 == 4119 && (unsigned int)XDCOBJ::bSupportsJPEG(this)
        || a3 == 4120
        && ((unsigned __int8)*(_DWORD *)(v16 + 76) & (unsigned __int8)v12) != 0
        && *(_DWORD *)(v16 + 32) != 1 )
      {
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v28, v12, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          XlateObject = CreateXlateObject(
                          *(void **)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 248LL),
                          *(_DWORD *)(*(_QWORD *)this + 120LL),
                          v28,
                          v26,
                          v18,
                          v18,
                          0,
                          0,
                          0xFFFFFFu,
                          0);
          v27 = XlateObject;
          v15 = a7;
          if ( XlateObject )
            v25 = XlateObject;
          else
            v11 = -1;
        }
        else
        {
          v15 = a7;
        }
      }
      if ( v25 )
      {
        v20 = (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL);
        if ( v20 )
        {
          LOBYTE(v10) = (*(unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD, bool, int, int *, unsigned int, void *))(*(_QWORD *)a2 + 3296LL))(
                          v20,
                          v25,
                          0LL,
                          a3 != 4119,
                          a4,
                          a5,
                          a6,
                          v15) != 0;
          v11 = 1;
          v22 = a7;
        }
        else
        {
          SURFFAKEOBJ::SURFFAKEOBJ(
            (SURFFAKEOBJ *)v31,
            *(HDEV *)(*(_QWORD *)this + 48LL),
            *(struct DHPDEV__ **)(*(_QWORD *)this + 24LL));
          if ( (unsigned int)SURFREF::bValid((SURFREF *)v31) )
          {
            v21 = SURFREF::pSurfobj((SURFREF *)v31);
            v22 = a7;
            LOBYTE(v10) = v23(v21, v25, 0LL) != 0;
            v11 = 1;
          }
          else
          {
            v11 = -1;
            v22 = a7;
          }
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v31);
        }
        *v22 = v10;
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v27, (__int64)a2);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v28);
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v11;
}
