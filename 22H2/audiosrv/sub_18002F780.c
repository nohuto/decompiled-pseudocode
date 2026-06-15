/*
 * XREFs of sub_18002F780 @ 0x18002F780
 * Callers:
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 * Callees:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 *     sub_1800E70B0 @ 0x1800E70B0 (sub_1800E70B0.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002F780(
        __int64 a1,
        IMalloc *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  LPMALLOC v11; // rbp
  __int64 v13; // rcx
  int v14; // r13d
  IMalloc *v15; // rax
  IMalloc *v16; // r14
  IMalloc *v17; // rbx
  struct IMallocVtbl *v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r12
  _WORD *v21; // rax
  _WORD *v22; // r9
  unsigned __int64 v23; // rax
  _WORD *v24; // rdx
  int v25; // r10d
  __int64 v26; // r8
  unsigned __int64 v27; // rdi
  char *v28; // rsi
  __int16 v29; // cx
  unsigned __int64 v30; // r12
  struct IMallocVtbl *v31; // rax
  __int64 Release_low; // rdi
  struct IMallocVtbl *v33; // rsi
  size_t v34; // rbp
  struct IMallocVtbl *v35; // rax
  __int64 v36; // rdi
  struct IMallocVtbl *v37; // rsi
  size_t v38; // rbx
  __int64 v39; // r8
  int v40; // ebp
  int v41; // eax
  IUnknown *v42; // rcx
  IUnknown *v43; // rbx
  IMalloc *v44; // rax
  IMalloc *v45; // rdi
  __int64 *v46; // rsi
  int v47; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v49; // rax
  __int64 *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // r14
  IUnknown *v53; // rcx
  struct IMallocVtbl *lpVtbl; // r8
  DWORD LastError; // ebx
  LPMALLOC ppMalloc[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v58; // [rsp+80h] [rbp-68h] BYREF
  __int128 v59[5]; // [rsp+90h] [rbp-58h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  IUnknown *v61; // [rsp+F0h] [rbp+8h] BYREF
  LPMALLOC v62; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v63; // [rsp+100h] [rbp+18h]
  LPVOID pv; // [rsp+108h] [rbp+20h] BYREF

  v63 = a3;
  v62 = a2;
  v11 = a2;
  v13 = *(_QWORD *)(a1 + 112);
  if ( v13 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v13 = *(_QWORD *)(a1 + 112);
    }
    *(_QWORD *)(a1 + 112) = a4;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = 0;
  pv = 0LL;
  (*(void (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a3 + 16) + 40LL))(*(_QWORD *)(a3 + 16), &pv);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    lpVtbl = v11[2].lpVtbl;
    sub_1800E70B0(
      *((_QWORD *)off_18019C348 + 2),
      WORD1(lpVtbl->QueryInterface),
      (_DWORD)lpVtbl,
      (_DWORD)pv,
      HIDWORD(lpVtbl->QueryInterface),
      WORD1(lpVtbl->QueryInterface),
      HIWORD(lpVtbl->AddRef));
  }
  v15 = (IMalloc *)sub_18006A18C(96LL, &unk_18019F848);
  v16 = v15;
  if ( v15 )
  {
    *(_OWORD *)&v15->lpVtbl = 0LL;
    *(_OWORD *)&v15[2].lpVtbl = 0LL;
    *(_OWORD *)&v15[4].lpVtbl = 0LL;
    *(_OWORD *)&v15[6].lpVtbl = 0LL;
    *(_OWORD *)&v15[8].lpVtbl = 0LL;
    *(_OWORD *)&v15[10].lpVtbl = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = v16;
  *(_QWORD *)&v58 = v16;
  v18 = v11->lpVtbl;
  v19 = -1LL;
  do
    ++v19;
  while ( *((_WORD *)&v18->QueryInterface + v19) );
  v16->lpVtbl = 0LL;
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v14 = -2147024362;
  }
  else
  {
    if ( !is_mul_ok(v20, 2uLL) )
    {
      v14 = -2147024362;
      goto LABEL_27;
    }
    v21 = CoTaskMemAlloc(2 * v20);
    v22 = v21;
    v16->lpVtbl = (struct IMallocVtbl *)v21;
    if ( v21 )
    {
      if ( v20 <= 0x7FFFFFFF )
      {
        if ( v19 < 0x7FFFFFFF )
        {
          if ( !v18 )
          {
            v18 = (struct IMallocVtbl *)&unk_18015C744;
            v19 = 0LL;
          }
          if ( v20 )
          {
            v23 = v20;
            v24 = v22;
            v25 = 0;
            v26 = 0LL;
            v27 = v19 - v20;
            v28 = (char *)((char *)v18 - (char *)v22);
            while ( v27 + v23 )
            {
              v29 = *(_WORD *)&v28[(_QWORD)v24];
              if ( !v29 )
                break;
              *v24++ = v29;
              ++v26;
              if ( !--v23 )
              {
                --v24;
                --v26;
                v25 = -2147024774;
                break;
              }
            }
            *v24 = 0;
            v30 = v20 - v26;
            if ( v25 >= 0 && v30 > 1 && 2 * v30 > 2 )
              memset(&v22[v26 + 1], 0, 2 * v30 - 2);
          }
LABEL_27:
          if ( v14 < 0 )
            goto LABEL_39;
          v31 = v11[2].lpVtbl;
          if ( v31 )
          {
            Release_low = LOWORD(v31->Release);
            v33 = (struct IMallocVtbl *)CoTaskMemAlloc(Release_low + 18);
            v16[2].lpVtbl = v33;
            if ( !v33 )
            {
LABEL_69:
              v14 = -2147024882;
              goto LABEL_39;
            }
            v34 = 0LL;
            if ( CoGetMalloc(1u, ppMalloc) >= 0 )
            {
              v34 = ((__int64 (__fastcall *)(LPMALLOC, struct IMallocVtbl *))ppMalloc[0]->lpVtbl->GetSize)(
                      ppMalloc[0],
                      v33);
              ((void (__fastcall *)(LPMALLOC))ppMalloc[0]->lpVtbl->Release)(ppMalloc[0]);
            }
            memset(v16[2].lpVtbl, 0, v34);
            v14 = 0;
            v11 = v62;
            memcpy(v16[2].lpVtbl, v62[2].lpVtbl, Release_low + 18);
          }
          v35 = v11[3].lpVtbl;
          if ( !v35 )
          {
LABEL_38:
            *(_OWORD *)&v16[8].lpVtbl = *(_OWORD *)&v11[8].lpVtbl;
            *(_OWORD *)&v16[6].lpVtbl = *(_OWORD *)&v11[6].lpVtbl;
            LODWORD(v16[1].lpVtbl) = v11[1].lpVtbl;
            v16[4].lpVtbl = v11[4].lpVtbl;
            v16[5].lpVtbl = v11[5].lpVtbl;
            *(_OWORD *)&v16[10].lpVtbl = *(_OWORD *)&v11[10].lpVtbl;
            v17 = 0LL;
            *(_QWORD *)(a1 + 48) = v16;
            goto LABEL_39;
          }
          v36 = LOWORD(v35->Release);
          v37 = (struct IMallocVtbl *)CoTaskMemAlloc(v36 + 18);
          v16[3].lpVtbl = v37;
          if ( v37 )
          {
            v38 = 0LL;
            if ( CoGetMalloc(1u, &v62) >= 0 )
            {
              v38 = ((__int64 (__fastcall *)(LPMALLOC, struct IMallocVtbl *))v62->lpVtbl->GetSize)(v62, v37);
              ((void (__fastcall *)(LPMALLOC))v62->lpVtbl->Release)(v62);
            }
            memset(v16[3].lpVtbl, 0, v38);
            v14 = 0;
            memcpy(v16[3].lpVtbl, v11[3].lpVtbl, v36 + 18);
            goto LABEL_38;
          }
          goto LABEL_69;
        }
        if ( v19 == -1LL )
          goto LABEL_27;
      }
      *v21 = 0;
      goto LABEL_27;
    }
    v14 = -2147024882;
  }
LABEL_39:
  if ( v17 )
    sub_1800E3CDC(v17);
  if ( v14 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2031LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v14);
  }
  else
  {
    v61 = 0LL;
    v39 = *(_QWORD *)(a1 + 48);
    v58 = *(_OWORD *)(v39 + 80);
    *(_OWORD *)ppMalloc = *(_OWORD *)(v39 + 64);
    v59[0] = *(_OWORD *)(v39 + 48);
    v40 = a5;
    v41 = sub_180023540(
            v63,
            a5,
            a6,
            *(_DWORD *)(v39 + 8),
            v59,
            (struct _RTL_CRITICAL_SECTION *)ppMalloc,
            *(_QWORD *)(v39 + 32),
            *(_QWORD *)(v39 + 40),
            *(unsigned __int16 **)(v39 + 16),
            *(_QWORD *)(v39 + 24),
            &v58,
            a8,
            a9,
            &v61);
    v14 = v41;
    if ( v41 < 0 )
    {
      sub_18004BD84(
        retaddr,
        2036LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v41);
    }
    else
    {
      v42 = *(IUnknown **)(a1 + 80);
      v43 = v61;
      if ( v42 != v61 )
      {
        if ( v61 )
        {
          ((void (__fastcall *)(IUnknown *))v61->lpVtbl->AddRef)(v61);
          v42 = *(IUnknown **)(a1 + 80);
        }
        *(_QWORD *)(a1 + 80) = v43;
        if ( v42 )
          ((void (__fastcall *)(IUnknown *))v42->lpVtbl->Release)(v42);
      }
      v44 = (IMalloc *)sub_18006A18C(64LL, &unk_18019F848);
      v45 = v44;
      v62 = v44;
      v46 = (__int64 *)a7;
      if ( v44 )
      {
        v47 = *(_DWORD *)(a7 + 8);
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v44, 0, 0);
        v45[5].lpVtbl = 0LL;
        v45[6].lpVtbl = 0LL;
        ProcessHeap = GetProcessHeap();
        v49 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
        *v49 = v49;
        v49[1] = v49;
        v49[2] = v49;
        *((_WORD *)v49 + 12) = 257;
        v45[5].lpVtbl = (struct IMallocVtbl *)v49;
        LODWORD(v45[7].lpVtbl) = v47;
      }
      else
      {
        v45 = 0LL;
      }
      *(_QWORD *)(a1 + 56) = v45;
      if ( v45 )
      {
        *(_BYTE *)(a1 + 72) = v40 == 1;
        v50 = (__int64 *)(a1 + 64);
        if ( (__int64 *)(a1 + 64) != v46 )
        {
          v51 = *v46;
          v52 = *v50;
          if ( *v50 )
          {
            LastError = GetLastError();
            sub_1800ED08C(v52);
            SetLastError(LastError);
          }
          *v50 = v51;
          *v46 = 0LL;
        }
        v14 = 0;
      }
      else
      {
        sub_18004BD84(
          retaddr,
          2041LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          2147942414LL);
        v14 = -2147024882;
      }
    }
    v53 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      ((void (__fastcall *)(IUnknown *))v53->lpVtbl->Release)(v53);
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v14;
}
