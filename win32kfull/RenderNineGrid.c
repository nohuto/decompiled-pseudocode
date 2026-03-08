/*
 * XREFs of RenderNineGrid @ 0x1C0080A1C
 * Callers:
 *     xxEngNineGrid @ 0x1C00804C8 (xxEngNineGrid.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C001CEF4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C0080D30 (RenderNineGridInternal.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
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
  int v19; // ecx
  int v20; // r8d
  __int64 (__fastcall *v21)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *); // rax
  __int64 (__fastcall *v22)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 (__fastcall *v23)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _DWORD **); // rax
  _DWORD *v26; // [rsp+78h] [rbp-D0h] BYREF
  _QWORD v27[4]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-A8h]
  struct _SURFOBJ *v29; // [rsp+A8h] [rbp-A0h]
  _DWORD *v30; // [rsp+B0h] [rbp-98h]
  _DWORD *v31; // [rsp+B8h] [rbp-90h]
  __int64 v32; // [rsp+C8h] [rbp-80h]
  __int64 v33; // [rsp+D0h] [rbp-78h]
  _QWORD *v34; // [rsp+D8h] [rbp-70h]
  __int64 v35; // [rsp+E0h] [rbp-68h] BYREF
  int v36; // [rsp+E8h] [rbp-60h]
  int v37; // [rsp+ECh] [rbp-5Ch]
  _DWORD v38[2]; // [rsp+F0h] [rbp-58h] BYREF
  int v39; // [rsp+F8h] [rbp-50h]
  int v40; // [rsp+FCh] [rbp-4Ch]

  v35 = a2;
  v29 = a1;
  v32 = a3;
  v33 = a4;
  v28 = a8;
  v13 = (__int64)a9;
  v34 = a10;
  v14 = a11 && (*a9 & 0x10) != 0;
  v15 = *a5;
  v38[0] = *a5;
  v31 = a5 + 1;
  v38[1] = a5[1];
  v30 = a5 + 2;
  v16 = a5[2];
  v39 = v16;
  v26 = a5 + 3;
  v40 = a5[3];
  if ( v14 )
  {
    v19 = a7[2];
    v20 = *a7;
    v39 = v19 + *a7 - v15;
    v38[0] = v19 + v20 - v16;
    v13 = (__int64)a9;
  }
  RenderNineGridInternal(a3, v35, (unsigned int)v38, (_DWORD)a7, v28, v13, (_DWORD)a10, v14);
  v35 = 0LL;
  v36 = a5[2] - *a5;
  v37 = *v26 - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v27[0] = 33488896LL;
    v27[3] = a10[6];
    v27[2] = a10[5];
    v27[1] = a10[4];
    if ( a1->iType != 1 )
      goto LABEL_7;
    if ( bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
    {
      v21 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
      return v21(a1, a3, a4, a6, a5, &v35, v27);
    }
    if ( a1->iType != 1
      || !bAllowShareAccess(a1)
      || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
      && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
    {
LABEL_7:
      if ( ((__int64)a1[1].hsurf & 0x10000) != 0 )
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v35,
                 v27);
    }
    return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _QWORD *))EngAlphaBlend)(
             a1,
             a3,
             a4,
             a6,
             a5,
             &v35,
             v27);
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
        v22 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
        return v22(a1, a3, a4, a6, a5, &v35, a9[5], 0);
      }
      else if ( a1->iType == 1
             && bAllowShareAccess(a1)
             && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
             || ((__int64)a1[1].hsurf & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v35,
                 a9[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 168))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v35,
                 a9[5],
                 0);
      }
    }
    else
    {
      v26 = 0LL;
      if ( iType == 1
        && bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        v23 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _DWORD **))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
        return v23(a1, a3, a4, a6, a5, &v26);
      }
      else if ( a1->iType == 1
             && bAllowShareAccess(a1)
             && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
             || ((__int64)a1[1].hsurf & 0x400) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _DWORD **))EngCopyBits)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v26);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, _DWORD **))a1->hdev + 164))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v26);
      }
    }
  }
}
