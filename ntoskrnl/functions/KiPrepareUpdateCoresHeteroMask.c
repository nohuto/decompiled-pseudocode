__int16 __fastcall KiPrepareUpdateCoresHeteroMask(
        char a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9,
        unsigned __int16 *a10,
        unsigned __int16 *a11,
        unsigned __int16 *a12,
        unsigned __int16 *a13)
{
  __int64 v13; // rsi
  unsigned __int16 *v14; // rbx
  int v15; // ecx
  unsigned __int8 v16; // di
  unsigned __int8 v17; // r12
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // r13
  unsigned int v20; // ebx
  unsigned __int8 v21; // si
  __int64 v22; // rax
  __int64 v23; // r15
  bool v24; // zf
  __int64 v25; // rdx
  unsigned __int8 v26; // r8
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  int v30; // r15d
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // al
  unsigned __int8 v33; // al
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  __int64 v36; // rax
  unsigned __int16 *v37; // r13
  int v38; // eax
  int v39; // ebx
  __int64 v40; // r15
  unsigned __int16 *v41; // r12
  int v42; // esi
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // al
  unsigned __int8 v45; // al
  __int64 v46; // rax
  unsigned __int16 *v47; // rsi
  unsigned __int16 *v48; // r12
  int v49; // edi
  __int64 v50; // rbx
  char v51; // al
  __int64 v52; // rbx
  __int64 v53; // rdi
  unsigned __int16 *v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int16 *v57; // r8
  unsigned __int16 *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned int v64; // [rsp+24h] [rbp-DCh] BYREF
  int v65; // [rsp+28h] [rbp-D8h]
  int v66; // [rsp+2Ch] [rbp-D4h]
  int v67; // [rsp+30h] [rbp-D0h]
  unsigned __int16 *v68; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v69; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v70; // [rsp+48h] [rbp-B8h]
  __int16 v71; // [rsp+50h] [rbp-B0h]
  int v72; // [rsp+52h] [rbp-AEh]
  __int16 v73; // [rsp+56h] [rbp-AAh]
  unsigned __int16 *v74; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v75; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v76; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v77; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  _QWORD v80[34]; // [rsp+90h] [rbp-70h] BYREF

  v13 = a2;
  v14 = a8;
  v74 = a9;
  v75 = a10;
  v68 = a11;
  v77 = a12;
  v78 = a13;
  v67 = a3;
  v79 = a2;
  v72 = 0;
  v73 = 0;
  v66 = a4;
  v76 = a8;
  LODWORD(v80[0]) = 2097153;
  memset((char *)v80 + 4, 0, 0x104uLL);
  v15 = *(_DWORD *)(a6 + 4);
  v16 = -1;
  v65 = v15;
  v17 = 0;
  v64 = 0;
  v18 = 0;
  v19 = -1;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v20 = v64;
    v21 = 0;
    do
    {
      v22 = a5 + v15 * v20;
      v23 = v22;
      if ( a1 )
        v24 = *(_BYTE *)(a6 + 4 * v22 + 27) == 0;
      else
        v24 = *(_BYTE *)(a6 + 4 * v22 + 26) == 0;
      if ( v24 )
      {
        KeAddProcessorAffinityEx((unsigned __int16 *)v80, v20);
        v25 = v67 + 2LL * v66;
        v26 = *(_BYTE *)(v20 + *(_QWORD *)(a6 + 8));
        if ( v26 >= KiMultiCoreHeteroLowerArchThreshold[v25] && v26 <= KiMultiCoreHeteroUpperArchThreshold[v25] )
        {
          if ( a1 )
          {
            KeAddProcessorAffinityEx(v74, v20);
            v27 = *(_BYTE *)(a6 + 4 * v23 + 25);
            v28 = v19;
            if ( v19 >= v27 )
              v28 = *(_BYTE *)(a6 + 4 * v23 + 25);
            v19 = v28;
            v29 = v21;
            if ( v21 <= v27 )
              v29 = *(_BYTE *)(a6 + 4 * v23 + 25);
            v21 = v29;
          }
          else
          {
            KeAddProcessorAffinityEx(v76, v20);
            v34 = *(_BYTE *)(a6 + 4 * v23 + 24);
            v35 = v16;
            if ( v16 >= v34 )
              v35 = *(_BYTE *)(a6 + 4 * v23 + 24);
            v16 = v35;
            if ( v17 <= v34 )
              v17 = *(_BYTE *)(a6 + 4 * v23 + 24);
          }
        }
        v15 = v65;
      }
      v64 = ++v20;
    }
    while ( v20 < (unsigned int)KeNumberProcessors_0 );
    v14 = v76;
    v18 = v21;
    v13 = v79;
  }
  if ( !a1 )
  {
    if ( (unsigned int)KeIsEmptyAffinityEx(v14) )
    {
      KiCopyAffinityEx((__int64)v14, v14[1], (unsigned __int16 *)v80);
      v30 = v65;
      v70 = v80[1];
      v69 = (unsigned __int16 *)v80;
      v71 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v64, &v69) )
      {
        v31 = *(_BYTE *)(a6 + 4LL * (a5 + v30 * v64) + 24);
        v32 = v16;
        if ( v16 >= v31 )
          v32 = *(_BYTE *)(a6 + 4LL * (a5 + v30 * v64) + 24);
        v16 = v32;
        v33 = v17;
        if ( v17 <= v31 )
          v33 = *(_BYTE *)(a6 + 4LL * (a5 + v30 * v64) + 24);
        v17 = v33;
      }
    }
    v36 = *((_QWORD *)v14 + 1);
    v71 = 0;
    v37 = v75;
    v70 = v36;
    v69 = v14;
    while ( 1 )
    {
      v38 = KeEnumerateNextProcessor(&v64, &v69);
      if ( v38 )
        goto LABEL_59;
      v39 = v64;
      v40 = a5 + v65 * v64;
      if ( !a7 )
        break;
      if ( v16 == v17 || *(_BYTE *)(a6 + 4LL * (a5 + v65 * v64) + 24) > v16 )
        KeAddProcessorAffinityEx(v37, v64);
      if ( *(_BYTE *)(a6 + 4 * v40 + 24) == v17 )
LABEL_39:
        KeAddProcessorAffinityEx(v68, v39);
    }
    KeAddProcessorAffinityEx(v37, v64);
    goto LABEL_39;
  }
  v41 = v74;
  if ( (unsigned int)KeIsEmptyAffinityEx(v74) )
  {
    KiCopyAffinityEx((__int64)v74, v74[1], (unsigned __int16 *)v80);
    v42 = v65;
    v70 = v80[1];
    v69 = (unsigned __int16 *)v80;
    v71 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v64, &v69) )
    {
      v43 = *(_BYTE *)(a6 + 4LL * (a5 + v42 * v64) + 25);
      v44 = v19;
      if ( v19 >= v43 )
        v44 = *(_BYTE *)(a6 + 4LL * (a5 + v42 * v64) + 25);
      v19 = v44;
      v45 = v18;
      if ( v18 <= v43 )
        v45 = *(_BYTE *)(a6 + 4LL * (a5 + v42 * v64) + 25);
      v18 = v45;
    }
  }
  v46 = *((_QWORD *)v41 + 1);
  v47 = v75;
  v69 = v41;
  v48 = v68;
  v70 = v46;
  v71 = 0;
  while ( 1 )
  {
    v38 = KeEnumerateNextProcessor(&v64, &v69);
    if ( v38 )
      break;
    v49 = v64;
    v50 = a6 + 4LL * (a5 + v65 * v64);
    if ( v19 == v18 || *(_BYTE *)(v50 + 25) > v19 )
      KeAddProcessorAffinityEx(v77, v64);
    v51 = *(_BYTE *)(v50 + 25);
    if ( v51 == v18 )
    {
      KeAddProcessorAffinityEx(v78, v49);
      v51 = *(_BYTE *)(v50 + 25);
    }
    if ( !a7 && v51 == v19 )
    {
      KeAddProcessorAffinityEx(v47, v49);
      KeAddProcessorAffinityEx(v48, v49);
    }
  }
  v13 = v79;
