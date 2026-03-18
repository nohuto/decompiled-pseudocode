/*
 * XREFs of ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50
 * Callers:
 *     GreCreateBitmap @ 0x1C005EAE0 (GreCreateBitmap.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C40 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmapInternal(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // [rsp+68h] [rbp-11h] BYREF
  char v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+74h] [rbp-5h]
  _DWORD v14[4]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v15; // [rsp+88h] [rbp+Fh]
  __int64 v16; // [rsp+90h] [rbp+17h]
  _BYTE v17[32]; // [rsp+98h] [rbp+1Fh] BYREF
  int v19; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( (int)a1 <= 0 || (unsigned int)a1 > 0x7FFFFFF || a2 <= 0 || a3 > 0x20 || a4 > 0x20 || v6 > 0x20 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v14[3] = 0;
    v16 = 1LL;
    v14[1] = a1;
    v14[2] = a2;
    v15 = 0LL;
    if ( v6 > 1 )
    {
      v7 = 4;
      if ( v6 <= 4 )
      {
        v7 = 2;
      }
      else if ( v6 <= 8 )
      {
        v7 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v7 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v7 = 1;
      v15 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6024LL);
    }
    v14[0] = v7;
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v14, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v11 )
    {
      v8 = a5;
      *(_DWORD *)(v11 + 112) |= 0x4000000u;
      if ( *(_QWORD *)v8 )
      {
        v19 = 0;
        if ( qword_1C0294CD8 )
        {
          if ( (int)qword_1C0294CD8() >= 0 && qword_1C0294CE0 )
            qword_1C0294CE0(
              *(_QWORD *)(v11 + 32),
              (unsigned int)(*(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 16)),
              *(_QWORD *)v8 + *(_QWORD *)(v8 + 16),
              &v19);
        }
      }
      if ( v7 != 1 )
      {
        *(_DWORD *)(v11 + 112) |= 0x800000u;
        *(_DWORD *)(v11 + 112) |= 0x200u;
      }
      v12 |= 1u;
      v9 = *(_QWORD *)(v11 + 32);
      SURFREF::SURFREF((SURFREF *)v17);
      if ( HmgShareLockCheck(v9, 5) )
      {
        if ( (v9 & 0x800000) == 0 )
          HmgSetOwner(v9, -2147483646, 5);
      }
      SURFREF::~SURFREF((SURFREF *)v17);
      v5 = *(_QWORD *)(v11 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
    return v5;
  }
}
