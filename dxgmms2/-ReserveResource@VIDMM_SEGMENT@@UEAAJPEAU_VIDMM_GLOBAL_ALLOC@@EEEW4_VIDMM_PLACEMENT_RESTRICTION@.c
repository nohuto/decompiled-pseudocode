__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        int a6,
        unsigned __int64 a7)
{
  char v7; // r10
  unsigned __int8 v8; // r11
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 **v16; // rsi
  _QWORD *v17; // r14
  int v18; // r15d
  unsigned __int64 v19; // rcx
  int v20; // ebp
  int *v21; // r14
  unsigned __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r14
  unsigned int v25; // r8d
  __int64 v26; // r15
  bool v27; // dl
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // r15
  __int64 v38; // rcx
  unsigned __int64 v40; // r13
  int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r9
  unsigned int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r12
  _QWORD *v54; // rax
  unsigned __int64 v55; // [rsp+20h] [rbp-A8h]
  int v56; // [rsp+28h] [rbp-A0h]
  int v57; // [rsp+30h] [rbp-98h]
  int v58; // [rsp+40h] [rbp-88h]
  unsigned __int64 v59; // [rsp+60h] [rbp-68h]
  unsigned __int64 v60; // [rsp+68h] [rbp-60h]
  unsigned __int64 v61; // [rsp+D0h] [rbp+8h]
  __int64 v62; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v63; // [rsp+E0h] [rbp+18h]

  v63 = a3;
  v7 = a4;
  v8 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v47 = WdLogNewEntry5_WdTrace(v46);
    *(_QWORD *)(v47 + 24) = a1;
    *(_QWORD *)(v47 + 32) = a2;
    v7 = a4;
    v8 = v63;
  }
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
  {
    McTemplateK0qpxxtqqq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v56, v57, v7, v58, a6);
    v8 = v63;
    v7 = a4;
  }
  v11 = *(unsigned int *)(a1 + 80);
  if ( (v11 & 0x20) != 0 )
    v12 = *(_QWORD *)(a2 + 24);
  else
    v12 = *(_QWORD *)(a2 + 16);
  v13 = *(unsigned int *)(a2 + 32);
  v14 = 1LL;
  v62 = v13;
  if ( *(_DWORD *)(a1 + 412) == 1 )
  {
    v21 = (int *)(a2 + 68);
    if ( a6 == 5 || (*v21 & 0x800) != 0 )
    {
      v20 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, v7, a5);
      v16 = (__int64 **)(a2 + 512);
LABEL_19:
      if ( v20 >= 0 )
      {
LABEL_20:
        v23 = *v21;
        v24 = *(_QWORD *)(a2 + 16);
        v25 = *(_DWORD *)(a1 + 368);
        v26 = **v16;
        v27 = (v23 & 0x200) != 0;
        *(_QWORD *)(a1 + 224) += v24;
        if ( v25 != -1 && !v27 )
        {
          v53 = *(_QWORD *)(a1 + 232);
          *(_QWORD *)(a1 + 232) = v53 + v24;
          if ( v53 <= qword_1C0076548 && v53 + v24 > qword_1C0076548 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 40088LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40152LL),
              v25);
          if ( !v53 )
            VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
        }
        v28 = *(unsigned int *)(a1 + 380);
        v29 = *(_QWORD *)(a1 + 8);
        v30 = *(int *)(a1 + 476);
        v31 = *(_QWORD *)(v29 + 40224);
        if ( (*(_BYTE *)(1616 * v28 + 24 * v30 + v31 + 520) & 1) != 0 )
          v32 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v29 + 24) + 240LL) + *(_QWORD *)(v26 + 40) + 24)
              + 344 * v28;
        else
          v32 = 1616 * v28 + 344 * v30 + v31 + 552;
        *(_QWORD *)(v32 + 128) += v24;
        v33 = *(unsigned int *)(a1 + 380);
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(int *)(a1 + 476);
        v36 = **v16;
        v14 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 216) += v14;
        v37 = *(_QWORD *)(v34 + 40224);
        if ( (*(_BYTE *)(1616 * v33 + 24 * v35 + v37 + 520) & 1) != 0 )
          v22 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v34 + 24) + 240LL) + *(_QWORD *)(v36 + 40) + 24)
              + 344 * v33;
        else
          v22 = 1616 * v33 + 344 * v35 + v37 + 552;
        *(_QWORD *)(v22 + 120) += v14;
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        {
          LODWORD(v55) = *(_DWORD *)(a1 + 16) + 1;
          McTemplateK0pqx_EtwWriteTransfer(
            (unsigned int)v55,
            &TotalBytesResidentInSegment,
            v14,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
            v55,
            *(_QWORD *)(a1 + 224));
        }
        ++*(_DWORD *)(a1 + 320);
        ++*(_DWORD *)(a1 + 324);
        if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
          goto LABEL_33;
        v38 = *(_QWORD *)(a2 + 520);
        if ( v38 )
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(v38 + 44)) == 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(**v16 + 56), *(_QWORD *)(a2 + 16));
          if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 520) + 40LL)) != 1 )
            goto LABEL_32;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**v16 + 56), *(_QWORD *)(a2 + 16));
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**v16 + 64), *(_QWORD *)(a2 + 16));
LABEL_32:
        v22 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v22 + 40208) += *(_QWORD *)(a2 + 16);
