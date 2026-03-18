/*
 * XREFs of RenderNineGrid @ 0x1C00D7F28
 * Callers:
 *     xxEngNineGrid @ 0x1C00D7A18 (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00D8290 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  __int64 v13; // rcx
  BOOL v14; // edx
  int v15; // r9d
  int v16; // r10d
  USHORT iType; // ax
  __int64 (__fastcall *v19)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, POINTL *); // rax
  int v20; // ecx
  int v21; // r8d
  __int64 (__fastcall *v22)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *); // rax
  __int64 (__fastcall *v23)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD); // rax
  _QWORD v26[4]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+88h] [rbp-A0h]
  struct _SURFOBJ *v28; // [rsp+90h] [rbp-98h]
  __int64 v29; // [rsp+A0h] [rbp-88h]
  __int64 v30; // [rsp+A8h] [rbp-80h]
  _DWORD *v31; // [rsp+B0h] [rbp-78h]
  _DWORD *v32; // [rsp+B8h] [rbp-70h]
  _QWORD *v33; // [rsp+C0h] [rbp-68h]
  __int64 v34; // [rsp+C8h] [rbp-60h] BYREF
  int v35; // [rsp+D0h] [rbp-58h]
  int v36; // [rsp+D4h] [rbp-54h]
  _DWORD v37[2]; // [rsp+D8h] [rbp-50h] BYREF
  int v38; // [rsp+E0h] [rbp-48h]
  int v39; // [rsp+E4h] [rbp-44h]

  v34 = a2;
  v28 = a1;
  v29 = a3;
  v30 = a4;
  v31 = a5;
  v13 = a8;
  v27 = a8;
  v32 = a9;
  v33 = a10;
  v14 = a11 && (*a9 & 0x10) != 0;
  v15 = *a5;
  v37[0] = *a5;
  v37[1] = a5[1];
  v16 = a5[2];
  v38 = v16;
  v39 = a5[3];
  if ( v14 )
  {
    v20 = a7[2];
    v21 = *a7;
    v38 = v20 + *a7 - v15;
    v37[0] = v20 + v21 - v16;
    v13 = v27;
  }
  RenderNineGridInternal(a3, v34, (unsigned int)v37, (_DWORD)a7, v13, (__int64)a9, (_DWORD)a10, v14);
  v34 = 0LL;
  v35 = a5[2] - *a5;
  v36 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v26[0] = 33488896LL;
    v26[3] = a10[6];
    v26[2] = a10[5];
    v26[1] = a10[4];
    if ( a1->iType != 1 )
      goto LABEL_13;
    if ( (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
    {
      v22 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
      return v22(a1, a3, a4, a6, a5, &v34, v26);
    }
    if ( a1->iType != 1
      || !(unsigned int)bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
    {
LABEL_13:
      if ( ((__int64)a1[1].hsurf & 0x10000) != 0 )
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v34,
                 v26);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _QWORD *))EngAlphaBlend)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v34,
             v26);
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
        v23 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
        return v23(a1, a3, a4, a6, a5, &v34, a9[5], 0);
      }
      else if ( a1->iType == 1
             && (unsigned int)bAllowShareAccess(a1)
             && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
             || ((__int64)a1[1].hsurf & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v34,
                 a9[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 168))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v34,
                 a9[5],
                 0);
      }
    }
    else if ( iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
           && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
    {
      v19 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
      return v19(a1, a3, a4, a6, a5, &gptlZero);
    }
    else if ( a1->iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
           || ((__int64)a1[1].hsurf & 0x400) == 0 )
    {
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, POINTL *))EngCopyBits)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
    else
    {
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, _DWORD *, POINTL *))a1->hdev + 164))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
  }
}
