__int64 __fastcall COverlayContext::PresentMPO(
        COverlayContext *this,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  unsigned int *v10; // r12
  SIZE_T v11; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  BOOL v18; // ecx
  const void *updated; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  char *v23; // r12
  unsigned int j; // r15d
  __int64 v25; // rdx
  __int64 v26; // rax
  HANDLE v27; // rax
  int v29; // r13d
  LPVOID v30; // r11
  __int64 v31; // rax
  int v32; // r14d
  __int64 v33; // rbx
  __int64 v34; // rax
  int *v35; // r12
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // r10d
  char v39; // r9
  unsigned int v40; // ecx
  _DWORD *v41; // rax
  unsigned int v42; // ecx
  _DWORD *v43; // rax
  unsigned int v44; // r12d
  _DWORD *v45; // r14
  int v46; // r10d
  int v47; // r11d
  int v48; // eax
  char v49; // bl
  __int64 i; // rbx
  _QWORD *v51; // rcx
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // r9
  char *v56; // r8
  __int128 v57; // xmm1
  __int64 v58; // rcx
  _QWORD *v59; // rbx
  __int64 v60; // rdi
  int v61; // [rsp+48h] [rbp-100h]
  int v62; // [rsp+58h] [rbp-F0h]
  int v63; // [rsp+68h] [rbp-E0h]
  char v64; // [rsp+B0h] [rbp-98h]
  unsigned int v65; // [rsp+B4h] [rbp-94h]
  int v66; // [rsp+B4h] [rbp-94h]
  unsigned int v67; // [rsp+B8h] [rbp-90h]
  int v68; // [rsp+BCh] [rbp-8Ch]
  __int64 v69; // [rsp+C0h] [rbp-88h]
  int v70; // [rsp+C0h] [rbp-88h]
  __int64 v71; // [rsp+C8h] [rbp-80h]
  __int64 v72; // [rsp+C8h] [rbp-80h]
  unsigned int v73; // [rsp+D0h] [rbp-78h]
  void *v75; // [rsp+D8h] [rbp-70h]
  unsigned int v77; // [rsp+E8h] [rbp-60h]
  _DWORD *lpMem; // [rsp+F0h] [rbp-58h]
  unsigned int *v79; // [rsp+F8h] [rbp-50h] BYREF
  void *retaddr; // [rsp+148h] [rbp+0h]

  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5);
  v77 = v7;
  LODWORD(v8) = 0;
  v9 = 0;
  v79 = a5;
  v75 = 0LL;
  v65 = 0;
  *a5 = 0;
  COverlayContext::DbgSaveOverlayStateInfoBefore(this);
  if ( !(_DWORD)v7 && !*((_BYTE *)this + 11025) )
  {
    v10 = (unsigned int *)((char *)this + 11280);
    v9 = *((_DWORD *)this + 2820) + 1;
    v11 = 136LL * v9;
    if ( !is_mul_ok(v9, 0x88uLL) )
      v11 = -1LL;
    ProcessHeap = GetProcessHeap();
    lpMem = HeapAlloc(ProcessHeap, 0, v11);
    v13 = lpMem;
    if ( !lpMem )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    memset_0(lpMem, 0, 136LL * v9);
    v16 = 0;
    if ( v9 )
    {
      v15 = (__int64)lpMem;
      do
      {
        *(_DWORD *)v15 = v16++;
        v15 += 136LL;
      }
      while ( v16 < v9 );
    }
    lpMem[1] = 1;
    *(_OWORD *)(lpMem + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(lpMem + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(lpMem + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(lpMem + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(lpMem + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(lpMem + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(lpMem + 30) = *((_OWORD *)this + 688);
    v17 = (__int64)(a4[1] - *a4) >> 4;
    lpMem[21] = v17;
    if ( (_DWORD)v17 )
      *((_QWORD *)lpMem + 11) = *a4;
    goto LABEL_11;
  }
  v29 = v7;
  v67 = v7 + 1;
  v10 = (unsigned int *)((char *)this + 11280);
  if ( (int)v7 + 1 <= (unsigned int)(*((_DWORD *)this + 2820) + 1) )
    v29 = *((_DWORD *)this + 2820);
  v8 = (unsigned int)(v29 + 1);
  lpMem = operator new(saturated_mul(v8, 0x88uLL));
  v13 = lpMem;
  memset_0(lpMem, 0, 136 * v8);
  v30 = operator new(saturated_mul(v8, 4uLL));
  v75 = v30;
  if ( *((_BYTE *)this + 11024) )
  {
    *lpMem = 0;
    lpMem[4] = 0;
    lpMem[1] = 1;
    *(_OWORD *)(lpMem + 6) = *((_OWORD *)this + 682);
    *(_OWORD *)(lpMem + 10) = *((_OWORD *)this + 683);
    *(_OWORD *)(lpMem + 14) = *((_OWORD *)this + 684);
    *(_OWORD *)(lpMem + 18) = *((_OWORD *)this + 685);
    *(_OWORD *)(lpMem + 22) = *((_OWORD *)this + 686);
    *(_OWORD *)(lpMem + 26) = *((_OWORD *)this + 687);
    *(_OWORD *)(lpMem + 30) = *((_OWORD *)this + 688);
    v31 = (__int64)(a4[1] - *a4) >> 4;
    lpMem[21] = v31;
    if ( (_DWORD)v31 )
      *((_QWORD *)lpMem + 11) = *a4;
    goto LABEL_39;
  }
  if ( *((_BYTE *)this + 11296) )
  {
    *lpMem = 0;
    lpMem[1] = 0;
LABEL_39:
    *((_QWORD *)lpMem + 1) = 0LL;
    v9 = 1;
  }
  if ( (_DWORD)v7 )
  {
    v69 = 0LL;
    v32 = 1;
    v33 = 0LL;
    v68 = 1;
    while ( 1 )
    {
      v34 = *((_QWORD *)this + 913);
      v73 = v32;
      if ( *(_BYTE *)(v34 + v33 + 184) )
      {
        v64 = *(_BYTE *)(v34 + v33 + 181);
        v71 = *(_QWORD *)(v34 + v33 + 16);
        *(_DWORD *)(*((_QWORD *)this + 913) + v33 + 188) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 304LL))(v71);
        *(_DWORD *)(*((_QWORD *)this + 913) + v33 + 208) = v32;
        *(_BYTE *)(*((_QWORD *)this + 913) + v33 + 181) = 0;
        *(_DWORD *)(*((_QWORD *)this + 913) + v33 + 216) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 288LL))(v71);
        v35 = &lpMem[34 * v9];
        *v35 = v32;
        v35[1] = 1;
        v36 = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)a2 + 184LL))(
                a2,
                v71,
                v35 + 2,
                v35 + 4);
        v22 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v36, 0xAC1u, 0LL);
          goto LABEL_22;
        }
        v37 = *((_QWORD *)this + 913);
        *(_OWORD *)(v35 + 6) = *(_OWORD *)(v37 + v33 + 32);
        *(_OWORD *)(v35 + 10) = *(_OWORD *)(v37 + v33 + 48);
        *(_OWORD *)(v35 + 14) = *(_OWORD *)(v37 + v33 + 64);
        *(_OWORD *)(v35 + 18) = *(_OWORD *)(v37 + v33 + 80);
        *(_OWORD *)(v35 + 22) = *(_OWORD *)(v37 + v33 + 96);
        *(_OWORD *)(v35 + 26) = *(_OWORD *)(v37 + v33 + 112);
        *(_OWORD *)(v35 + 30) = *(_OWORD *)(v37 + v33 + 128);
        if ( !v64 )
          v35[21] = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v71 + 296LL))(v71, v35 + 22);
        v32 = v68;
        if ( (unsigned int)(v68 - 1) < 2 )
        {
          v15 = (__int64)this + 1104 * *((int *)this + 4490);
          *(_BYTE *)(v15 + v69 + 11816) = 1;
        }
        v30 = v75;
        ++v9;
      }
      else
      {
        *((_DWORD *)v30 + v65) = v32;
        v15 = ++v65;
      }
      v69 += 480LL;
      ++v32;
      v33 += 224LL;
      v68 = v32;
      if ( v73 >= v77 )
      {
        v10 = (unsigned int *)((char *)this + 11280);
        break;
      }
    }
  }
  v38 = v67;
  v14 = 1LL;
  if ( v67 < (unsigned int)v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v39 = 0;
        v40 = 0;
        if ( v9 )
        {
          v41 = lpMem;
          while ( *v41 != (_DWORD)v14 )
          {
            ++v40;
            v41 += 34;
            if ( v40 >= v9 )
              goto LABEL_61;
          }
          v14 = (unsigned int)(v14 + 1);
          v39 = 1;
        }
LABEL_61:
        v42 = 0;
        if ( !v65 )
          break;
        v43 = v30;
        while ( *v43 != (_DWORD)v14 )
        {
          ++v42;
          ++v43;
          if ( v42 >= v65 )
            goto LABEL_65;
        }
        v14 = (unsigned int)(v14 + 1);
      }
