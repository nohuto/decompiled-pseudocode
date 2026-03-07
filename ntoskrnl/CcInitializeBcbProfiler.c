char CcInitializeBcbProfiler()
{
  unsigned __int64 Pool2; // rax
  const char *LoadOptions; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(__int64, __int64); // r8
  unsigned __int128 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  int v8; // eax
  _DWORD *v9; // rbx
  unsigned int *v10; // r8
  unsigned int *v11; // rdi
  int v12; // r14d
  unsigned int v13; // edx
  unsigned int *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  ULONG_PTR v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int128 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  ULONG v27; // r10d
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r10d
  unsigned __int64 Dpc; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int128 v40; // rax
  _BYTE *v41; // rax
  unsigned int *v42; // rax
  unsigned int v43; // r12d
  _QWORD *v44; // rdi
  __int64 v45; // r15
  int v46; // r10d
  _QWORD *v47; // r13
  unsigned int v48; // r14d
  _QWORD *v49; // r9
  unsigned __int64 v50; // rcx
  const char *v51; // rax
  __int64 v52; // r8
  unsigned int v53; // r11d
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned __int128 v56; // rax
  unsigned int v57; // edx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  unsigned __int8 *v63; // rdi
  __int64 v64; // rax
  bool v65; // zf
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  LARGE_INTEGER v68; // r10
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  char SubStr[16]; // [rsp+38h] [rbp-41h] BYREF
  int v73; // [rsp+48h] [rbp-31h]
  int v74; // [rsp+4Ch] [rbp-2Dh]
  int v75; // [rsp+50h] [rbp-29h]
  int v76; // [rsp+54h] [rbp-25h]
  int v77; // [rsp+58h] [rbp-21h]
  int v78; // [rsp+5Ch] [rbp-1Dh]
  int v79; // [rsp+60h] [rbp-19h]
  unsigned __int64 v80; // [rsp+68h] [rbp-11h]
  __int64 v81; // [rsp+70h] [rbp-9h]
  _QWORD v82[11]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v83; // [rsp+E0h] [rbp+67h] BYREF
  int v84; // [rsp+E8h] [rbp+6Fh]
  int v85; // [rsp+F0h] [rbp+77h]
  int v86; // [rsp+F8h] [rbp+7Fh]

  LOBYTE(Pool2) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    v84 = 57409;
    SubStr[0] = __ROR4__(42496, 201);
    v85 = 1073741840;
    SubStr[1] = __ROL4__(1073741840, 66);
    v86 = 560;
    SubStr[2] = __ROR4__(560, 67);
    v73 = 18105924;
    SubStr[3] = __ROR4__(18087936, 210);
    v74 = 268435458;
    SubStr[4] = __ROL4__(268435458, 69);
    v75 = 5056;
    SubStr[5] = __ROR4__(5056, 70);
    v76 = 2013283909;
    SubStr[6] = __ROR4__(2013265922, 219);
    v77 = 1409286144;
    SubStr[7] = __ROL4__(1409286144, 72);
    v78 = 29696;
    SubStr[8] = __ROR4__(29696, 73);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    Pool2 = (unsigned __int64)strstr(LoadOptions, SubStr);
    if ( !Pool2 )
    {
      v2 = RtlImageNtHeader(0x140000000LL);
      v3 = __rdtsc();
      v4 = CcBcbProfiler;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v81 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6);
      v8 = 0;
      v80 = v7;
      if ( v7 >= 0x32 )
        LODWORD(v4) = (unsigned int)sub_14067C010;
      LOBYTE(v8) = v7 >= 0x32;
      v79 = v8;
      v9 = (_DWORD *)RtlSectionTableFromVirtualAddress(v2, 0x140000000LL, (unsigned int)v4 - 0x40000000);
      v10 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v9, v82, &v83);
      if ( !v10 || v83 < 0xC )
      {
        v18 = -1073741701LL;
LABEL_65:
        KeBugCheckEx(__ROR4__(317, 160), 6uLL, (ULONG_PTR)v9, v18, 0LL);
      }
      v11 = 0LL;
      v12 = 0;
      v13 = v9[3];
      v14 = &v10[3 * (v83 / 0xC)];
      v15 = v9[4];
      if ( v15 <= v9[2] )
        v15 = v9[2];
      v16 = v13 + v15;
      do
      {
        v17 = *v10;
        if ( *v10 < v13 )
        {
          if ( v17 >= v16 )
            break;
        }
        else
        {
          if ( v17 >= v16 )
            break;
          v12 = (int)v10;
          if ( !v11 )
            v11 = v10;
        }
        v10 += 3;
      }
      while ( v10 != v14 );
      if ( !v11 )
      {
        v18 = -1073741569LL;
        goto LABEL_65;
      }
      v19 = __rdtsc();
      v20 = (__ROR8__(v19, 3) ^ v19) * (unsigned __int128)0x7010008004002001uLL;
      v82[1] = *((_QWORD *)&v20 + 1);
      v21 = v20 ^ *((_QWORD *)&v20 + 1);
      Pool2 = 10 * (((unsigned __int64)v20 ^ *((_QWORD *)&v20 + 1)) / 0xA);
      if ( v21 - Pool2 < 5 )
      {
        v22 = __rdtsc();
        v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
        v82[2] = *((_QWORD *)&v23 + 1);
        v24 = ((unsigned __int64)v23 ^ *((_QWORD *)&v23 + 1)) % 0xB;
        if ( (unsigned int)v24 > 5 )
        {
          v28 = v24 - 6;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 )
                {
                  v27 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v31 = __rdtsc();
                  v32 = __ROR8__(v31, 3);
                  v33 = (67117057 * (v32 ^ v31)) ^ (((v32 ^ v31) * (unsigned __int128)0x7010008004002001uLL) >> 64);
                  v27 = ((((((v33 % 0x1A + 97) << 8) | ((v33 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v33 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v33 >> 10)
                                                                    - 26
                                                                    * ((unsigned int)((1321528399
                                                                                     * (unsigned __int64)(v33 >> 10)) >> 32) >> 3)
                                                                    + 97)) << 8) | ((v33 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v27 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v27 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v27 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v24 == 5 )
        {
          v27 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
              v27 = v26 == 1 ? __ROR4__(-1474152133, 15) : __ROL4__(1728537748, 4);
            else
              v27 = __ROR4__(-2051698419, 2);
          }
          else
          {
            v27 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v27 = __ROR4__(-795291432, 6);
        }
        Pool2 = ExAllocatePool2(64LL, 0xD8uLL, v27);
        Dpc = Pool2;
        if ( Pool2 )
        {
          KeInitializeTimer((PKTIMER)(Pool2 + 64));
          *(_DWORD *)Dpc = 275;
          *(_QWORD *)(Dpc + 24) = CcBcbProfiler;
          *(_QWORD *)(Dpc + 32) = Dpc;
          *(_QWORD *)(Dpc + 56) = 0LL;
          *(_QWORD *)(Dpc + 16) = 0LL;
          v35 = __rdtsc();
          v36 = __ROR8__(v35, 3);
          *(_QWORD *)(Dpc + 160) = (0x7010008004002001LL * (v36 ^ v35)) ^ (((v36 ^ v35)
                                                                          * (unsigned __int128)0x7010008004002001uLL) >> 64);
          v37 = __rdtsc();
          v38 = __ROR8__(v37, 3);
          *(_BYTE *)(Dpc + 168) = ((0x7010008004002001LL * (v38 ^ v37)) ^ (((v38 ^ v37)
                                                                          * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                % 0x3F
                                + 1;
          v39 = __rdtsc();
          *(_QWORD *)(Dpc + 136) = 0x140000000uLL;
          v40 = (__ROR8__(v39, 3) ^ v39) * (unsigned __int128)0x7010008004002001uLL;
          v41 = (_BYTE *)RtlpConvertFunctionEntry(
                           (__int64)&v11[3
                                       * (((unsigned __int64)v40 ^ *((_QWORD *)&v40 + 1))
                                        % (unsigned int)((v12 - (int)v11) / 12))],
                           0x140000000uLL);
          v42 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                  v41,
                                  *(_QWORD *)(Dpc + 136),
                                  *(_QWORD *)(Dpc + 136) + *(unsigned int *)v41);
          v43 = *(unsigned __int8 *)(Dpc + 168);
          v44 = v42;
          v45 = *(_QWORD *)(Dpc + 160);
          LOBYTE(v46) = *(_BYTE *)(Dpc + 168);
          *(_QWORD *)(Dpc + 128) = v42;
          v47 = (_QWORD *)(*(_QWORD *)(Dpc + 136) + *v42);
          v48 = v42[1] - *v42;
          v49 = v47;
          v50 = (unsigned __int64)v47 + v48;
          v83 = v43;
          v51 = (const char *)v47;
          if ( (unsigned __int64)v47 < v50 )
          {
            do
            {
              _mm_prefetch(v51, 0);
              v51 += 64;
            }
            while ( (unsigned __int64)v51 < v50 );
          }
          v52 = v45;
          v53 = v48 >> 7;
          if ( v48 >> 7 )
          {
            do
            {
              v54 = 8LL;
              do
              {
                v55 = v49[1] ^ __ROL8__(*v49 ^ v52, v46);
                v49 += 2;
                v52 = __ROL8__(v55, v46);
                --v54;
              }
              while ( v54 );
              v56 = (__ROL8__(v45 ^ ((char *)v49 - (char *)v47), 17) ^ v45 ^ (unsigned __int64)((char *)v49 - (char *)v47))
                  * (unsigned __int128)0x7010008004002001uLL;
              v46 = ((unsigned __int8)v56 ^ (unsigned __int8)(BYTE8(v56) ^ v46)) & 0x3F;
              if ( !v46 )
                LOBYTE(v46) = 1;
              --v53;
            }
            while ( v53 );
            v7 = v80;
            v43 = v83;
          }
          v57 = v48 & 0x7F;
          if ( v57 >= 8 )
          {
            v58 = (unsigned __int64)(v48 & 0x7F) >> 3;
            do
            {
              v52 = __ROL8__(*v49++ ^ v52, v46);
              v57 -= 8;
              --v58;
            }
            while ( v58 );
          }
          for ( ; v57; --v57 )
          {
            v59 = *(unsigned __int8 *)v49;
            v49 = (_QWORD *)((char *)v49 + 1);
            v52 = __ROL8__(v59 ^ v52, v46);
          }
          *(_QWORD *)(Dpc + 152) = v52;
          v60 = (const char *)v44;
          if ( v44 < (_QWORD *)((char *)v44 + 12) )
          {
            do
            {
              _mm_prefetch(v60, 0);
              v60 += 64;
            }
            while ( v60 < (const char *)v44 + 12 );
          }
          v61 = __ROL8__(*v44 ^ v52, v43);
          LODWORD(v62) = 4;
          v63 = (unsigned __int8 *)(v44 + 1);
          do
          {
            v64 = *v63++;
            v61 = __ROL8__(v64 ^ v61, v43);
            v65 = (_DWORD)v62 == 1;
            v62 = (unsigned int)(v62 - 1);
          }
          while ( !v65 );
          *(_DWORD *)(Dpc + 172) = v79;
          *(_QWORD *)(Dpc + 152) = v61;
          *(_DWORD *)(Dpc + 144) = v48;
          *(_DWORD *)(Dpc + 176) = KiAreCodePatchesAllowed(v43, v62, v61, v49) != 0;
          if ( v7 >= 0x32 )
          {
            *(_QWORD *)(Dpc + 184) = 0LL;
            *(_QWORD *)(Dpc + 200) = sub_14067C010;
            *(_QWORD *)(Dpc + 208) = Dpc;
          }
          v66 = __rdtsc();
          v67 = __ROR8__(v66, 3);
          v68.QuadPart = -1200000000LL
                       - ((0x7010008004002001LL * (v67 ^ v66)) ^ (((v67 ^ v66) * (unsigned __int128)0x7010008004002001uLL) >> 64))
                       % 0x5F5E100;
          v69 = __rdtsc();
          v70 = __ROR8__(v69, 3) ^ v69;
          LOBYTE(Pool2) = KeSetCoalescableTimer(
                            (PKTIMER)(Dpc + 64),
                            v68,
                            0,
                            ((0x7010008004002001LL * v70) ^ ((v70 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                          % 0x2710,
                            (PKDPC)Dpc);
        }
      }
    }
  }
  return Pool2;
}
