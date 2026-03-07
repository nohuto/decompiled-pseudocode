void __fastcall vSrcTranCopyS4D16(
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
  unsigned __int8 *v29; // r11
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
  __int16 v48; // ax
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
  _WORD *v61; // r11
  unsigned __int8 v62; // r12
  unsigned int v63; // r12d
  int v64; // r9d
  unsigned int v65; // edx
  __int64 v66; // r10
  _DWORD *v67; // rax
  int v68; // r12d
  _DWORD *v69; // rax
  unsigned int v70; // r12d
  unsigned int v71; // edx
  int v72; // r12d
  int v73; // r8d
  _DWORD *v74; // rax
  unsigned int v75; // r8d
  unsigned int v76; // edx
  int v77; // r12d
  unsigned __int8 v78; // al
  unsigned int v79; // r15d
  int v80; // r9d
  unsigned int v81; // edx
  __int64 v82; // r10
  _DWORD *v83; // rax
  int v84; // r15d
  _DWORD *v85; // rax
  unsigned int v86; // r15d
  unsigned int v87; // edx
  int v88; // r8d
  _DWORD *v89; // rax
  unsigned int v90; // r8d
  unsigned int v91; // edx
  int v92; // r15d
  unsigned int v93; // [rsp+0h] [rbp-68h]
  int v94; // [rsp+4h] [rbp-64h]
  int v95; // [rsp+8h] [rbp-60h]
  __int64 v96; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v97; // [rsp+20h] [rbp-48h]
  __int64 v98; // [rsp+28h] [rbp-40h]
  const unsigned __int8 *v99; // [rsp+70h] [rbp+8h]
  char v100; // [rsp+78h] [rbp+10h]
  unsigned int v101; // [rsp+88h] [rbp+20h]
  int v102; // [rsp+90h] [rbp+28h]
  int v103; // [rsp+90h] [rbp+28h]
  int v104; // [rsp+98h] [rbp+30h]
  unsigned int v105; // [rsp+B0h] [rbp+48h]
  int v106; // [rsp+C0h] [rbp+58h]

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
    v106 = *v15;
  }
  else
  {
    v18 = 992;
    LOBYTE(v19) = 5;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v16 = 31;
      v106 = 31;
      v20 = 31744;
      LOBYTE(v21) = 10;
    }
    else
    {
      LOBYTE(v17) = 10;
      v16 = 31744;
      v106 = 31744;
      LOBYTE(v21) = 0;
      v20 = 31;
    }
  }
  v23 = v17;
  v100 = v17;
  v24 = a6 & 0xFFFFFFFE;
  v104 = a6 - (a6 & 0xFFFFFFFE);
  v25 = a9 & v18;
  v105 = (a9 & v16) >> v23;
  v101 = v25 >> v19;
  v93 = (a9 & v20) >> v21;
  v94 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v95 = (int)(v24 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v26 = &a4[2 * a5];
  v97 = v26;
  v27 = &a1[a2 / 2];
  v99 = v27;
  if ( a8 )
  {
    v98 = v12;
    do
    {
      v28 = v27;
      v29 = v26;
      if ( v94 )
      {
        v30 = *v27 & 0xF;
        if ( v30 )
        {
          if ( v30 == 15 )
          {
            LOWORD(v31) = a9;
          }
          else
          {
            v32 = *(unsigned __int16 *)v26;
            v33 = (v32 & (unsigned int)v16) >> v100;
            v34 = v30;
            v35 = &unk_1C0329B30;
            if ( (int)(v105 - v33) >= 0 )
              v35 = &unk_1C0329B70;
            v36 = v35[v34] * (v105 - v33);
            v37 = &unk_1C0329B30;
            v38 = v106 & (((v33 << 16) + v36) >> 16 << v100);
            v39 = (v32 & (unsigned int)v18) >> v19;
            if ( (int)(v101 - v39) >= 0 )
              v37 = &unk_1C0329B70;
            v40 = v37[v34] * (v101 - v39);
            v41 = &unk_1C0329B30;
            v42 = ((v39 << 16) + v40) >> 16 << v19;
            v43 = (v32 & (unsigned int)v20) >> v21;
            v44 = v18 & v42 | v38;
            if ( (int)(v93 - v43) >= 0 )
              v41 = &unk_1C0329B70;
            v31 = v20 & (((v43 << 16) + v41[v34] * (v93 - v43)) >> 16 << v21) | v44;
          }
          *(_WORD *)v26 = v31;
        }
        v29 = v26 + 2;
        v28 = v27 + 1;
      }
      if ( v95 > 0 )
      {
        v45 = (unsigned int)v95;
        v96 = (unsigned int)v95;
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
              v49 = *(unsigned __int16 *)v29;
              v50 = (v49 & (unsigned int)v106) >> v100;
              v51 = v47;
              v52 = &unk_1C0329B30;
              if ( (int)(v105 - v50) >= 0 )
                v52 = &unk_1C0329B70;
              v53 = v52[v51] * (v105 - v50);
              v54 = &unk_1C0329B30;
              v55 = (v50 << 16) + v53;
              v56 = (v49 & (unsigned int)v18) >> v19;
              v102 = v106 & (HIWORD(v55) << v100);
              if ( (int)(v101 - v56) >= 0 )
                v54 = &unk_1C0329B70;
              v57 = v54[v51] * (v101 - v56);
              v58 = &unk_1C0329B30;
              v59 = (v56 << 16) + v57;
              v60 = (v49 & (unsigned int)v20) >> v21;
              v103 = v18 & (HIWORD(v59) << v19) | v102;
              if ( (int)(v93 - v60) >= 0 )
                v58 = &unk_1C0329B70;
              v45 = v96;
              v48 = v20 & (((v60 << 16) + v58[v51] * (v93 - v60)) >> 16 << v21) | v103;
            }
            *(_WORD *)v29 = v48;
          }
          v61 = v29 + 2;
          v62 = v46 & 0xF;
          if ( v62 )
          {
            if ( v62 == 15 )
            {
              LOWORD(v63) = a9;
            }
            else
            {
              v64 = (unsigned __int16)*v61;
              v65 = (v64 & (unsigned int)v106) >> v100;
              v66 = v62;
              v67 = &unk_1C0329B30;
              if ( (int)(v105 - v65) >= 0 )
                v67 = &unk_1C0329B70;
              v68 = v67[v62] * (v105 - v65);
              v69 = &unk_1C0329B30;
              v70 = (v65 << 16) + v68;
              v71 = (v64 & (unsigned int)v18) >> v19;
              v72 = v106 & (HIWORD(v70) << v100);
              if ( (int)(v101 - v71) >= 0 )
                v69 = &unk_1C0329B70;
              v73 = v69[v66] * (v101 - v71);
              v74 = &unk_1C0329B30;
              v75 = (v71 << 16) + v73;
              v76 = (v64 & (unsigned int)v20) >> v21;
              v77 = v18 & (HIWORD(v75) << v19) | v72;
              if ( (int)(v93 - v76) >= 0 )
                v74 = &unk_1C0329B70;
              v63 = v20 & (((v76 << 16) + v74[v66] * (v93 - v76)) >> 16 << v21) | v77;
            }
            v45 = v96;
            *v61 = v63;
          }
          v29 = (unsigned __int8 *)(v61 + 1);
          ++v28;
          v96 = --v45;
        }
        while ( v45 );
        v27 = v99;
        v26 = v97;
      }
      if ( v104 )
      {
        v78 = *v28 >> 4;
        if ( v78 )
        {
          if ( v78 == 15 )
          {
            LOWORD(v79) = a9;
          }
          else
          {
            v80 = *(unsigned __int16 *)v29;
            v81 = (v80 & (unsigned int)v106) >> v100;
            v82 = v78;
            v83 = &unk_1C0329B30;
            if ( (int)(v105 - v81) >= 0 )
              v83 = &unk_1C0329B70;
            v84 = v83[v82] * (v105 - v81);
            v85 = &unk_1C0329B30;
            v86 = v106 & (((v81 << 16) + v84) >> 16 << v100);
            v87 = (v80 & (unsigned int)v18) >> v19;
            if ( (int)(v101 - v87) >= 0 )
              v85 = &unk_1C0329B70;
            v88 = v85[v82] * (v101 - v87);
            v89 = &unk_1C0329B30;
            v90 = (v87 << 16) + v88;
            v91 = (v80 & (unsigned int)v20) >> v21;
            v92 = v18 & (HIWORD(v90) << v19) | v86;
            if ( (int)(v93 - v91) >= 0 )
              v89 = &unk_1C0329B70;
            v79 = v20 & (((v91 << 16) + v89[v82] * (v93 - v91)) >> 16 << v21) | v92;
          }
          *(_WORD *)v29 = v79;
        }
      }
      v27 += v98;
      v16 = v106;
      v26 += a7;
      --a8;
      v99 = v27;
      v97 = v26;
    }
    while ( a8 );
  }
}