LABEL_33:
        *(_QWORD *)(a2 + 200) = a1;
        if ( g_IsInternalReleaseOrDbg )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v22);
          v54[3] = *(_QWORD *)(a2 + 184);
          v54[4] = *(int *)(a2 + 196);
          v22 = *(unsigned int *)(a2 + 192);
          v54[5] = v22;
        }
LABEL_35:
        if ( bTracingEnabled )
        {
          if ( (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, &EventEndReserveResource, v14, v20);
        }
        return (unsigned int)v20;
      }
LABEL_75:
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22) + 24) = v20;
      goto LABEL_35;
    }
  }
  v15 = *(_QWORD *)(a1 + 216);
  v16 = (__int64 **)(a2 + 512);
  v17 = *(_QWORD **)(a2 + 512);
  v18 = 0;
  if ( v15 + v12 > *(_QWORD *)(a1 + 208) || v15 + v12 < v15 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v11);
      v48[3] = a1;
      v48[4] = v12;
      v48[5] = *(_QWORD *)(a1 + 216);
      v49 = *(_QWORD *)(a1 + 208);
      goto LABEL_71;
    }
  }
  else
  {
    if ( (v11 & 0x1001) == 0 || (v19 = *(_QWORD *)(*v17 + 56LL), v19 + v12 <= v17[2]) && v19 + v12 >= v19 )
    {
      v20 = 0;
      goto LABEL_15;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
      v48[3] = a1;
      v48[4] = v12;
      v48[5] = *(_QWORD *)(*v17 + 56LL);
      v49 = v17[2];
LABEL_71:
      v48[6] = v49;
    }
  }
  v20 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v12, *(unsigned int *)(a2 + 32));
  if ( v20 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v22);
    goto LABEL_75;
  }
  v8 = v63;
  v14 = 1LL;
  v13 = v62;
