/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C01E9654
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01E984C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  unsigned int v7; // ecx
  const void **v8; // rdi
  char *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned __int64 v13; // rax
  void *v14; // rsi
  bool v15; // zf
  unsigned __int64 v16; // rax
  void *v17; // rax
  void *v18; // rsi
  const void *v19; // rdx
  __int64 v20; // rbp
  const wchar_t *v21; // r9
  void *v22; // rcx

  v4 = *((_DWORD *)this + 4) + 1;
  v5 = a3;
  *((_DWORD *)this + 4) = v4;
  v7 = *((_DWORD *)this + 6);
  v8 = (const void **)((char *)this + 8);
  if ( v4 <= v7 )
    goto LABEL_2;
  v13 = 44LL * (v7 + 500);
  if ( !is_mul_ok(v7 + 500, 0x2CuLL) )
    v13 = -1LL;
  v14 = (void *)operator new[](v13, 0x4B677844u, 256LL);
  if ( v14 )
  {
    if ( *v8 )
    {
      memmove(v14, *v8, 44LL * *((unsigned int *)this + 6));
      operator delete((void *)*v8);
    }
    v15 = *((_BYTE *)this + 28) == 0;
    *v8 = v14;
    if ( v15 )
      goto LABEL_20;
    v16 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v16 = -1LL;
    v17 = (void *)operator new[](v16, 0x4B677844u, 256LL);
    v18 = v17;
    if ( v17 )
    {
      v19 = (const void *)*((_QWORD *)this + 4);
      if ( v19 )
      {
        memmove(v17, v19, 4LL * *((unsigned int *)this + 6));
        operator delete(*((void **)this + 4));
      }
      *((_QWORD *)this + 4) = v18;
LABEL_20:
      *((_DWORD *)this + 6) += 500;
LABEL_2:
      v9 = (char *)*v8;
      v10 = 44LL * (unsigned int)(*((_DWORD *)this + 4) - 1);
      *(_OWORD *)&v9[v10] = *(_OWORD *)&a2->Width;
      *(_OWORD *)&v9[v10 + 16] = *(_OWORD *)&a2->RefreshRate.Numerator;
      *(_QWORD *)&v9[v10 + 32] = *(_QWORD *)&a2->DisplayFixedOutput;
      *(_DWORD *)&v9[v10 + 40] = *((_DWORD *)&a2->Flags + 1);
      if ( *((_BYTE *)this + 28) )
      {
        if ( *((_DWORD *)this + 4) - (int)v5 - 1 > 0 )
          memmove(
            (void *)(*((_QWORD *)this + 4) + 4 * v5 + 4),
            (const void *)(*((_QWORD *)this + 4) + 4 * v5),
            4LL * (*((_DWORD *)this + 4) - (int)v5 - 1));
        *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v5) = *((_DWORD *)this + 4) - 1;
      }
      return 0;
    }
    v20 = 1947LL;
    WdLogSingleEntry1(6LL, 1947LL);
    v21 = L"unable to allocate memory for display mode index.";
  }
  else
  {
    v20 = 1919LL;
    WdLogSingleEntry1(6LL, 1919LL);
    v21 = L"unable to allocate memory for display mode list.";
  }
  v11 = -1073741801;
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v21, v20, 0LL, 0LL, 0LL, 0LL);
  v22 = (void *)*((_QWORD *)this + 4);
  if ( v22 )
  {
    operator delete(v22);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *v8 )
  {
    operator delete((void *)*v8);
    *v8 = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return v11;
}
