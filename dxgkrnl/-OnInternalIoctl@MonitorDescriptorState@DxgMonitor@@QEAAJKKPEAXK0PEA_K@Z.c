__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
        DxgMonitor::MonitorDescriptorState *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // r13d
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int16 v26; // si
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rbx
  _BYTE *v31; // rbx
  _WORD *v32; // rbx
  void *v33; // rbx
  int v34; // eax
  _WORD *v35; // rbx
  __int64 v36; // rcx
  int v37; // eax
  _WORD *v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // edi
  __int64 v47; // rcx
  int v48; // eax
  char *v49; // rdx
  unsigned int v50; // ecx
  char v51; // al
  unsigned __int64 v52; // rax
  __int128 v53; // xmm1
  unsigned __int64 *v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  _WORD *v57; // rdx
  int v58; // eax
  __int64 v59; // rcx
  _WORD *v60; // r12
  int v61; // eax
  unsigned int v62; // [rsp+30h] [rbp-71h] BYREF
  void *v63; // [rsp+38h] [rbp-69h] BYREF
  int v64; // [rsp+40h] [rbp-61h] BYREF
  __int16 v65; // [rsp+44h] [rbp-5Dh]
  unsigned __int64 *v66; // [rsp+48h] [rbp-59h]
  _QWORD v67[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v68[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v69[2]; // [rsp+70h] [rbp-31h] BYREF
  __int128 v70; // [rsp+80h] [rbp-21h] BYREF
  __int128 v71; // [rsp+90h] [rbp-11h]

  v8 = a3;
  v63 = a6;
  v66 = a7;
  LODWORD(v10) = -1073741637;
  v11 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = this;
  v13 = v11 - 2302979;
  if ( !v13 )
  {
    WdLogSingleEntry0(2LL);
    return (unsigned int)v10;
  }
  v14 = v13 - 12;
  if ( !v14 )
  {
    v28 = *((_QWORD *)this + 20);
    if ( !v28 )
      goto LABEL_95;
    if ( v8 < 0x10 || a5 < 0x10 )
      goto LABEL_45;
    v62 = 0;
    v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)v28 + 192LL))(
            v28,
            &v62,
            0LL,
            0LL);
    v10 = v29;
    if ( (int)(v29 + 0x80000000) < 0 || v29 == -1073741789 )
    {
      if ( !v62 )
        goto LABEL_95;
      v30 = 56LL * (v62 - 1) + 60;
      if ( *a4 < v30 )
        goto LABEL_52;
      v59 = *((_QWORD *)this + 20);
      v60 = (_WORD *)a4[1];
      v64 = 0;
      v61 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int *, _WORD *))(*(_QWORD *)v59 + 192LL))(
              v59,
              &v62,
              &v64,
              v60 + 2);
      v10 = v61;
      if ( v61 >= 0 )
      {
        *v60 = v62;
        v60[1] = v64;
        goto LABEL_53;
      }
    }
LABEL_97:
    WdLogSingleEntry1(2LL, v10);
    return (unsigned int)v10;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    v55 = *((_QWORD *)this + 20);
    if ( !v55 )
      goto LABEL_95;
    if ( v8 < 0x10 || a5 < 0x10 )
      goto LABEL_45;
    LOWORD(v62) = 0;
    v56 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v55 + 200LL))(v55, &v62, 0LL);
    v10 = v56;
    if ( v56 == -1073741275 )
      goto LABEL_95;
    if ( (int)(v56 + 0x80000000) < 0 || v56 == -1073741789 )
    {
      v30 = 52LL * (unsigned __int16)v62 + 4;
      if ( *a4 >= v30 )
      {
        v57 = (_WORD *)a4[1];
        *v57 = v62;
        v58 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 200LL))(
                *((_QWORD *)this + 20),
                v57,
                v57 + 2);
        v10 = v58;
        if ( v58 < 0 )
          goto LABEL_97;
LABEL_53:
        *(_QWORD *)v63 = v30;
        goto LABEL_16;
      }