LABEL_65:
      if ( !v39 )
      {
        ++v38;
        v15 = 136LL * v9++;
        *(_DWORD *)((char *)lpMem + v15 + 4) = 0;
        *(_DWORD *)((char *)lpMem + v15) = v14;
        if ( v38 >= (unsigned int)v8 )
          break;
      }
    }
  }
LABEL_11:
  if ( v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0d_EventWriteTransfer(v15, &EVTDESC_OVERLAY_PRESENT_Start, v9);
    v18 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
      v18 = (Microsoft_Windows_Dwm_CompositorEnableBits & 1) == 0;
    if ( !v18 )
    {
      v44 = 0;
      v45 = v13 + 20;
      do
      {
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        if ( *((_QWORD *)v45 - 9) )
        {
          for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
          {
            if ( *(_DWORD *)(i + 208) == *(v45 - 20) )
            {
              v51 = *(_QWORD **)(i + 16);
              v72 = v51[5];
              v70 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v51 + 64LL))(v51, v14);
              v66 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 304LL))(*(_QWORD *)(i + 16));
              v52 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 16) + 288LL))(*(_QWORD *)(i + 16));
              v46 = v72;
              v49 = v52;
              v48 = v66;
              v47 = v70;
              goto LABEL_77;
            }
          }
          v48 = 0;
          v49 = 0;
        }