LABEL_59:
  v52 = v66;
  v53 = v67;
  switch ( KiDynamicHeteroCpuPolicy[2 * v66 + v67] )
  {
    case 1:
      v58 = v77;
      goto LABEL_68;
    case 2:
      v58 = v74;
LABEL_68:
      v59 = v13 + 264 * (v67 + 2 * (v66 + 3LL));
      KiCopyAffinityEx(v59, *(_WORD *)(v59 + 2), v58);
      v60 = v13 + 264 * (v53 + 2 * (v52 + 10));
      KiCopyAffinityEx(v60, *(_WORD *)(v60 + 2), v77);
      v57 = v78;
      goto LABEL_69;
    case 3:
      v54 = v75;
      goto LABEL_64;
    case 4:
      v54 = v76;
LABEL_64:
      v55 = v13 + 264 * (v67 + 2 * (v66 + 3LL));
      KiCopyAffinityEx(v55, *(_WORD *)(v55 + 2), v54);
      v56 = v13 + 264 * (v53 + 2 * (v52 + 10));
      KiCopyAffinityEx(v56, *(_WORD *)(v56 + 2), v75);
      v57 = v68;
LABEL_69:
      v61 = v13 + 264 * (v53 + 2 * (v52 + 17));
      LOWORD(v38) = KiCopyAffinityEx(v61, *(_WORD *)(v61 + 2), v57);
      break;
  }
  return v38;
}
