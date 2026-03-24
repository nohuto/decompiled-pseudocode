/*
 * XREFs of vSrcTranCopyS4D32 @ 0x1C00D0CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r11
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  int v20; // ebp
  int v21; // r10d
  int v22; // r8d
  int v23; // eax
  int v25; // r13d
  unsigned int v26; // eax
  unsigned int v27; // r8d
  unsigned int *v28; // r12
  int v29; // r10d
  __int64 result; // rax
  _BYTE *v31; // r15
  char v32; // si
  char *v33; // rdi
  unsigned int *v34; // rax
  char v35; // r13
  __int64 v36; // rsi
  char v37; // bl
  unsigned __int8 v38; // r9
  unsigned __int8 v39; // bl
  unsigned int v40; // ebp
  unsigned int v41; // ebx
  unsigned int v42; // r10d
  unsigned int v43; // r8d
  __int64 v44; // r11
  _DWORD *v45; // rcx
  unsigned int v46; // ebp
  unsigned int v47; // r9d
  char *v48; // rcx
  unsigned int v49; // ebp
  unsigned int v50; // r9d
  char *v51; // rcx
  unsigned int v52; // r10d
  unsigned int v53; // r8d
  __int64 v54; // r11
  _DWORD *v55; // rcx
  unsigned int v56; // ebx
  unsigned int v57; // r9d
  char *v58; // rcx
  unsigned int v59; // r8d
  unsigned int v60; // r9d
  int v61; // ebx
  char *v62; // rcx
  unsigned __int8 v63; // r9
  unsigned int v64; // r10d
  unsigned int v65; // r8d
  __int64 v66; // r11
  _DWORD *v67; // rcx
  unsigned int v68; // ebx
  unsigned int v69; // r9d
  char *v70; // rcx
  unsigned int v71; // ebx
  unsigned int v72; // r9d
  char *v73; // rcx
  unsigned __int8 v74; // al
  unsigned int v75; // r9d
  unsigned int v76; // edx
  __int64 v77; // r10
  char *v78; // rax
  int v79; // r11d
  char *v80; // rax
  unsigned int v81; // r11d
  unsigned int v82; // r8d
  int v83; // edx
  char *v84; // rax
  unsigned int v85; // r11d
  unsigned int v86; // r8d
  int v87; // edx
  int *v88; // rcx
  char v89; // [rsp+0h] [rbp-68h]
  int v90; // [rsp+4h] [rbp-64h]
  int v91; // [rsp+8h] [rbp-60h]
  unsigned int v92; // [rsp+Ch] [rbp-5Ch]
  unsigned int v93; // [rsp+10h] [rbp-58h]
  int v94; // [rsp+14h] [rbp-54h]
  unsigned int *v95; // [rsp+18h] [rbp-50h]
  __int64 v96; // [rsp+20h] [rbp-48h]
  _BYTE *v97; // [rsp+70h] [rbp+8h]
  char v98; // [rsp+78h] [rbp+10h]
  int v99; // [rsp+88h] [rbp+20h]
  int v100; // [rsp+90h] [rbp+28h]
  int v101; // [rsp+98h] [rbp+30h]
  unsigned int v102; // [rsp+B0h] [rbp+48h]
  char v103; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v15 = *(_QWORD *)(a11 + 128);
  if ( !v15 )
    v15 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1808LL);
  v16 = *(_DWORD *)(v15 + 24);
  if ( (v16 & 2) != 0 )
  {
    v88 = *(int **)(v15 + 112);
    v22 = *v88;
    v19 = v88[6];
    v23 = v88[1];
    v17 = v88[7];
    v20 = v88[2];
    v21 = v88[8];
    v99 = *v88;
  }
  else
  {
    LOBYTE(v17) = 8;
    if ( (v16 & 4) != 0 )
    {
      v18 = 255;
      LOBYTE(v19) = 0;
      v20 = 16711680;
      LOBYTE(v21) = 16;
    }
    else
    {
      v18 = 16711680;
      LOBYTE(v19) = 16;
      v20 = 255;
      LOBYTE(v21) = 0;
    }
    v22 = v18;
    v99 = v18;
    v23 = 65280;
  }
  v25 = a8;
  v91 = v23;
  v92 = (a9 & v23) >> v17;
  v26 = a9 & v20;
  v102 = (a9 & v22) >> v19;
  v93 = v26 >> v21;
  v27 = a6 & 0xFFFFFFFE;
  v89 = v17;
  v98 = v19;
  v103 = v21;
  v90 = v20;
  v101 = a6 - (a6 & 0xFFFFFFFE);
  v28 = (unsigned int *)(a4 + 4LL * a5);
  v95 = v28;
  v94 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v29 = (int)(v27 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v100 = v29;
  result = (unsigned int)(a2 / 2);
  v31 = (_BYTE *)((int)result + a1);
  v97 = v31;
  if ( a8 )
  {
    v32 = v103;
    v96 = v12;
    do
    {
      v33 = v31;
      v34 = v28;
      if ( v94 )
      {
        v74 = *v31 & 0xF;
        if ( v74 )
        {
          if ( v74 == 15 )
          {
            *v28 = a9;
          }
          else
          {
            v75 = *v28;
            v76 = (*v28 & v99) >> v98;
            v77 = 4LL * v74;
            v78 = (char *)&unk_1C02E53F0;
            if ( (int)(v102 - v76) >= 0 )
              v78 = (char *)&unk_1C02E5430;
            v79 = *(_DWORD *)&v78[v77];
            v80 = (char *)&unk_1C02E53F0;
            v81 = v99 & (((v76 << 16) + (v102 - v76) * v79) >> 16 << v98);
            v82 = (v75 & v91) >> v89;
            if ( (int)(v92 - v82) >= 0 )
              v80 = (char *)&unk_1C02E5430;
            v83 = *(_DWORD *)&v80[v77];
            v84 = (char *)&unk_1C02E53F0;
            v85 = v91 & (((v82 << 16) + (v92 - v82) * v83) >> 16 << v89) | v81;
            v86 = (v75 & v20) >> v32;
            if ( (int)(v93 - v86) >= 0 )
              v84 = (char *)&unk_1C02E5430;
            v87 = *(_DWORD *)&v84[v77];
            v29 = v100;
            *v28 = v20 & (((v86 << 16) + (v93 - v86) * v87) >> 16 << v32) | v85;
          }
        }
        v34 = v28 + 1;
        v33 = v31 + 1;
      }
      if ( v29 > 0 )
      {
        v35 = v103;
        v36 = (unsigned int)v29;
        do
        {
          v37 = *v33;
          v38 = (unsigned __int8)*v33 >> 4;
          if ( v38 )
          {
            if ( v38 == 15 )
            {
              v40 = a9;
            }
            else
            {
              v42 = *v34;
              v43 = (*v34 & v99) >> v98;
              v44 = 4LL * v38;
              v45 = &unk_1C02E53F0;
              if ( (int)(v102 - v43) >= 0 )
                v45 = &unk_1C02E5430;
              v46 = v99 & (((v43 << 16) + (v102 - v43) * v45[v38]) >> 16 << v98);
              v47 = (v42 & v91) >> v89;
              v48 = (char *)&unk_1C02E53F0;
              if ( (int)(v92 - v47) >= 0 )
                v48 = (char *)&unk_1C02E5430;
              v49 = v91 & (((v47 << 16) + (v92 - v47) * *(_DWORD *)&v48[v44]) >> 16 << v89) | v46;
              v50 = (v42 & v90) >> v103;
              v51 = (char *)&unk_1C02E53F0;
              if ( (int)(v93 - v50) >= 0 )
                v51 = (char *)&unk_1C02E5430;
              v35 = v103;
              v40 = v90 & (((v50 << 16) + (v93 - v50) * *(_DWORD *)&v51[v44]) >> 16 << v103) | v49;
            }
            *v34 = v40;
            v20 = v90;
          }
          v39 = v37 & 0xF;
          if ( v39 )
          {
            if ( v39 == 15 )
            {
              v41 = a9;
            }
            else
            {
              v52 = v34[1];
              v53 = (v52 & v99) >> v98;
              v54 = 4LL * v39;
              v55 = &unk_1C02E53F0;
              if ( (int)(v102 - v53) >= 0 )
                v55 = &unk_1C02E5430;
              v56 = v99 & (((v53 << 16) + (v102 - v53) * v55[v39]) >> 16 << v98);
              v57 = (v52 & v91) >> v89;
              v58 = (char *)&unk_1C02E53F0;
              if ( (int)(v92 - v57) >= 0 )
                v58 = (char *)&unk_1C02E5430;
              v59 = (v57 << 16) + (v92 - v57) * *(_DWORD *)&v58[v54];
              v60 = (v52 & v20) >> v35;
              v61 = v91 & (HIWORD(v59) << v89) | v56;
              v62 = (char *)&unk_1C02E53F0;
              if ( (int)(v93 - v60) >= 0 )
                v62 = (char *)&unk_1C02E5430;
              v41 = v20 & (((v60 << 16) + (v93 - v60) * *(_DWORD *)&v62[v54]) >> 16 << v35) | v61;
            }
            v34[1] = v41;
          }
          v34 += 2;
          ++v33;
          --v36;
        }
        while ( v36 );
        v31 = v97;
        v28 = v95;
        v25 = a8;
        v32 = v103;
      }
      if ( v101 )
      {
        v63 = (unsigned __int8)*v33 >> 4;
        if ( v63 )
        {
          if ( v63 == 15 )
          {
            *v34 = a9;
          }
          else
          {
            v64 = *v34;
            v65 = (*v34 & v99) >> v98;
            v66 = 4LL * v63;
            v67 = &unk_1C02E53F0;
            if ( (int)(v102 - v65) >= 0 )
              v67 = &unk_1C02E5430;
            v68 = v99 & (((v65 << 16) + (v102 - v65) * v67[v63]) >> 16 << v98);
            v69 = (v64 & v91) >> v89;
            v70 = (char *)&unk_1C02E53F0;
            if ( (int)(v92 - v69) >= 0 )
              v70 = (char *)&unk_1C02E5430;
            v71 = v91 & (((v69 << 16) + (v92 - v69) * *(_DWORD *)&v70[v66]) >> 16 << v89) | v68;
            v72 = (v64 & v20) >> v32;
            v73 = (char *)&unk_1C02E53F0;
            if ( (int)(v93 - v72) >= 0 )
              v73 = (char *)&unk_1C02E5430;
            *v34 = v20 & (((v72 << 16) + (v93 - v72) * *(_DWORD *)&v73[v66]) >> 16 << v32) | v71;
          }
        }
      }
      v31 += v96;
      result = a7;
      --v25;
      v29 = v100;
      v28 = (unsigned int *)((char *)v28 + a7);
      a8 = v25;
      v97 = v31;
      v95 = v28;
    }
    while ( v25 );
  }
  return result;
}
