/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0043168
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002F598 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        DC **a1,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        __int64 a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // ebp
  DC **v11; // r11
  unsigned int v12; // r12d
  int v13; // eax
  DC *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r10
  int v22; // r9d
  int v23; // ebx
  int v24; // r8d
  int v25; // ecx
  DC *v26; // r10
  unsigned int *v27; // rcx
  char *v28; // r13
  unsigned int v29; // ebx
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebp
  __int64 v33; // r9
  int v36; // eax
  char *v37; // rdi
  DC *v38; // r10
  struct REGION *v39; // rax
  int v40; // eax
  ULONG v41; // ecx
  __int64 v42; // [rsp+20h] [rbp-88h]
  __m128i v43[4]; // [rsp+60h] [rbp-48h] BYREF
  char *v45; // [rsp+B8h] [rbp+10h]
  int v46; // [rsp+C8h] [rbp+20h]

  v46 = a4;
  v9 = a4;
  v45 = 0LL;
  v11 = a1;
  v12 = 1;
  if ( ((*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28)) && _bittest16((const signed __int16 *)a5 + 51, 9u) )
    goto LABEL_43;
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v36 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81));
    goto LABEL_25;
  }
  if ( (v13 & 0x10000000) != 0 )
  {
    v36 = UserScreenAccessCheck(a1, a2, a3, a4);
LABEL_25:
    if ( v36 )
    {
      v11 = a1;
      goto LABEL_5;
    }
LABEL_43:
    v41 = 5;
    goto LABEL_44;
  }
LABEL_5:
  v14 = *v11;
  if ( (*((_DWORD *)*v11 + 9) & 0x10000) == 0 )
  {
    v15 = *(int *)a3;
    v16 = *((_DWORD *)v14 + 10) & 1LL;
    v17 = *((int *)v14 + 2 * v16 + 254);
    if ( (unsigned __int64)(v17 + v15 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v18 = *((int *)a3 + 2);
      if ( (unsigned __int64)(v17 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v19 = *((int *)v14 + 2 * v16 + 255);
        v20 = *((int *)a3 + 1);
        if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v21 = *((int *)a3 + 3);
          if ( (unsigned __int64)(v19 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v22 = v15 + v17;
            *(_DWORD *)a3 = v22;
            v23 = *((_DWORD *)v14 + 2 * v16 + 254) + v18;
            *((_DWORD *)a3 + 2) = v23;
            v24 = v20 + *((_DWORD *)v14 + 2 * v16 + 255);
            *((_DWORD *)a3 + 1) = v24;
            v25 = v21 + *((_DWORD *)v14 + 2 * v16 + 255);
            *((_DWORD *)a3 + 3) = v25;
            if ( v22 < v23 && v24 < v25 )
            {
              v26 = *v11;
              if ( v22 >= *((_DWORD *)*v11 + 250)
                && v23 <= *((_DWORD *)v26 + 252)
                && v24 >= *((_DWORD *)v26 + 251)
                && v25 <= *((_DWORD *)v26 + 253) )
              {
                goto LABEL_16;
              }
              v37 = (char *)v26 + 1768;
              v45 = (char *)v26 + 1768;
              if ( DC::prgnRao(*v11) )
                v39 = DC::prgnRao(v38);
              else
                v39 = DC::prgnVisSnap(v38);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v37, v39, a3, 2);
              *(_OWORD *)a3 = *(_OWORD *)(v37 + 4);
              if ( *(_DWORD *)a3 != *((_DWORD *)a3 + 2) && *((_DWORD *)a3 + 1) != *((_DWORD *)a3 + 3) )
              {
                v11 = a1;
                v26 = *a1;
LABEL_16:
                if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
                {
                  v27 = (unsigned int *)*((_QWORD *)v26 + 122);
                  v28 = (char *)v26 + 1200;
                  v16 = v27[38];
                  if ( (v16 & 1) != 0
                    || (*((_DWORD *)v26 + 79) & 1) != 0
                    || (v40 = *((_DWORD *)v26 + 330), (v40 & 1) != 0) && *((_DWORD *)v26 + 312) != a6
                    || (v40 & 2) != 0 && *((_DWORD *)v26 + 313) != a7 )
                  {
                    v29 = v27[46];
                    v30 = v27[44];
                    v31 = v27[47];
                    v32 = v27[45];
                    v27[38] = v16 & 0xFFFFFFFE;
                    *((_DWORD *)*v11 + 79) &= ~1u;
                    v42 = *((_QWORD *)a5 + 16);
                    v33 = *((_QWORD *)*v11 + 11);
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 184LL) = a6;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 176LL) = a7;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 188LL) = a8;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 180LL) = a9;
                    EBRUSHOBJ::vInitBrush((char *)v26 + 1200, *v11, *((_QWORD *)*v11 + 17), v33, v42, a5, 1);
                    v11 = a1;
                    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 184LL) = v29;
                    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 176LL) = v30;
                    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 188LL) = v31;
                    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 180LL) = v32;
                    v26 = *a1;
                    v9 = v46;
                  }
                }
                else
                {
                  v28 = 0LL;
                }
                if ( (*((_DWORD *)v26 + 9) & 0xE0) != 0 && (!v28 || (*((_DWORD *)v28 + 30) & 0x100) == 0) )
                {
                  v43[0] = *(__m128i *)a3;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v11, (struct ECLIPOBJ *)v16, v43);
                }
                ++*((_DWORD *)a5 + 23);
                if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                  return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, char *, _QWORD, struct ERECTL *, _QWORD, _QWORD, char *, __int64, int))(*((_QWORD *)a5 + 6) + 2808LL))(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v45,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v28,
                                         (__int64)*a1 + 1192,
                                         v9);
                else
                  return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, char *, _QWORD, struct ERECTL *, _QWORD, _QWORD, char *, char *, int))EngBitBlt)(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v45,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v28,
                                         (char *)*a1 + 1192,
                                         v9);
              }
            }
          }
        }
      }
    }
    return v12;
  }
  v41 = 87;
LABEL_44:
  EngSetLastError(v41);
  return 0LL;
}
