/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C0219E4C
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C021A2F0 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x1C0219C58 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C021A6EC (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, __int64 a2, struct DEVICEINFO *a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // bl
  struct tagKE *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  unsigned int v12; // esi
  unsigned __int8 *v13; // r15
  unsigned __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // bl
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r13d
  unsigned int v30; // r15d
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int16 v62; // ax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int8 *v76; // rbx
  __int64 v77; // rdi
  unsigned __int8 *v78; // rbx
  __int64 v79; // rdi
  char v81; // [rsp+20h] [rbp-40h]
  unsigned int v82; // [rsp+24h] [rbp-3Ch]
  unsigned int v83; // [rsp+24h] [rbp-3Ch]
  _WORD v86[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v87; // [rsp+3Ch] [rbp-24h]
  __int16 v88; // [rsp+3Eh] [rbp-22h]
  int v89; // [rsp+40h] [rbp-20h]
  _BYTE v90[8]; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v91[8]; // [rsp+50h] [rbp-10h] BYREF

  v4 = 0;
  v81 = a2;
  v5 = a2;
  v6 = a1;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12656) )
  {
    do
    {
      v11 = 16LL * v4;
      v8 = *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12648);
      if ( *(_BYTE *)(v11 + v8 + 1) == v5 )
      {
        v8 = *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12648);
        if ( *(_BYTE *)(v11 + v8) == *(_BYTE *)v6 )
        {
          if ( *((__int16 *)v6 + 1) < 0 && v4 == *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12660) )
          {
            *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12660) = -1;
            break;
          }
          v12 = 0;
          v13 = (unsigned __int8 *)&unk_1C02A5810;
          do
          {
            v14 = *v13;
            if ( (_BYTE)v14 == *(_BYTE *)(SGDGetUserSessionState(v8, v7, v9, v10) + 13777) )
            {
              *(_BYTE *)(SGDGetUserSessionState(v16, v15, v17, v18) + 13777) = 0;
            }
            else
            {
              v19 = *(_BYTE *)((v14 >> 2) + SGDGetUserSessionState(v16, v15, v17, v18) + 14056);
              v23 = SGDGetUserSessionState(v14 >> 2, v20, v21, v22);
              v24 = IsKeyDownSpecified(v14, (const unsigned __int8 *)(v11 + *(_QWORD *)(v23 + 12648) + 2LL));
              v7 = (unsigned int)(1 << (2 * (v14 & 3)));
              v8 = ((unsigned __int8)v7 & v19) == 0;
              if ( (_DWORD)v8 == v24 )
                break;
            }
            ++v12;
            ++v13;
          }
          while ( v12 < 0xA );
          v6 = a1;
          if ( v12 >= 0xA )
            break;
          v5 = v81;
        }
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12656) );
  }
  if ( v4 >= *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 12656) )
    return 1LL;
  v29 = 0;
  v88 = 0;
  v30 = 0;
  if ( *((__int16 *)v6 + 1) >= 0 )
  {
    v82 = 0;
    v31 = 16LL * v4;
    v32 = v31;
    do
    {
      v26 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12648);
      if ( !*(_BYTE *)(v26 + v32 + 2) )
        break;
      v33 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12648);
      v38 = SGDGetUserSessionState(v35, v34, v36, v37);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v38 + 12648) + v32 + 2),
                            (const unsigned __int8 *)(v31 + v33 + 10)) )
      {
        v39 = SGDGetUserSessionState(v26, v25, v27, v28);
        v40 = v29++;
        v41 = *(_QWORD *)(v39 + 12648);
        v90[v40] = *(_BYTE *)(v41 + v32 + 2);
        v44 = SGDGetUserSessionState(v41, v40, v42, v43);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v44 + 12648) + v32 + 2), 1u);
      }
      ++v32;
      ++v82;
    }
    while ( v82 < 6 );
    v83 = 0;
    v45 = 16LL * v4;
    do
    {
      v26 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12648);
      if ( !*(_BYTE *)(17LL * v4 + v26 + 10) )
        break;
      v46 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12648);
      v51 = SGDGetUserSessionState(v48, v47, v49, v50);
      if ( !(unsigned int)IsKeyDownSpecified(
                            *(_BYTE *)(*(_QWORD *)(v51 + 12648) + v45 + 10),
                            (const unsigned __int8 *)(v31 + v46 + 2)) )
      {
        v52 = SGDGetUserSessionState(v26, v25, v27, v28);
        v53 = v30++;
        v54 = *(_QWORD *)(v52 + 12648);
        v91[v53] = *(_BYTE *)(v54 + v45 + 10);
        v57 = SGDGetUserSessionState(v54, v53, v55, v56);
        SendKeyUpDown(*(_BYTE *)(*(_QWORD *)(v57 + 12648) + v45 + 10), 0);
      }
      ++v45;
      ++v83;
    }
    while ( v83 < 6 );
    v6 = a1;
  }
  v89 = 0;
  v87 = 0;
  v59 = *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12648);
  if ( *(_BYTE *)(v59 + 16LL * v4 + 9) == 0xE0 )
  {
    v62 = v87 | 2;
LABEL_33:
    v87 = v62;
    goto LABEL_34;
  }
  v59 = *(_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 12648);
  v62 = v87;
  if ( *(_BYTE *)(v59 + 16LL * v4 + 9) == 0xE1 )
  {
    v62 = v87 | 4;
    goto LABEL_33;
  }
LABEL_34:
  if ( *((__int16 *)v6 + 1) < 0 )
    v87 = v62 | 1;
  v86[1] = *(unsigned __int8 *)(*(_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 12648) + 16LL * v4 + 8);
  v86[0] = 0;
  ProcessKeyboardInputWorker(v86, a3, 0LL);
  if ( *((__int16 *)v6 + 1) >= 0 )
  {
    v67 = *(_BYTE *)(SGDGetUserSessionState(v64, v63, v65, v66) + 13776);
    *(_BYTE *)(SGDGetUserSessionState(v69, v68, v70, v71) + 13777) = v67;
    *(_DWORD *)(SGDGetUserSessionState(v73, v72, v74, v75) + 12660) = v4;
  }
  if ( v29 )
  {
    v76 = v90;
    v77 = v29;
    do
    {
      SendKeyUpDown(*v76++, 0);
      --v77;
    }
    while ( v77 );
  }
  if ( v30 )
  {
    v78 = v91;
    v79 = v30;
    do
    {
      SendKeyUpDown(*v78++, 1u);
      --v79;
    }
    while ( v79 );
  }
  return 0LL;
}
