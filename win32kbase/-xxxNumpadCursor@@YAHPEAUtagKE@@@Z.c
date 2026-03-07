__int64 __fastcall xxxNumpadCursor(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rdi
  unsigned int v30; // esi
  unsigned __int16 v31; // bx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  char v53; // bl
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  void *v72; // rdi
  unsigned int v73; // esi
  unsigned __int16 v74; // bx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  unsigned __int8 *v80; // rax
  int v81; // ecx
  __int64 v82; // rdx
  int v83; // [rsp+88h] [rbp+10h] BYREF

  v5 = (_WORD *)((char *)a1 + 2);
  if ( *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13834) )
  {
    LOBYTE(v12) = *(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13834);
    if ( (_BYTE)v12 == *(_BYTE *)v5 )
    {
      v16 = (unsigned __int16)*v5;
      if ( (v16 & 0x8000u) != 0LL )
      {
        xxxKeyEventEx(
          v16,
          *(unsigned __int8 *)a1,
          *((unsigned int *)a1 + 1),
          0LL,
          *((void **)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL,
          0LL);
        *(_BYTE *)(SGDGetUserSessionState(v18, v17, v19, v20) + 13834) = 0;
        v25 = *(unsigned __int16 *)(SGDGetUserSessionState(v22, v21, v23, v24) + 13836);
        *v5 = v25;
        *(_BYTE *)a1 = *(_BYTE *)(SGDGetUserSessionState(v25, v26, v27, v28) + 13838);
      }
      return 1LL;
    }
    v29 = (void *)*((_QWORD *)a1 + 1);
    v30 = *((_DWORD *)a1 + 1);
    v31 = *(unsigned __int8 *)(SGDGetUserSessionState(v13, v12, v14, v15) + 13838) | 0x200;
    v36 = SGDGetUserSessionState(v33, v32, v34, v35);
    xxxKeyEventEx(*(unsigned __int16 *)(v36 + 13836), v31, v30, 0LL, v29, (unsigned __int16 *)a1 + 8, 0, 0, 0LL, 0LL);
    *(_BYTE *)(SGDGetUserSessionState(v38, v37, v39, v40) + 13834) = 0;
  }
  v10 = *v5;
  if ( (*v5 & 0x800) != 0 )
  {
    v83 = 0;
    LOBYTE(v7) = v10;
    if ( !(unsigned int)ApiSetEditionIsSAS(v7, &v83)
      && ((*(_BYTE *)(SGDGetUserSessionState(v42, v41, v43, v44) + 14092) & 2) != 0
       || gptiForeground && (*((_DWORD *)gptiForeground + 318) & 0x800000) != 0) )
    {
      if ( (*(_BYTE *)(SGDGetUserSessionState(v46, v45, v47, v48) + 14060) & 1) != 0 )
      {
        v53 = *(_BYTE *)v5;
        *(_BYTE *)(SGDGetUserSessionState(v50, v49, v51, v52) + 13834) = v53;
        if ( (*(_BYTE *)(SGDGetUserSessionState(v55, v54, v56, v57) + 14096) & 4) != 0 )
        {
          *(_WORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 13836) = 417;
          *(_BYTE *)(SGDGetUserSessionState(417LL, v62, v63, v64) + 13838) = 54;
        }
        else
        {
          *(_WORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 13836) = 160;
          *(_BYTE *)(SGDGetUserSessionState(160LL, v69, v70, v71) + 13838) = 42;
        }
        v72 = (void *)*((_QWORD *)a1 + 1);
        v73 = *((_DWORD *)a1 + 1);
        v74 = *(unsigned __int8 *)(SGDGetUserSessionState(v66, v65, v67, v68) + 13838) | 0x200;
        v79 = SGDGetUserSessionState(v76, v75, v77, v78);
        xxxKeyEventEx(*(_WORD *)(v79 + 13836) | 0x8000u, v74, v73, 0LL, v72, (unsigned __int16 *)a1 + 8, 0, 0, 0LL, 0LL);
      }
      else if ( (*v5 & 0x2000) == 0 )
      {
        v80 = ausNumPadCvt;
        v81 = 0;
        v82 = 0LL;
        while ( *v80 != (unsigned __int8)*v5 )
        {
          ++v82;
          ++v81;
          v80 = &ausNumPadCvt[2 * v82];
          if ( !*(_WORD *)v80 )
            return 1LL;
        }
        *(_BYTE *)v5 = 0;
        *v5 |= ausNumPadCvt[2 * v81 + 1];
      }
    }
  }
  return 1LL;
}
