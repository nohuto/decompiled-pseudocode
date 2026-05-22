/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800A6948
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A716C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003CF48 (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003CF54 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18003D06C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@0AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800A4C44 (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800A4CBC (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800A4E60 (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5EF4 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        char **a3,
        _DWORD *a4)
{
  unsigned __int64 *v5; // r15
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r12
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  int i; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  int v19; // r8d
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 *j; // rbx
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  bool v28; // cf
  size_t v29; // rax
  char *v30; // rax
  const char *v31; // r9
  char *v32; // rbx
  __int64 result; // rax
  unsigned __int8 k; // al
  __int64 v35; // r13
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  size_t v38; // rax
  char *v39; // rax
  char *v40; // rdi
  char *v41; // rcx
  char *v42; // rdi
  unsigned __int64 v43; // r10
  __int64 m; // r8
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int64 v48; // xmm0_8
  __int64 v49; // rax
  char *v50; // rax
  char *v51; // rcx
  char *v52; // rdi
  __int128 v53; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 *v54; // [rsp+40h] [rbp-C8h]
  __int128 v55; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+60h] [rbp-A8h]
  __int128 v57; // [rsp+70h] [rbp-98h]
  __int128 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+90h] [rbp-78h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-68h]
  __int128 v61; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h]
  char *v63; // [rsp+C0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  unsigned __int8 v66; // [rsp+110h] [rbp+8h]
  char *v67; // [rsp+118h] [rbp+10h] BYREF
  char **v68; // [rsp+120h] [rbp+18h]
  _DWORD *v69; // [rsp+128h] [rbp+20h]

  v69 = a4;
  v68 = a3;
  LOBYTE(v65) = a1;
  v53 = 0LL;
  v5 = 0LL;
  v54 = 0LL;
  v6 = 0;
  v7 = *(_WORD *)(a2 + 32);
  v8 = 0LL;
  v9 = 0LL;
  try
  {
    while ( v7 < *(_WORD *)(a2 + 36) )
    {
      v10 = 104LL * v7;
      if ( *(_WORD *)(v10 + a2 + 50) )
      {
        if ( *(_BYTE *)(v10 + a2 + 46) > v6 )
        {
          v61 = 0LL;
          v62 = 0LL;
          if ( v5 == v8 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              (__int64 *)&v53,
              (__int64)v8,
              &v61);
            v5 = v54;
            v8 = (unsigned __int64 *)*((_QWORD *)&v53 + 1);
            v9 = (unsigned __int64 *)v53;
            v12 = v62;
            v11 = (void *)v61;
          }
          else
          {
            *v8 = 0LL;
            v8[1] = 0LL;
            v8[2] = 0LL;
            v11 = 0LL;
            v12 = 0LL;
            v8 += 3;
            *((_QWORD *)&v53 + 1) = v8;
          }
          if ( v11 )
          {
            v13 = (__int64)((unsigned __int128)((v12 - (__int64)v11) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
            std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(72 * ((v13 >> 63) + v13)));
          }
        }
        v14 = *(unsigned __int8 *)(v10 + a2 + 47) + 8LL * *(unsigned __int16 *)(v10 + a2 + 52);
        for ( i = 0; ; ++i )
        {
          v65 = i;
          if ( i >= *(unsigned __int16 *)(v10 + a2 + 50) )
            break;
          v16 = *(unsigned __int16 *)(v10 + a2 + 48);
          v17 = (v16 + v14 - 1) >> 3;
          v18 = v14 >> 3;
          if ( (unsigned int)v16 >= 0x20 )
            v19 = 0;
          else
            v19 = 1 << v16;
          v20 = v19 - 1;
          WORD4(v55) = *(_WORD *)(v10 + a2 + 44);
          WORD5(v55) = *(_WORD *)(v10 + a2 + 104);
          LODWORD(v56) = *(_DWORD *)(v10 + a2 + 64);
          HIDWORD(v55) = *(unsigned __int16 *)(v10 + a2 + 62);
          LODWORD(v55) = i * v16 + 8 * *(unsigned __int16 *)(v10 + a2 + 52);
          DWORD1(v55) = v16;
          *((_QWORD *)&v56 + 1) = (unsigned int)v20 & *(_DWORD *)(v10 + a2 + 124);
          *(_QWORD *)&v57 = (unsigned int)v20 & *(_DWORD *)(v10 + a2 + 128);
          DWORD2(v57) = (unsigned __int8)(v17 - v18 + 1);
          HIDWORD(v57) = v14 & 7;
          LODWORD(v58) = (unsigned __int16)(v17 - 1);
          DWORD1(v58) = v20;
          DWORD2(v58) = (unsigned __int16)(v18 - 1);
          BYTE12(v58) = *(_BYTE *)(v10 + a2 + 46);
          v21 = *(_DWORD *)(v10 + a2 + 68) & 8;
          v22 = 0;
          if ( !v21 )
            v22 = 4;
          DWORD1(v56) = v22;
          if ( (*(_BYTE *)(v10 + a2 + 68) & 2) != 0 )
            DWORD1(v56) = v21 != 0 ? 1 : 5;
          v23 = (__int64 *)&v9[3
                             * ((unsigned __int64)((unsigned __int128)(((char *)v8 - (char *)v9)
                                                                     * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
                             - 3
                             + 3
                             * ((__int64)((unsigned __int128)(((char *)v8 - (char *)v9) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2)];
          v24 = v23[1];
          if ( v23[2] == v24 )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v23, v24, (__int64)&v55);
            i = v65;
          }
          else
          {
            *(_OWORD *)v24 = v55;
            *(_OWORD *)(v24 + 16) = v56;
            *(_OWORD *)(v24 + 32) = v57;
            *(_OWORD *)(v24 + 48) = v58;
            *(_QWORD *)(v24 + 64) = v59;
            v23[1] += 72LL;
          }
          v14 += *(unsigned __int16 *)(v10 + a2 + 48);
        }
        v6 = *(_BYTE *)(v10 + a2 + 46);
      }
      ++v7;
    }
    for ( j = v9; j != v8; j += 3 )
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        *j,
        j[1],
        (__int64)(j[1] - *j) / 72,
        v65);
    v26 = ((char *)v8 - (char *)v9) / 24;
    v27 = 24 * v26;
    if ( !is_mul_ok(v26, 0x18uLL) )
      v27 = -1LL;
    v28 = __CFADD__(v27, 8LL);
    v29 = v27 + 8;
    if ( v28 )
      v29 = -1LL;
    v30 = (char *)operator new[](v29, (const struct std::nothrow_t *)&std::nothrow);
    if ( v30 )
    {
      *(_QWORD *)v30 = v26;
      v32 = v30 + 8;
      `eh vector constructor iterator'(
        v30 + 8,
        24LL,
        ((char *)v8 - (char *)v9) / 24,
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor);
    }
    else
    {
      v32 = 0LL;
    }
    v67 = v32;
    if ( v32 )
    {
      for ( k = 0; ; k = v66 + 1 )
      {
        v66 = k;
        if ( k >= v26 )
          break;
        v35 = 3LL * k;
        *(_DWORD *)&v32[8 * v35] = 2;
        v32[8 * v35 + 4] = *(_BYTE *)(v9[3 * k] + 60);
        v36 = (unsigned int)((LODWORD(v9[3 * k + 1]) - LODWORD(v9[3 * k])) / 72);
        v60 = v36;
        *(_DWORD *)&v32[8 * v35 + 8] = v36;
        v37 = 72 * v36;
        if ( !is_mul_ok(v36, 0x48uLL) )
          v37 = -1LL;
        v28 = __CFADD__(v37, 8LL);
        v38 = v37 + 8;
        if ( v28 )
          v38 = -1LL;
        v39 = (char *)operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
        v63 = v39;
        if ( v39 )
        {
          *(_QWORD *)v39 = v36;
          v40 = v39 + 8;
          `eh vector constructor iterator'(
            v39 + 8,
            72LL,
            v60,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo);
        }
        else
        {
          v40 = 0LL;
        }
        v41 = *(char **)&v32[8 * v35 + 16];
        *(_QWORD *)&v32[8 * v35 + 16] = v40;
        if ( v41 )
        {
          v42 = v41 - 8;
          `eh vector destructor iterator'(
            v41,
            72LL,
            *((_QWORD *)v41 - 1),
            (void (*)(void *))BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp);
          operator delete[](v42, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v42 + 8));
          v40 = *(char **)&v32[8 * v35 + 16];
        }
        if ( !v40 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x252,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL);
          `eh vector destructor iterator'(
            v32,
            24LL,
            *((_QWORD *)v32 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v32 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v32 - 1) + 8));
          if ( v9 )
          {
            std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
            std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(24 * (((char *)v5 - (char *)v9) / 24)));
          }
          return 2147942414LL;
        }
        v43 = 0LL;
        for ( m = 0LL; ; m += 72LL )
        {
          v31 = (const char *)v9[v35];
          if ( v43 >= (__int64)(v9[v35 + 1] - (_QWORD)v31) / 72 )
            break;
          v45 = *(_OWORD *)&v31[m + 16];
          v46 = *(_OWORD *)&v31[m + 32];
          v47 = *(_OWORD *)&v31[m + 48];
          v48 = *(_QWORD *)&v31[m + 64];
          v49 = *(_QWORD *)&v32[8 * v35 + 16];
          *(_OWORD *)(m + v49) = *(_OWORD *)&v31[m];
          *(_OWORD *)(m + v49 + 16) = v45;
          *(_OWORD *)(m + v49 + 32) = v46;
          *(_OWORD *)(m + v49 + 48) = v47;
          *(_QWORD *)(m + v49 + 64) = v48;
          ++v43;
        }
      }
      if ( v68 != &v67 )
      {
        v50 = v32;
        v32 = 0LL;
        v67 = 0LL;
        v51 = *v68;
        *v68 = v50;
        if ( v51 )
        {
          v52 = v51 - 8;
          `eh vector destructor iterator'(
            v51,
            24LL,
            *((_QWORD *)v51 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v52, (const struct std::nothrow_t *)(24LL * *(_QWORD *)v52 + 8));
        }
      }
      *v69 = v26;
      if ( v32 )
      {
        `eh vector destructor iterator'(
          v32,
          24LL,
          *((_QWORD *)v32 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v32 - 8, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v32 - 1) + 8));
      }
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(24 * (((char *)v5 - (char *)v9) / 24)));
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL);
      if ( v9 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>((__int64)v9, (__int64)v8);
        std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)(24 * (((char *)v5 - (char *)v9) / 24)));
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                           v31);
  }
  return result;
}