LABEL_52:
      LODWORD(v10) = -2147483643;
      goto LABEL_53;
    }
    goto LABEL_97;
  }
  v16 = v15 - 4;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( v18 )
      {
        v19 = v18 - 4;
        if ( v19 )
        {
          v20 = v19 - 4;
          if ( v20 )
          {
            if ( v20 != 4 )
              return (unsigned int)v10;
            v24 = *((_QWORD *)this + 20);
            if ( v24 )
            {
              if ( v8 >= 0x10 && a5 >= 0x10 )
              {
                LOBYTE(v62) = 0;
                v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 152LL))(v24, &v62);
                v10 = v25;
                if ( v25 >= 0 )
                {
                  if ( *a4 )
                  {
                    v31 = (_BYTE *)a4[1];
                    memset(v31, 0, *a4);
                    *v31 = v62;
                  }
                  else
                  {
                    LODWORD(v10) = -2147483643;
                  }
                  *(_QWORD *)v63 = 1LL;
                  goto LABEL_16;
                }
LABEL_23:
                if ( (_DWORD)v10 == -1073741275 )
                  return (unsigned int)v10;
LABEL_67:
                WdLogSingleEntry1(3LL, v10);
                MonitorLogBadEDID((unsigned int)v10);
                return (unsigned int)v10;
              }
LABEL_45:
              LODWORD(v10) = -1073741789;
              return (unsigned int)v10;
            }
          }
          else
          {
            v21 = *((_QWORD *)this + 20);
            if ( v21 )
            {
              if ( v8 >= 0x10 && a5 >= 0x10 )
              {
                v64 = 0;
                v65 = 0;
                v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 144LL))(v21, &v64);
                v10 = v22;
                if ( v22 >= 0 )
                {
                  if ( *a4 >= 6 )
                  {
                    v32 = (_WORD *)a4[1];
                    memset(v32, 0, *a4);
                    *(_DWORD *)v32 = v64;
                    v32[2] = v65;
                  }
                  else
                  {
                    LODWORD(v10) = -2147483643;
                  }
                  *(_QWORD *)v63 = 6LL;
                  goto LABEL_16;
                }
                goto LABEL_23;
              }
              goto LABEL_45;
            }
          }
        }
        else if ( *((_QWORD *)this + 20) )
        {
          if ( v8 >= 0x10 && a5 >= 0x10 )
          {
            if ( *a4 >= 0xB )
            {
              v33 = (void *)a4[1];
              memset(v33, 0, *a4);
              v34 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 136LL))(
                      *((_QWORD *)this + 20),
                      v33);
              LODWORD(v10) = v34;
              if ( v34 < 0 )
              {
                WdLogSingleEntry1(3LL, v34);
                MonitorLogBadEDID((unsigned int)v10);
              }
            }
            else
            {
              LODWORD(v10) = -2147483643;
            }
            *(_QWORD *)v63 = 11LL;
            goto LABEL_16;
          }
          goto LABEL_45;
        }
      }
      else if ( *((_QWORD *)this + 20) )
      {
        if ( v8 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 >= 0x10 )
          {
            v35 = (_WORD *)a4[1];
            memset(v35, 0, *a4);
            v36 = *((_QWORD *)this + 20);
            v70 = 0LL;
            v71 = 0LL;
            v37 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v36 + 120LL))(v36, &v70);
            LODWORD(v10) = v37;
            if ( v37 >= 0 )
            {
              *v35 = (unsigned __int16)v70 >> 2;
              v35[1] = WORD2(v70) >> 2;
              v35[4] = WORD4(v70) >> 2;
              v35[5] = WORD6(v70) >> 2;
              v35[2] = (unsigned __int16)v71 >> 2;
              v35[3] = WORD2(v71) >> 2;
              v35[6] = WORD4(v71) >> 2;
              v35[7] = WORD6(v71) >> 2;
            }
            else
            {
              WdLogSingleEntry1(3LL, v37);
              MonitorLogBadEDID((unsigned int)v10);
            }
          }
          else
          {
            LODWORD(v10) = -2147483643;
          }
          *(_QWORD *)v63 = 16LL;
          goto LABEL_16;
        }
        goto LABEL_45;
      }