LABEL_77:
        if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
        {
          v53 = 34LL * v44;
          McTemplateU0xxxqqqqnnnqqq_EventWriteTransfer(
            v53 * 4 + (_DWORD)v13 + 60,
            v48,
            v46,
            v47,
            v48,
            v49,
            *(v45 - 19),
            *(v45 - 20),
            *(v45 - 14),
            v61,
            (__int64)&v13[v53 + 7],
            v62,
            (__int64)&v13[v53 + 11],
            v63,
            (__int64)&v13[v53 + 15],
            *(v45 - 1),
            *v45,
            v45[5]);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer(
            v18,
            v14,
            *((_QWORD *)v45 - 9),
            *(v45 - 19),
            *(v45 - 20),
            *(v45 - 14),
            *(v45 - 13),
            *(v45 - 12),
            *(v45 - 11),
            *(v45 - 10),
            *(v45 - 9),
            *(v45 - 8),
            *(v45 - 7),
            *(v45 - 6),
            *(v45 - 5),
            *(v45 - 4),
            *(v45 - 3),
            *(v45 - 2),
            *(v45 - 1),
            *v45,
            v45[5]);
        ++v44;
        v45 += 34;
      }
      while ( v44 < v9 );
    }
    *v79 = v9;
    updated = COverlayContext::UpdateHDRMetaData(this);
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, const void *, _DWORD *, unsigned int))(*(_QWORD *)a2 + 208LL))(
            a2,
            1LL,
            a3,
            *((unsigned int *)this + 3),
            updated,
            v13,
            v9);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_PRESENT_Stop,
        v21,
        1LL,
        &v79);
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v22, 0xB74u, 0LL);
      goto LABEL_22;
    }
    v10 = (unsigned int *)((char *)this + 11280);
  }
  else
  {
    v22 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2003304309, 0xB7Fu, 0LL);
  }
  *v10 = v77;
  *((_BYTE *)this + 11296) = *((_BYTE *)this + 11024);
  *((_BYTE *)this + 11305) = *((_BYTE *)this + 11025);
LABEL_22:
  v23 = (char *)this + 1104 * *((int *)this + 4490);
  for ( j = 0; ; ++j )
  {
    v25 = *((_QWORD *)this + 914);
    v26 = *((_QWORD *)this + 913);
    if ( j >= -1227133513 * (unsigned int)((v25 - v26) >> 5) || j >= 2 )
      break;
    v54 = 480LL * j;
    v55 = 224LL * j;
    v56 = &v23[v54 + 11568];
    *(_OWORD *)v56 = *(_OWORD *)(v26 + v55);
    *((_OWORD *)v56 + 1) = *(_OWORD *)(v26 + v55 + 16);
    *((_OWORD *)v56 + 2) = *(_OWORD *)(v26 + v55 + 32);
    *((_OWORD *)v56 + 3) = *(_OWORD *)(v26 + v55 + 48);
    *((_OWORD *)v56 + 4) = *(_OWORD *)(v26 + v55 + 64);
    *((_OWORD *)v56 + 5) = *(_OWORD *)(v26 + v55 + 80);
    *((_OWORD *)v56 + 6) = *(_OWORD *)(v26 + v55 + 96);
    *((_OWORD *)v56 + 7) = *(_OWORD *)(v26 + v55 + 112);
    *((_OWORD *)v56 + 8) = *(_OWORD *)(v26 + v55 + 128);
    *((_OWORD *)v56 + 9) = *(_OWORD *)(v26 + v55 + 144);
    *((_OWORD *)v56 + 10) = *(_OWORD *)(v26 + v55 + 160);
    *((_OWORD *)v56 + 11) = *(_OWORD *)(v26 + v55 + 176);
    *((_OWORD *)v56 + 12) = *(_OWORD *)(v26 + v55 + 192);
    v57 = *(_OWORD *)(v26 + v55 + 208);
    *(_QWORD *)&v23[v54 + 11800] = v56;
    *((_OWORD *)v56 + 13) = v57;
    v58 = *(_QWORD *)(*((_QWORD *)this + 913) + v55 + 16);
    *(_DWORD *)&v23[v54 + 11812] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 336LL))(v58);
  }
  while ( v26 != v25 )
  {
    *(_BYTE *)(v26 + 184) = 0;
    *(_BYTE *)(v26 + 181) = 0;
    v26 += 224LL;
  }
  if ( lpMem )
  {
    if ( (_DWORD)v8 )
    {
      v59 = lpMem + 2;
      v60 = (unsigned int)v8;
      do
      {
        if ( *v59 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v59 + 16LL))(*v59);
        v59 += 17;
        --v60;
      }
      while ( v60 );
    }
    v27 = GetProcessHeap();
    HeapFree(v27, 0, lpMem);
  }
  if ( v75 )
    operator delete(v75);
  return (unsigned int)v22;
}