LABEL_15:
  v21 = (int *)(a2 + 68);
  if ( (*(_DWORD *)(a2 + 68) & 0x800) != 0 )
    a6 = 5;
  v22 = *(unsigned int *)(a1 + 80);
  if ( (v22 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 192) = 0LL;
    *(_QWORD *)(a2 + 184) = 1LL;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(a1 + 48);
  v40 = 0LL;
  v41 = a6;
  v61 = v14;
  switch ( a6 )
  {
    case 3:
      v8 = 1;
      v63 = 1;
LABEL_41:
      v42 = v14;
      v60 = v40;
      v59 = v14;
      v43 = v40;
      v44 = v40;
      v20 = -1073741823;
      while ( 1 )
      {
        if ( v20 >= 0 )
          goto LABEL_20;
        if ( v41 == 7 && *(_DWORD *)(a1 + 412) == 1 )
        {
          v22 = *(_QWORD *)(a1 + 384);
          if ( v18 )
          {
            v14 = *(_QWORD *)(a1 + 384);
            v40 = v44;
            if ( v42 < v22 )
              v14 = v42;
            v61 = v14;
          }
          else
          {
            v22 += *(_QWORD *)(a1 + 392);
            v40 = v43;
            v41 = a6;
            if ( v44 <= v22 )
              v40 = v22;
          }
          if ( v40 >= v14 )
            goto LABEL_50;
        }
        else if ( (**(_DWORD **)(a2 + 536) & 0x20000) == 0 && *(_DWORD *)(a1 + 412) == 1 && *(_QWORD *)(a1 + 432) )
        {
          if ( v8 )
          {
            if ( v18 )
            {
              v14 = v42;
              v61 = v42;
              if ( v40 <= *(_QWORD *)(a1 + 424) )
                v40 = *(_QWORD *)(a1 + 424);
            }
            else
            {
              v51 = *(_QWORD *)(a1 + 416);
              if ( v51 >= v14 )
                v51 = v14;
              v14 = v51;
              v61 = v51;
            }
          }
          else if ( v18 )
          {
            v52 = *(_QWORD *)(a1 + 416);
            v40 = v44;
            if ( v52 >= v14 )
              v52 = v14;
            v14 = v52;
            v61 = v52;
          }
          else if ( v40 <= *(_QWORD *)(a1 + 424) )
          {
            v40 = *(_QWORD *)(a1 + 424);
          }
          if ( v40 >= v14 )
            goto LABEL_49;
        }
        else if ( v18 )
        {
          goto LABEL_19;
        }
        v20 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v12,
                v62,
                v8,
                v40,
                v14,
                a4,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 192),
                (void **)(a2 + 184));
        if ( v20 < 0 )
        {
          v20 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v12, *(unsigned int *)(a2 + 32));
          if ( v20 >= 0 )
            v20 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v12,
                    v62,
                    v63,
                    v40,
                    v61,
                    a4,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 192),
                    (void **)(a2 + 184));
        }
        v44 = v60;
        v42 = v59;
        v43 = v60;
        v14 = v61;
LABEL_49:
        v41 = a6;
LABEL_50:
        v8 = v63;
        if ( (unsigned int)++v18 >= 2 )
          goto LABEL_19;
      }
    case 4:
      v45 = dword_1C00762AC;
      if ( (v22 & 0x1001) == 0 )
        v45 = dword_1C00762A8;
      if ( (*(_DWORD *)(a2 + 72) & 0x400) != 0 )
      {
        v22 = a7;
        v8 = 0;
        v63 = 0;
        if ( a7 != -1LL )
        {
          v40 = a7;
          v14 = a7 + v12;
        }
        v41 = a6;
      }
      else
      {
        v41 = a6;
        v22 = v14 / 0x64;
        if ( *(_BYTE *)(a1 + 449) )
        {
          v8 = 1;
          v63 = 1;
          v14 = (v22 * v45 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        }
        else
        {
          v40 = (v22 * (100 - v45) + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v8 = 0;
          v63 = 0;
        }
      }
      goto LABEL_63;
    case 7:
      v8 = 0;
      v63 = 0;
      goto LABEL_41;
    case 5:
      v40 = *(_QWORD *)(a1 + 384);
      v14 = v40 + *(_QWORD *)(a1 + 392);
      v8 = 0;
      v63 = 0;
LABEL_63:
      v61 = v14;
      goto LABEL_41;
  }
  if ( a6 != 6 )
    goto LABEL_41;
  v50 = *(_QWORD *)(a1 + 384);
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v40 = *(_QWORD *)(a1 + 384);
    v14 = v50 + *(_QWORD *)(a1 + 392);
    goto LABEL_63;
  }
  v40 = (*(_QWORD *)(a1 + 416) - v12) & ~(*(_QWORD *)(a1 + 400) | (v13 - 1));
  v22 = *(_QWORD *)(a1 + 416) - v50;
  if ( v22 >= v12 )
  {
    v14 = *(_QWORD *)(a1 + 424);
    v8 = 0;
    v41 = a6;
    v63 = 0;
    goto LABEL_63;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v22);
  return 3221225473LL;
}
