/*
 * XREFs of SymCryptEcurveAllocate @ 0x1403F252C
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A74544 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x1403F3750 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntIsEqualUint32 @ 0x1403F389C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptIntToModulus @ 0x1403F3A10 (SymCryptIntToModulus.c)
 *     SymCryptModAdd @ 0x1403F3A54 (SymCryptModAdd.c)
 *     SymCryptModDivPow2 @ 0x1403F3A90 (SymCryptModDivPow2.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValue @ 0x1403F3B80 (SymCryptModElementSetValue.c)
 *     SymCryptModElementSetValueUint32 @ 0x1403F3C0C (SymCryptModElementSetValueUint32.c)
 *     SymCryptModulusCreate @ 0x1403F3EC0 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x1403F3F20 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptOfflinePrecomputation @ 0x1403F9350 (SymCryptOfflinePrecomputation.c)
 *     SymCryptEcpointCreate @ 0x1403F94A0 (SymCryptEcpointCreate.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 *     SymCryptSizeofEcpointEx @ 0x1403F9DF8 (SymCryptSizeofEcpointEx.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FA5AC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptCallbackAlloc @ 0x14067B400 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x14067B438 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveAllocate(_DWORD *a1)
{
  unsigned int v2; // ecx
  __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // r15d
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rbx
  __int64 v43; // r15
  unsigned int v44; // edi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdi
  __int64 v53; // rsi
  int v54; // ebx
  __int64 *v55; // rcx
  int v56; // eax
  unsigned int v57; // r8d
  int v58; // r9d
  __int64 v60; // [rsp+20h] [rbp-98h]
  unsigned int v61; // [rsp+50h] [rbp-68h]
  unsigned int v62; // [rsp+54h] [rbp-64h]
  unsigned int v63; // [rsp+58h] [rbp-60h]
  int v64; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v65; // [rsp+60h] [rbp-58h]
  unsigned int v66; // [rsp+64h] [rbp-54h]
  unsigned __int64 v67; // [rsp+68h] [rbp-50h]
  unsigned __int64 v68; // [rsp+70h] [rbp-48h]
  char v69; // [rsp+C0h] [rbp+8h]
  unsigned int v70; // [rsp+D0h] [rbp+18h]
  unsigned int v71; // [rsp+D8h] [rbp+20h]
  int v72; // [rsp+D8h] [rbp+20h]

  v69 = 0;
  v2 = a1[3];
  v3 = 0LL;
  if ( v2 <= 0x80 && a1[4] <= 0x81u && a1[5] <= 2u && a1[6] <= 0x100u )
  {
    v4 = SymCryptDigitsFromBits(8 * v2);
    v5 = SymCryptDigitsFromBits((unsigned int)(8 * a1[4]));
    v61 = v5;
    v65 = SymCryptDigitsFromBits((unsigned int)(8 * a1[5]));
    v71 = SymCryptSizeofModulusFromDigits(v4);
    v62 = SymCryptSizeofModulusFromDigits(v5);
    v63 = SymCryptSizeofIntFromDigits(v65, v6);
    v7 = (((unsigned int)(8 * a1[3]) >> 9) + ((((8 * a1[3]) & 0x1FFu) + 511) >> 9)) << 6;
    switch ( a1[1] )
    {
      case 1:
        v8 = 67;
        break;
      case 2:
        v8 = 84;
        break;
      case 3:
        v8 = 98;
        break;
      default:
        return v3;
    }
    v9 = SymCryptSizeofEcpointEx((unsigned int)v7, v8 & 0xF);
    v66 = v9;
    if ( (unsigned int)(a1[1] - 1) <= 1 )
      v9 *= 16;
    v10 = v71 + v62 + v63 + 672 + 2 * (_DWORD)v7 + v9;
    v64 = v10;
    v68 = v10;
    v3 = SymCryptCallbackAlloc((unsigned int)v10);
    if ( v3 )
    {
      v11 = v4 << 8;
      v12 = SymCryptSizeofEcpointEx((unsigned int)v7, 4LL);
      v13 = v11 + 64;
      v14 = 704 * v4 + 256;
      if ( (unsigned int)(v11 + 64) > (unsigned int)(v11 + 64)
                                    + (v4 << 6)
                                    + 64LL
                                    + 2 * ((unsigned __int64)(v4 << 6) + 64)
                                    + v11 )
        v14 = v11 + 64;
      v15 = v14 + v12;
      v16 = v5;
      if ( v4 > v5 )
        v16 = v4;
      v17 = v15 + 8 * v7;
      v18 = (v16 << 8) + 192;
      v19 = 16 * v16;
      if ( v19 > v18 )
        v18 = v19;
      if ( v17 > v18 )
        v18 = v17;
      if ( v18 > v13 )
        v13 = v18;
      v67 = v13;
      v70 = v13;
      v20 = SymCryptCallbackAlloc(v13);
      if ( !v20 )
        goto LABEL_71;
      *(_DWORD *)v3 = 1;
      *(_DWORD *)(v3 + 4) = a1[1];
      *(_DWORD *)(v3 + 8) = v8;
      *(_DWORD *)(v3 + 28) = v61;
      *(_DWORD *)(v3 + 16) = v4;
      *(_DWORD *)(v3 + 20) = a1[3];
      *(_DWORD *)(v3 + 32) = a1[4];
      *(_DWORD *)(v3 + 36) = v7;
      *(_DWORD *)(v3 + 40) = v64;
      v21 = SymCryptModulusCreate(v3 + 672, v71, v4);
      *(_QWORD *)(v3 + 616) = v21;
      if ( !v21 )
        goto LABEL_70;
      v22 = SymCryptIntFromModulus(v21);
      v23 = v22;
      if ( !v22 )
        goto LABEL_70;
      if ( (unsigned int)SymCryptIntSetValue(a1 + 7, (unsigned int)a1[3], 2LL, v22) )
        goto LABEL_70;
      v24 = SymCryptIntBitsizeOfValue(v23);
      *(_DWORD *)(v3 + 12) = v24;
      if ( v24 < 0x20 )
        goto LABEL_70;
      if ( (SymCryptIntGetValueLsbits32(v23) & 1) == 0 )
        goto LABEL_70;
      SymCryptIntToModulus(v23, *(_QWORD *)(v3 + 616), 800 * a1[3], 9, v20, v67);
      v25 = v71 + v3 + 672;
      v26 = (__int64)a1 + (unsigned int)a1[3] + 28;
      v27 = SymCryptModElementCreate(v25, (unsigned int)v7, *(_QWORD *)(v3 + 616));
      *(_QWORD *)(v3 + 632) = v27;
      if ( !v27 )
        goto LABEL_70;
      if ( (unsigned int)SymCryptModElementSetValue(v26, a1[3], 2, *(_QWORD *)(v3 + 616), v27, v20, v67) )
        goto LABEL_70;
      v28 = (unsigned int)v7 + v25;
      v29 = (unsigned int)a1[3] + v26;
      v30 = SymCryptModElementCreate(v28, (unsigned int)v7, *(_QWORD *)(v3 + 616));
      *(_QWORD *)(v3 + 640) = v30;
      if ( !v30 )
        goto LABEL_70;
      if ( (unsigned int)SymCryptModElementSetValue(v29, a1[3], 2, *(_QWORD *)(v3 + 616), v30, v20, v67) )
        goto LABEL_70;
      v31 = (unsigned int)a1[3];
      v32 = (unsigned int)v7 + v28;
      v72 = v31 + v29;
      v33 = (unsigned int)(2 * v31) + v31 + v29;
      v34 = SymCryptModulusCreate(v32, v62, v61);
      *(_QWORD *)(v3 + 624) = v34;
      if ( !v34 )
        goto LABEL_70;
      v35 = SymCryptIntFromModulus(v34);
      v36 = v35;
      if ( !v35 )
        goto LABEL_70;
      if ( (unsigned int)SymCryptIntSetValue(v33, (unsigned int)a1[4], 2LL, v35) )
        goto LABEL_70;
      v37 = SymCryptIntBitsizeOfValue(v36);
      *(_DWORD *)(v3 + 24) = v37;
      if ( v37 < 0x20 )
        goto LABEL_70;
      if ( (SymCryptIntGetValueLsbits32(v36) & 1) == 0 )
        goto LABEL_70;
      SymCryptIntToModulus(v36, *(_QWORD *)(v3 + 624), 1, 9, v20, v67);
      v38 = v62 + v32;
      v39 = (unsigned int)a1[4] + v33;
      v40 = SymCryptIntCreate(v38, v63, v65);
      *(_QWORD *)(v3 + 656) = v40;
      if ( !v40 )
        goto LABEL_70;
      if ( (unsigned int)SymCryptIntSetValue(v39, (unsigned int)a1[5], 2LL, v40) )
        goto LABEL_70;
      v41 = SymCryptIntBitsizeOfValue(*(_QWORD *)(v3 + 656)) - 1;
      *(_DWORD *)(v3 + 64) = v41;
      if ( v41 > 8 || !(unsigned int)SymCryptIntIsEqualUint32(*(_QWORD *)(v3 + 656), (unsigned int)(1 << v41)) )
        goto LABEL_70;
      v42 = v63 + v38;
      v43 = (unsigned int)a1[5] + v39;
      v44 = 1;
      v45 = a1[1];
      switch ( v45 )
      {
        case 1:
          v46 = *(_DWORD *)(v3 + 24) + 1;
          *(_DWORD *)(v3 + 88) = 6;
          *(_DWORD *)(v3 + 96) = v46;
          *(_DWORD *)(v3 + 92) = 16;
          SymCryptShortWeierstrassFillScratchSpaces(v3);
          break;
        case 2:
          v47 = *(_DWORD *)(v3 + 24) + 1;
          *(_DWORD *)(v3 + 88) = 6;
          *(_DWORD *)(v3 + 96) = v47;
          *(_DWORD *)(v3 + 92) = 16;
          SymCryptTwistedEdwardsFillScratchSpaces(v3);
          break;
        case 3:
          SymCryptMontgomeryFillScratchSpaces(v3);
          break;
      }
      v48 = SymCryptEcpointCreate(v42, v66, v3);
      *(_QWORD *)(v3 + 648) = v48;
      if ( !v48 )
        goto LABEL_70;
      LODWORD(v60) = 2;
      if ( (unsigned int)SymCryptEcpointSetValue(v3, v72, 2 * a1[3], 2, v60, v48, 1, v20, v67) )
        goto LABEL_70;
      v49 = v66 + v42;
      if ( (unsigned int)(a1[1] - 1) <= 1 )
      {
        *(_QWORD *)(v3 + 104) = *(_QWORD *)(v3 + 648);
        if ( *(_DWORD *)(v3 + 92) > 1u )
        {
          while ( 1 )
          {
            v50 = SymCryptEcpointCreate(v49, v66, v3);
            *(_QWORD *)(v3 + 8LL * v44 + 104) = v50;
            if ( !v50 )
              break;
            v49 += v66;
            if ( ++v44 >= *(_DWORD *)(v3 + 92) )
              goto LABEL_55;
          }
LABEL_70:
          SymCryptWipe(v20, v67);
          SymCryptCallbackFree(v20);
          if ( !v69 )
          {
LABEL_71:
            SymCryptWipe(v3, v68);
            SymCryptCallbackFree(v3);
            return 0LL;
          }
          return v3;
        }
LABEL_55:
        SymCryptOfflinePrecomputation(v3, v20, v67);
      }
      if ( a1[1] == 3 )
      {
        v51 = SymCryptModElementCreate(v20, (unsigned int)v7, *(_QWORD *)(v3 + 616));
        v52 = v70 - (unsigned int)v7;
        v53 = v20 + v7;
        v54 = v51;
        SymCryptModElementSetValueUint32(2, *(_QWORD *)(v3 + 616), v51, v53, v52);
        SymCryptModAdd(*(_QWORD *)(v3 + 616), *(_QWORD *)(v3 + 632), v54, *(_QWORD *)(v3 + 632), v53, v52);
        SymCryptModDivPow2(*(_QWORD *)(v3 + 616), *(_QWORD *)(v3 + 632), 2, *(_QWORD *)(v3 + 632), v53, v52);
      }
      if ( *a1 == 2 )
      {
        v55 = (__int64 *)(v43 + (unsigned int)a1[6]);
      }
      else
      {
        v56 = a1[1];
        if ( v56 == 1 )
        {
          v55 = (__int64 *)SymCryptEcurveParamsV2ExtensionShortWeierstrass;
        }
        else if ( v56 == 2 )
        {
          v55 = (__int64 *)SymCryptEcurveParamsV2ExtensionTwistedEdwards[0];
        }
        else
        {
          v55 = 0LL;
          if ( v56 == 3 )
            v55 = (__int64 *)SymCryptEcurveParamsV2ExtensionMontgomery;
        }
      }
      *(_DWORD *)(v3 + 68) = *(_DWORD *)v55;
      v57 = *((_DWORD *)v55 + 1);
      *(_DWORD *)(v3 + 72) = v57;
      v58 = *((_DWORD *)v55 + 2);
      *(_DWORD *)(v3 + 76) = v58;
      *(_DWORD *)(v3 + 80) = *((_DWORD *)v55 + 3);
      if ( v57 <= 0x20 && (!v57 || v57 + v58 <= *(_DWORD *)(v3 + 24) + *(_DWORD *)(v3 + 64)) )
        v69 = 1;
      goto LABEL_70;
    }
  }
  return v3;
}