LABEL_95:
      LODWORD(v10) = -1071841279;
      return (unsigned int)v10;
    }
    v26 = 0;
    if ( !*((_QWORD *)this + 20) )
      goto LABEL_95;
    if ( v8 < 0x10 || a5 < 0x10 )
      goto LABEL_45;
    if ( *a4 >= 0x82 )
    {
      v38 = (_WORD *)a4[1];
      memset(v38, 0, *a4);
      v39 = *((_QWORD *)this + 20);
      v67[0] = 0x200000LL;
      v67[1] = v38;
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v39 + 72LL))(v39, v67);
      v10 = v40;
      if ( v40 < 0 )
        goto LABEL_67;
      v41 = *((_QWORD *)this + 20);
      v68[1] = v38 + 16;
      v68[0] = 0x200000LL;
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v41 + 80LL))(v41, v68);
      v10 = v42;
      if ( v42 == -1073741275 )
      {
        WdLogSingleEntry0(7LL);
      }
      else if ( v42 < 0 )
      {
        goto LABEL_67;
      }
      v43 = *((_QWORD *)this + 20);
      v69[1] = v38 + 32;
      v69[0] = 0x200000LL;
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v43 + 64LL))(v43, v69);
      v10 = v44;
      if ( v44 < 0 )
        goto LABEL_67;
      v45 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 88LL))(
              *((_QWORD *)this + 20),
              v38 + 48,
              v38 + 49);
      v46 = v45;
      if ( v45 < 0 )
      {
        WdLogSingleEntry1(3LL, v45);
        MonitorLogBadEDID(v46);
      }
      v47 = *((_QWORD *)this + 20);
      *((_QWORD *)&v70 + 1) = v38 + 51;
      *(_QWORD *)&v70 = 1835008LL;
      v48 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v47 + 104LL))(v47, &v70);
      LODWORD(v10) = v48;
      if ( v48 == -1073741275 )
      {
        WdLogSingleEntry0(7LL);
        LODWORD(v10) = 0;
      }
      else
      {
        if ( v48 < 0 )
        {
          WdLogSingleEntry1(3LL, v48);
          MonitorLogBadEDID((unsigned int)v10);
          v38[50] = 0;
          return (unsigned int)v10;
        }
        v26 = 13;
      }
      v38[50] = v26;
    }
    else
    {
      LODWORD(v10) = -2147483643;
    }
    *(_QWORD *)v63 = 130LL;
LABEL_16:
    *v66 = 16LL;
    return (unsigned int)v10;
  }
  v27 = *((_QWORD *)this + 16);
  if ( !v27 )
    goto LABEL_95;
  if ( v8 < 0x88 || a5 < 0x88 )
    goto LABEL_45;
  v62 = 0;
  (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v27 + 232LL))(v27, &v63, &v62);
  v49 = (char *)v63;
  if ( v63 && v62 >= 0x80 && (v50 = *(unsigned __int8 *)a4, v50 < v62 >> 7) )
  {
    *a6 = v50;
    LODWORD(v10) = 0;
    v51 = *(_BYTE *)a4;
    *((_DWORD *)a6 + 33) = 2;
    a6[1] = v51 != 0 ? -1 : 1;
    v52 = (unsigned __int64)*(unsigned __int8 *)a4 << 7;
    *(_OWORD *)(a6 + 2) = *(_OWORD *)&v49[v52];
    *(_OWORD *)(a6 + 18) = *(_OWORD *)&v49[v52 + 16];
    *(_OWORD *)(a6 + 34) = *(_OWORD *)&v49[v52 + 32];
    *(_OWORD *)(a6 + 50) = *(_OWORD *)&v49[v52 + 48];
    *(_OWORD *)(a6 + 66) = *(_OWORD *)&v49[v52 + 64];
    *(_OWORD *)(a6 + 82) = *(_OWORD *)&v49[v52 + 80];
    *(_OWORD *)(a6 + 98) = *(_OWORD *)&v49[v52 + 96];
    v53 = *(_OWORD *)&v49[v52 + 112];
    v54 = v66;
    *(_OWORD *)(a6 + 114) = v53;
    *v54 = 136LL;
  }
  else
  {
    LODWORD(v10) = -1071841279;
  }
  v63 = 0LL;
  if ( v49 )
    operator delete(v49);
  return (unsigned int)v10;
}
