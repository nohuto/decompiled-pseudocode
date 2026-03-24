/*
 * XREFs of GreCreateBitmap @ 0x1C00271A0
 * Callers:
 *     ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00C9D20 (-GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ.c)
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C029A888 (bInitBMOBJ.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00267F0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C002DBE0 (HmgShareLockCheck.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00306C0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0035470 (HmgSetOwner.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C013F6E4 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r10d
  unsigned __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // eax
  __int64 v14; // [rsp+68h] [rbp-11h] BYREF
  char v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+74h] [rbp-5h]
  _DWORD v17[4]; // [rsp+78h] [rbp-1h] BYREF
  HPALETTE v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  _BYTE v20[32]; // [rsp+98h] [rbp+1Fh] BYREF
  int v22; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v7 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v7 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v17[3] = 0;
    v19 = 1LL;
    v17[1] = a1;
    v17[2] = a2;
    v18 = 0LL;
    if ( v6 > 1 )
    {
      v8 = 4;
      if ( v6 <= 4 )
      {
        v8 = 2;
      }
      else if ( v6 <= 8 )
      {
        v8 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v8 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v8 = 1;
      v18 = hpalMono;
    }
    v17[0] = v8;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v22 = 0;
        v13 = qword_1C02568D0 ? qword_1C02568D0() : -1073741637;
        if ( v13 >= 0 && qword_1C02568D8 )
          qword_1C02568D8(*(_QWORD *)(v14 + 32), (unsigned int)v7, a5, &v22);
      }
      if ( v8 != 1 )
      {
        *(_DWORD *)(v14 + 112) |= 0x800000u;
        *(_DWORD *)(v14 + 112) |= 0x200u;
      }
      v15 |= 1u;
      v9 = *(_QWORD *)(v14 + 32);
      SURFREF::SURFREF((SURFREF *)v20);
      LOBYTE(v10) = 5;
      if ( HmgShareLockCheck(v9, v10) )
      {
        if ( (v9 & 0x800000) == 0 )
        {
          LOBYTE(v11) = 5;
          HmgSetOwner(v9, 2147483650LL, v11);
        }
      }
      SURFREF::~SURFREF((SURFREF *)v20);
      v5 = *(_QWORD *)(v14 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v14);
    return v5;
  }
}
