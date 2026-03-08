/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E870
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  bool v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  const void *v19; // rdx
  int v21; // ecx
  int v22; // ecx

  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v21 = *((_DWORD *)this + 12) - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
          *((_DWORD *)this + 20) = 124;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v6;
        *((_DWORD *)this + 20) = 8;
      }
    }
    else if ( *((_DWORD *)this + 20) )
    {
      return 3221225659LL;
    }
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = *((_DWORD *)this + 20);
  v10 = *((_QWORD *)this + 8) != 0LL ? 0x40 : 0;
  if ( v10 + 7 < v10 )
  {
    v13 = 0;
  }
  else
  {
    v7 = (v10 + 7) & 0xFFFFFFF8;
    v11 = v9 + 7;
    v12 = -1;
    if ( v9 + 7 >= v9 )
      v12 = v9 + 7;
    v13 = v11 >= v9;
    v14 = v12 & 0xFFFFFFF8;
    v8 = 0;
    if ( v11 >= v9 )
      v8 = v14;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( v8 + (unsigned int)v7 < (unsigned int)v7 )
    return 3221225495LL;
  v15 = v8 + v7 + 80;
  if ( v15 < 0x50 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v16 = UmfdTls::CommitUMBuffer(a2, v8 + (unsigned int)v7 + 128, 1);
  v17 = v16;
  if ( !v16 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v16 + 12;
  *((_QWORD *)this + 12) = v16 + 32;
  *((_QWORD *)this + 13) = (char *)v16 + v7 + 128;
  v18 = *((_QWORD *)this + 7);
  v16[12] = *(_DWORD *)v18;
  v16[13] = *(_DWORD *)(v18 + 4);
  v16[14] = *(_DWORD *)(v18 + 8);
  v16[15] = *(_DWORD *)(v18 + 12);
  *((_QWORD *)v16 + 8) = *(_QWORD *)(v18 + 16);
  *((_QWORD *)v16 + 9) = **(_QWORD **)(v18 + 24);
  *((_QWORD *)v16 + 10) = *(_QWORD *)(v18 + 32);
  v16[22] = *(_DWORD *)(v18 + 40);
  *((_QWORD *)v16 + 12) = 0LL;
  *((_QWORD *)v16 + 13) = *(_QWORD *)(v18 + 56);
  *((_QWORD *)a2 + 5) = v18;
  *(_DWORD *)(*((_QWORD *)this + 11) + 64LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = 0LL;
  *((_QWORD *)v16 + 2) = *((_QWORD *)this + 11);
  *(_QWORD *)v16 = *((_QWORD *)this + 5);
  v16[2] = *((_DWORD *)this + 12);
  v16[3] = *((_DWORD *)this + 13);
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)v16 + 3) = *((_QWORD *)this + 12);
  v19 = (const void *)*((_QWORD *)this + 9);
  if ( v19 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v19, *((unsigned int *)this + 20));
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v17[4] = *((_QWORD *)this + 13);
  *((_DWORD *)v17 + 10) = *((_DWORD *)this + 20);
  *a3 = v17;
  return 0LL;
}
