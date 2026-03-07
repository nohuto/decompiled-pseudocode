__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int *v12; // r11
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // r9d
  unsigned int v25; // ebp
  unsigned int *v26; // r10
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rsi
  unsigned int v32; // r9d
  int v33; // r8d
  int v34; // r11d
  unsigned int v35; // r10d
  int v36; // r14d
  int v37; // edi
  int v38; // ecx
  __int64 v39; // r11
  int *v40; // r9
  int v41; // eax
  char v43; // r8
  unsigned int v44; // r10d
  unsigned int v45; // ebp
  unsigned int v46; // r14d
  unsigned __int64 v47; // r11
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned int *v50; // rsi
  int v51; // r8d
  unsigned __int64 v52; // rdi
  unsigned __int16 *v53; // rcx
  char *v54; // rdx
  int v55; // eax
  int v56; // ecx
  _DWORD *v57; // rcx
  __int64 v58; // r11
  char *v59; // rdx
  unsigned int v60; // r9d
  unsigned int v61; // r10d
  int v62; // edx
  _DWORD *v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r8d
  int v68; // ecx
  _DWORD *v69; // rax
  __int64 v70; // rdx
  unsigned __int16 *v71; // rcx
  unsigned int v72; // edx
  __int64 v73; // rax
  unsigned __int16 *v74; // rcx
  __int64 v75; // rax
  size_t v76; // rdx
  int v77; // r9d
  unsigned int v78; // r10d
  __int64 v79; // [rsp+20h] [rbp-138h]
  __int64 v80; // [rsp+28h] [rbp-130h]
  int v81; // [rsp+30h] [rbp-128h]
  unsigned int v82; // [rsp+34h] [rbp-124h]
  unsigned int v83; // [rsp+38h] [rbp-120h]
  unsigned int v84; // [rsp+3Ch] [rbp-11Ch]
  int v85; // [rsp+40h] [rbp-118h]
  char v86; // [rsp+44h] [rbp-114h]
  int v87; // [rsp+48h] [rbp-110h]
  unsigned int v88; // [rsp+4Ch] [rbp-10Ch]
  int v89; // [rsp+50h] [rbp-108h]
  unsigned int v90; // [rsp+54h] [rbp-104h]
  unsigned __int64 v91; // [rsp+58h] [rbp-100h]
  unsigned __int64 v92; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v94; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v95; // [rsp+80h] [rbp-D8h]
  unsigned int *v96; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v97; // [rsp+90h] [rbp-C8h]
  wchar_t pszDest[40]; // [rsp+C0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 < 0x128 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 30 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 88);
        v88 = v6;
        if ( v6 > 0x4000
          || (v7 = *(unsigned int *)(a1 + 112), v90 = v7, (unsigned int)v7 > 0x4000)
          || (v8 = *(unsigned int *)(a1 + 96), (unsigned int)v8 > 0x100000)
          || (v9 = *(_DWORD *)(a1 + 104), v9 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v6 && (_DWORD)v8 && v9 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v13 = (unsigned __int64)v12 + v12[21];
            v94 = v13;
            if ( (v13 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v13 < (unsigned __int64)v12
                   || (v14 = (char *)v12 + v10, v91 = (unsigned __int64)v12 + v10, v13 >= (unsigned __int64)v12 + v10) )
            {
              v3 = 40;
            }
            else
            {
              v15 = 32LL * v6 + v13 - 1;
              if ( v15 < (unsigned __int64)v12 || v15 >= (unsigned __int64)v14 )
              {
                v3 = 45;
              }
              else
              {
                v16 = (unsigned __int64)v12 + v12[23];
                v95 = v16;
                if ( (v16 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v16 < (unsigned __int64)v12 || v16 >= (unsigned __int64)v14 )
                {
                  v3 = 50;
                }
                else
                {
                  v17 = v16 + 8 * v8 - 1;
                  if ( v17 < (unsigned __int64)v12 || v17 >= (unsigned __int64)v14 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v18 = (unsigned __int64)v12 + v12[25];
                    v97 = v18;
                    if ( (v18 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v18 < (unsigned __int64)v12 || v18 >= (unsigned __int64)v14 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v19 = v18 + v11 - 1;
                      if ( v19 < (unsigned __int64)v12 || v19 >= (unsigned __int64)v14 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v20 = (unsigned __int64)v12 + v12[27];
                        v92 = v20;
                        if ( (v20 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v20 < (unsigned __int64)v12 || v20 >= (unsigned __int64)v14 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v21 = v20 + v12[29] - 1LL;
                          if ( v21 < (unsigned __int64)v12 || v21 >= (unsigned __int64)v14 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v22 = 96 * v7 + v20 - 1;
                            if ( v22 < (unsigned __int64)v12 || v22 >= (unsigned __int64)v14 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v84 = v12[31];
                              if ( v84 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v82 = 0;
                                v23 = v8;
                                v24 = 0;
                                v25 = 0;
                                while ( 1 )
                                {
                                  v26 = (unsigned int *)(v13 + 32LL * v25);
                                  v96 = v26;
                                  v27 = v18 + v26[3];
                                  if ( (v27 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v27 < (unsigned __int64)v12 || v27 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v28 = v26[4];
                                  if ( !(_DWORD)v28 )
                                  {
                                    v3 = 90;
                                    goto LABEL_67;
                                  }
                                  if ( (unsigned int)v28 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_67;
                                  }
                                  v29 = (unsigned int)(2 * v28 + 2) + v27 - 1;
                                  if ( v29 < (unsigned __int64)v12 || v29 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 110;
                                    goto LABEL_67;
                                  }
                                  if ( *(_WORD *)(v27 + 2 * v28) )
                                  {
                                    v3 = 120;
                                    goto LABEL_67;
                                  }
                                  v30 = v26[1];
                                  if ( v30 > 0x8000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_67;
                                  }
                                  if ( v30 > v23 )
                                  {
                                    v3 = 150;
                                    goto LABEL_67;
                                  }
                                  v31 = (int)*v26;
                                  v83 = v23 - v30;
                                  if ( (_DWORD)v31 == -1 && v30 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v31 != v24 && (_DWORD)v31 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v89 = v30 + v24;
                                  v32 = v26[5];
                                  v33 = (v32 >> 8) & 0x7F;
                                  v86 = v32;
                                  v85 = v33;
                                  if ( v33 == 0 && (v32 & 1) == 0 && (v32 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_67;
                                  }
                                  v34 = v32 & 1;
                                  v87 = v34;
                                  if ( (v32 & 1) == 0 && !v26[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_67;
                                  }
                                  v81 = 0;
                                  v35 = *v26;
                                  v36 = 0;
                                  v37 = 0;
                                  v38 = 0;
                                  if ( (int)v31 < (int)(v31 + v30) )
                                    break;
LABEL_75:
                                  if ( v36 != v96[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v34 && (v38 != (unsigned __int8)v32 >> 1 || v37 != v33) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v82 = ++v25;
                                  if ( v25 >= v88 )
                                  {
                                    if ( v83 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v44 = v90;
                                      v45 = 0;
                                      v46 = 0;
                                      if ( v90 )
                                      {
                                        v47 = v92;
                                        while ( 1 )
                                        {
                                          v48 = v46;
                                          v49 = v46 + 1;
                                          v46 = v49;
                                          v50 = (unsigned int *)(v47 + 96 * v48);
                                          v51 = v50[4];
                                          v94 = *((_QWORD *)v50 + 1);
                                          if ( (unsigned int)v49 < v44 )
                                            break;
LABEL_87:
                                          v52 = v47 + *v50;
                                          if ( (v52 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v52 < a1 || v52 >= v91 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v53 = (unsigned __int16 *)(v52 + 2LL * v50[1]);
                                          if ( (unsigned __int64)v53 + 1 < a1 || (unsigned __int64)v53 + 1 >= v91 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v53 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          LODWORD(v80) = v51;
                                          LODWORD(v79) = v50[2];
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v50[3],
                                            v79,
                                            v80);
                                          v54 = (char *)pszDest - v52;
                                          do
                                          {
                                            v55 = *(unsigned __int16 *)&v54[v52];
                                            v56 = *(unsigned __int16 *)v52 - v55;
                                            if ( v56 )
                                              break;
                                            v52 += 2LL;
                                          }
                                          while ( v55 );
                                          if ( v56 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v57 = (_DWORD *)(v92 + v50[5]);
                                          if ( ((unsigned __int8)v57 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          if ( (unsigned __int64)v57 < a1 || (unsigned __int64)v57 >= v91 )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v58 = v50[6];
                                          if ( (unsigned int)v58 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v59 = (char *)v57 + v58 - 1;
                                          if ( (unsigned __int64)v59 < a1 || (unsigned __int64)v59 >= v91 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v57 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v60 = v57[1];
                                          if ( v60 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v61 = *(_DWORD *)(a1 + 124);
                                          v62 = 0;
                                          if ( v61 )
                                          {
                                            v63 = v50 + 9;
                                            v64 = v61;
                                            do
                                            {
                                              v65 = *v63 + v63[7];
                                              ++v63;
                                              v62 += v65;
                                              --v64;
                                            }
                                            while ( v64 );
                                          }
                                          if ( v62 != v60 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v66 = 24;
                                          if ( v60 )
                                            v66 = 8 * v60 + 16;
                                          if ( v66 != (_DWORD)v58 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v67 = v50[8];
                                          if ( v67 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v68 = 0;
                                          if ( v61 )
                                          {
                                            v69 = v50 + 16;
                                            v70 = *(unsigned int *)(a1 + 124);
                                            do
                                            {
                                              v68 += *v69++;
                                              --v70;
                                            }
                                            while ( v70 );
                                          }
                                          if ( v68 != v67 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v47 = v92;
                                          v45 += v68;
                                          v71 = (unsigned __int16 *)(v92 + v50[7]);
                                          if ( ((unsigned __int8)v71 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v72 = 0;
                                          if ( v67 )
                                          {
                                            while ( (unsigned __int64)v71 >= a1 && (unsigned __int64)v71 < v91 )
                                            {
                                              if ( (unsigned __int64)v71 + 3 < a1 || (unsigned __int64)v71 + 3 >= v91 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              v73 = *v71;
                                              if ( (unsigned __int16)v73 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v74 = &v71[v73];
                                              if ( (unsigned __int64)v74 + 3 < a1 || (unsigned __int64)v74 + 3 >= v91 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( v74[1] )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v72;
                                              v71 = v74 + 2;
                                              if ( v72 >= v67 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v44 = *(_DWORD *)(a1 + 112);
                                          if ( v46 >= v44 )
                                            goto LABEL_129;
                                        }
                                        while ( !PfMetadataRecordIsEqual(v47 + 96 * v49, &v94, v51) )
                                        {
                                          v49 = (unsigned int)(v77 + 1);
                                          if ( (unsigned int)v49 >= v78 )
                                            goto LABEL_87;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v45 == *(_DWORD *)(a1 + 120) )
                                        {
                                          if ( v45 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v75 = *(unsigned int *)(a1 + 212);
                                            v76 = *(unsigned int *)(a1 + 216);
                                            if ( ((_DWORD)v75 == 0) == ((_DWORD)v76 == 0) )
                                            {
                                              if ( (_DWORD)v75
                                                && StringCbLengthW((STRSAFE_PCNZWCH)(v75 + a1), v76, 0LL) < 0 )
                                              {
                                                v3 = 360;
                                              }
                                              else
                                              {
                                                v4 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v24 = v89;
                                  v12 = (unsigned int *)a1;
                                  v23 = v83;
                                  v14 = (char *)v91;
                                  v18 = v97;
                                  v13 = v94;
                                }
                                v39 = v31;
                                v40 = (int *)(v95 + 4 + 8 * v31);
                                while ( v39 >= 0 && v35 < (unsigned int)v8 )
                                {
                                  if ( v35 != (_DWORD)v31 && *(v40 - 1) <= (unsigned int)*(v40 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v41 = *v40;
                                  if ( (*v40 & 1) == 0 && (((unsigned int)*v40 >> 4) & 7) > v84 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v41 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v40 & 1) != 0 )
                                  {
                                    if ( (v41 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v36;
                                    v43 = ((unsigned int)*v40 >> 4) & 7;
                                    if ( (v41 & 4) != 0 )
                                      v81 |= 1 << v43;
                                    if ( (v41 & 2) != 0 )
                                      v37 |= 1 << v43;
                                  }
                                  ++v35;
                                  ++v39;
                                  v40 += 2;
                                  if ( v39 >= (int)(v31 + v30) )
                                  {
                                    v33 = v85;
                                    LOBYTE(v32) = v86;
                                    v38 = v81;
                                    v34 = v87;
                                    v25 = v82;
                                    goto LABEL_75;
                                  }
                                }
                                v3 = 160;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_67:
  *a3 = v3;
  return v4;
}
