/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C008BC60
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        struct XDCOBJ *this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r10
  int v22; // r8d
  int v23; // ecx
  struct ECLIPOBJ *v24; // rdx
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // r10
  unsigned int *v28; // rcx
  __int64 v29; // r10
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebp
  unsigned int v33; // r14d
  __int64 v34; // r9
  _DWORD *v37; // rbp
  DC *v38; // r10
  struct REGION *v39; // rax
  int v40; // eax
  ULONG v41; // ecx
  __int64 v42; // [rsp+20h] [rbp-88h]
  _DWORD *v43; // [rsp+60h] [rbp-48h]
  __m128i v44[4]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+10h]

  v43 = 0LL;
  v12 = 1;
  if ( ((*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28)) && _bittest16((const signed __int16 *)a5 + 51, 9u) )
    goto LABEL_42;
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81), a2, a3);
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_8;
    v14 = UserScreenAccessCheck(this, a2, a3);
  }
  if ( !v14 )
  {
LABEL_42:
    v41 = 5;
LABEL_43:
    EngSetLastError(v41);
    return 0LL;
  }
LABEL_8:
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
  {
    v41 = 87;
    goto LABEL_43;
  }
  v15 = *(int *)a3;
  v16 = *(_QWORD *)this + 8LL * (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1);
  v17 = *(int *)(v16 + 1016);
  if ( (unsigned __int64)(v17 + v15 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v18 = *((int *)a3 + 2);
    if ( (unsigned __int64)(v17 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = *(int *)(v16 + 1020);
      v20 = *((int *)a3 + 1);
      if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v21 = *((int *)a3 + 3);
        if ( (unsigned __int64)(v19 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v22 = v15 + v17;
          *(_DWORD *)a3 = v22;
          *((_DWORD *)a3 + 2) = v18 + *(_DWORD *)(v16 + 1016);
          *((_DWORD *)a3 + 1) = v20 + *(_DWORD *)(v16 + 1020);
          v23 = *(_DWORD *)(v16 + 1020);
          v24 = (struct ECLIPOBJ *)*((unsigned int *)a3 + 2);
          v25 = v21 + v23;
          *((_DWORD *)a3 + 3) = v25;
          if ( v22 < (int)v24 )
          {
            v26 = *((_DWORD *)a3 + 1);
            if ( v26 < v25 )
            {
              if ( (v27 = *(_DWORD **)this, v22 >= *(_DWORD *)(*(_QWORD *)this + 1000LL))
                && (int)v24 <= v27[252]
                && v26 >= v27[251]
                && v25 <= v27[253]
                || ((v37 = v27 + 442, v43 = v27 + 442, DC::prgnRao(*(DC **)this))
                  ? (v39 = DC::prgnRao(v38))
                  : (v39 = DC::prgnVisSnap(v38)),
                    (XCLIPOBJ::vSetup((XCLIPOBJ *)v37, v39, a3, 2),
                     *(_OWORD *)a3 = *(_OWORD *)(v37 + 1),
                     *(_DWORD *)a3 != *((_DWORD *)a3 + 2))
                 && *((_DWORD *)a3 + 1) != *((_DWORD *)a3 + 3)) )
              {
                if ( (((unsigned __int8)a4 ^ (unsigned __int8)(16 * a4)) & 0xF0) != 0 )
                {
                  v28 = *(unsigned int **)(*(_QWORD *)this + 976LL);
                  v29 = *(_QWORD *)this + 1200LL;
                  v45 = v29;
                  v24 = (struct ECLIPOBJ *)v28[38];
                  if ( ((unsigned __int8)v24 & 1) != 0
                    || (*(_DWORD *)(*(_QWORD *)this + 316LL) & 1) != 0
                    || (v40 = *(_DWORD *)(*(_QWORD *)this + 1320LL), (v40 & 1) != 0)
                    && *(_DWORD *)(*(_QWORD *)this + 1248LL) != a6
                    || (v40 & 2) != 0 && *(_DWORD *)(*(_QWORD *)this + 1252LL) != a7 )
                  {
                    v30 = v28[46];
                    v31 = v28[44];
                    v32 = v28[47];
                    v33 = v28[45];
                    v28[38] = (unsigned int)v24 & 0xFFFFFFFE;
                    *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~1u;
                    v42 = *((_QWORD *)a5 + 16);
                    v34 = *(_QWORD *)(*(_QWORD *)this + 88LL);
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = a6;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = a7;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = a8;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = a9;
                    EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 136LL), v34, v42, a5, 1);
                    v29 = v45;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 184LL) = v30;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 176LL) = v31;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 188LL) = v32;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 180LL) = v33;
                  }
                }
                else
                {
                  v29 = 0LL;
                  v45 = 0LL;
                }
                if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0
                  && (!v29 || (*(_DWORD *)(v29 + 120) & 0x100) == 0) )
                {
                  v44[0] = *(__m128i *)a3;
                  XDCOBJ::vAccumulateTight(this, v24, v44);
                }
                ++*((_DWORD *)a5 + 23);
                if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                  return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2808LL))(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v43,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v45,
                                         *(_QWORD *)this + 1192LL,
                                         a4);
                else
                  return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, _DWORD *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v43,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v45,
                                         *(_QWORD *)this + 1192LL,
                                         a4);
              }
            }
          }
        }
      }
    }
  }
  return v12;
}
