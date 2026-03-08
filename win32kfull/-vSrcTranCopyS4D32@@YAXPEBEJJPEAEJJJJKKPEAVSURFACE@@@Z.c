/*
 * XREFs of ?vSrcTranCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C02769B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS4D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int *v15; // rcx
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // ebp
  char v23; // cl
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned __int8 *v26; // r12
  const unsigned __int8 *v27; // r14
  const unsigned __int8 *v28; // r15
  int *v29; // r11
  unsigned __int8 v30; // al
  unsigned int v31; // r11d
  int v32; // r9d
  unsigned int v33; // edx
  __int64 v34; // r10
  _DWORD *v35; // rax
  int v36; // r11d
  _DWORD *v37; // rax
  unsigned int v38; // r11d
  unsigned int v39; // edx
  int v40; // r8d
  _DWORD *v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // edx
  int v44; // r11d
  __int64 v45; // rcx
  unsigned __int8 v46; // r12
  unsigned __int8 v47; // al
  unsigned int v48; // eax
  int v49; // r9d
  unsigned int v50; // edx
  __int64 v51; // r10
  _DWORD *v52; // rax
  int v53; // r8d
  _DWORD *v54; // rax
  unsigned int v55; // r8d
  unsigned int v56; // edx
  int v57; // r8d
  _DWORD *v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // edx
  unsigned __int8 v61; // r12
  unsigned int v62; // r12d
  int v63; // r9d
  unsigned int v64; // edx
  __int64 v65; // r10
  _DWORD *v66; // rax
  int v67; // r12d
  _DWORD *v68; // rax
  unsigned int v69; // r12d
  unsigned int v70; // edx
  int v71; // r12d
  int v72; // r8d
  _DWORD *v73; // rax
  unsigned int v74; // r8d
  unsigned int v75; // edx
  int v76; // r12d
  unsigned __int8 v77; // al
  unsigned int v78; // r15d
  int v79; // r9d
  unsigned int v80; // edx
  __int64 v81; // r10
  _DWORD *v82; // rax
  int v83; // r15d
  _DWORD *v84; // rax
  unsigned int v85; // r15d
  unsigned int v86; // edx
  int v87; // r8d
  _DWORD *v88; // rax
  unsigned int v89; // r8d
  unsigned int v90; // edx
  int v91; // r15d
  unsigned int v92; // [rsp+0h] [rbp-68h]
  int v93; // [rsp+4h] [rbp-64h]
  int v94; // [rsp+8h] [rbp-60h]
  __int64 v95; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v96; // [rsp+20h] [rbp-48h]
  __int64 v97; // [rsp+28h] [rbp-40h]
  const unsigned __int8 *v98; // [rsp+70h] [rbp+8h]
  char v99; // [rsp+78h] [rbp+10h]
  unsigned int v100; // [rsp+88h] [rbp+20h]
  int v101; // [rsp+90h] [rbp+28h]
  int v102; // [rsp+90h] [rbp+28h]
  int v103; // [rsp+98h] [rbp+30h]
  unsigned int v104; // [rsp+B0h] [rbp+48h]
  int v105; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v13 = *((_QWORD *)a11 + 16);
  if ( !v13 )
    v13 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1776LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(int **)(v13 + 112);
    v16 = *v15;
    v17 = v15[6];
    v18 = v15[1];
    v19 = v15[7];
    v20 = v15[2];
    v21 = v15[8];
    v105 = *v15;
  }
  else
  {
    v18 = 65280;
    LOBYTE(v19) = 8;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v21) = 16;
      v16 = 255;
      v105 = 255;
      v20 = 16711680;
      LOBYTE(v17) = 0;
    }
    else
    {
      LOBYTE(v17) = 16;
      v16 = 16711680;
      v105 = 16711680;
      v20 = 255;
      LOBYTE(v21) = 0;
    }
  }
  v23 = v17;
  v99 = v17;
  v24 = a6 & 0xFFFFFFFE;
  v103 = a6 - (a6 & 0xFFFFFFFE);
  v25 = a9 & v18;
  v104 = (a9 & v16) >> v23;
  v100 = v25 >> v19;
  v92 = (a9 & v20) >> v21;
  v93 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v94 = (int)(v24 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v26 = &a4[4 * a5];
  v96 = v26;
  v27 = &a1[a2 / 2];
  v98 = v27;
  if ( a8 )
  {
    v97 = v12;
    do
    {
      v28 = v27;
      v29 = (int *)v26;
      if ( v93 )
      {
        v30 = *v27 & 0xF;
        if ( v30 )
        {
          if ( v30 == 15 )
          {
            v31 = a9;
          }
          else
          {
            v32 = *(_DWORD *)v26;
            v33 = (*(_DWORD *)v26 & (unsigned int)v16) >> v99;
            v34 = v30;
            v35 = &unk_1C0329B30;
            if ( (int)(v104 - v33) >= 0 )
              v35 = &unk_1C0329B70;
            v36 = v35[v34] * (v104 - v33);
            v37 = &unk_1C0329B30;
            v38 = v105 & (((v33 << 16) + v36) >> 16 << v99);
            v39 = (v32 & (unsigned int)v18) >> v19;
            if ( (int)(v100 - v39) >= 0 )
              v37 = &unk_1C0329B70;
            v40 = v37[v34] * (v100 - v39);
            v41 = &unk_1C0329B30;
            v42 = ((v39 << 16) + v40) >> 16 << v19;
            v43 = (v32 & (unsigned int)v20) >> v21;
            v44 = v18 & v42 | v38;
            if ( (int)(v92 - v43) >= 0 )
              v41 = &unk_1C0329B70;
            v31 = v20 & (((v43 << 16) + v41[v34] * (v92 - v43)) >> 16 << v21) | v44;
          }
          *(_DWORD *)v26 = v31;
        }
        v29 = (int *)(v26 + 4);
        v28 = v27 + 1;
      }
      if ( v94 > 0 )
      {
        v45 = (unsigned int)v94;
        v95 = (unsigned int)v94;
        do
        {
          v46 = *v28;
          v47 = *v28 >> 4;
          if ( v47 )
          {
            if ( v47 == 15 )
            {
              v48 = a9;
            }
            else
            {
              v49 = *v29;
              v50 = (*v29 & (unsigned int)v105) >> v99;
              v51 = v47;
              v52 = &unk_1C0329B30;
              if ( (int)(v104 - v50) >= 0 )
                v52 = &unk_1C0329B70;
              v53 = v52[v51] * (v104 - v50);
              v54 = &unk_1C0329B30;
              v55 = (v50 << 16) + v53;
              v56 = (v49 & (unsigned int)v18) >> v19;
              v101 = v105 & (HIWORD(v55) << v99);
              if ( (int)(v100 - v56) >= 0 )
                v54 = &unk_1C0329B70;
              v57 = v54[v51] * (v100 - v56);
              v58 = &unk_1C0329B30;
              v59 = (v56 << 16) + v57;
              v60 = (v49 & (unsigned int)v20) >> v21;
              v102 = v18 & (HIWORD(v59) << v19) | v101;
              if ( (int)(v92 - v60) >= 0 )
                v58 = &unk_1C0329B70;
              v45 = v95;
              v48 = v20 & (((v60 << 16) + v58[v51] * (v92 - v60)) >> 16 << v21) | v102;
            }
            *v29 = v48;
          }
          v61 = v46 & 0xF;
          if ( v61 )
          {
            if ( v61 == 15 )
            {
              v62 = a9;
            }
            else
            {
              v63 = v29[1];
              v64 = (v63 & (unsigned int)v105) >> v99;
              v65 = v61;
              v66 = &unk_1C0329B30;
              if ( (int)(v104 - v64) >= 0 )
                v66 = &unk_1C0329B70;
              v67 = v66[v61] * (v104 - v64);
              v68 = &unk_1C0329B30;
              v69 = (v64 << 16) + v67;
              v70 = (v63 & (unsigned int)v18) >> v19;
              v71 = v105 & (HIWORD(v69) << v99);
              if ( (int)(v100 - v70) >= 0 )
                v68 = &unk_1C0329B70;
              v72 = v68[v65] * (v100 - v70);
              v73 = &unk_1C0329B30;
              v74 = (v70 << 16) + v72;
              v75 = (v63 & (unsigned int)v20) >> v21;
              v76 = v18 & (HIWORD(v74) << v19) | v71;
              if ( (int)(v92 - v75) >= 0 )
                v73 = &unk_1C0329B70;
              v62 = v20 & (((v75 << 16) + v73[v65] * (v92 - v75)) >> 16 << v21) | v76;
            }
            v45 = v95;
            v29[1] = v62;
          }
          v29 += 2;
          ++v28;
          v95 = --v45;
        }
        while ( v45 );
        v27 = v98;
        v26 = v96;
      }
      if ( v103 )
      {
        v77 = *v28 >> 4;
        if ( v77 )
        {
          if ( v77 == 15 )
          {
            v78 = a9;
          }
          else
          {
            v79 = *v29;
            v80 = (*v29 & (unsigned int)v105) >> v99;
            v81 = v77;
            v82 = &unk_1C0329B30;
            if ( (int)(v104 - v80) >= 0 )
              v82 = &unk_1C0329B70;
            v83 = v82[v81] * (v104 - v80);
            v84 = &unk_1C0329B30;
            v85 = v105 & (((v80 << 16) + v83) >> 16 << v99);
            v86 = (v79 & (unsigned int)v18) >> v19;
            if ( (int)(v100 - v86) >= 0 )
              v84 = &unk_1C0329B70;
            v87 = v84[v81] * (v100 - v86);
            v88 = &unk_1C0329B30;
            v89 = (v86 << 16) + v87;
            v90 = (v79 & (unsigned int)v20) >> v21;
            v91 = v18 & (HIWORD(v89) << v19) | v85;
            if ( (int)(v92 - v90) >= 0 )
              v88 = &unk_1C0329B70;
            v78 = v20 & (((v90 << 16) + v88[v81] * (v92 - v90)) >> 16 << v21) | v91;
          }
          *v29 = v78;
        }
      }
      v27 += v97;
      v16 = v105;
      v26 += a7;
      --a8;
      v98 = v27;
      v96 = v26;
    }
    while ( a8 );
  }
}
