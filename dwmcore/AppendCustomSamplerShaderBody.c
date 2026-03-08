/*
 * XREFs of AppendCustomSamplerShaderBody @ 0x1800FE21C
 * Callers:
 *     AppendShaderBody @ 0x180028340 (AppendShaderBody.c)
 * Callees:
 *     AppendColorModifications @ 0x180027BE4 (AppendColorModifications.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetExtendModeDecoration @ 0x1800FE3D8 (GetExtendModeDecoration.c)
 *     ?insert@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@D@2@V?$basic_iterator@$$CBD@2@_KAEBD@Z @ 0x1800FE400 (-insert@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FE4CC (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     ??1?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180207A4C (--1-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@.c)
 */

__int64 __fastcall AppendCustomSamplerShaderBody(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  char ExtendModeDecoration; // al
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // al
  int appended; // eax
  unsigned int v22; // edi
  _BYTE *v23; // rcx
  __int64 v25; // rdx
  _BYTE v26[8]; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE *v27; // [rsp+38h] [rbp-99h] BYREF
  __int64 v28; // [rsp+40h] [rbp-91h]
  __int64 v29; // [rsp+48h] [rbp-89h]
  __int64 v30; // [rsp+50h] [rbp-81h]
  __int128 v31; // [rsp+60h] [rbp-71h] BYREF
  void *v32; // [rsp+70h] [rbp-61h] BYREF
  _BYTE *v33; // [rsp+78h] [rbp-59h]
  char *v34; // [rsp+80h] [rbp-51h]
  _BYTE v35[48]; // [rsp+88h] [rbp-49h] BYREF
  char v36; // [rsp+B8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]

  v29 = a5;
  v28 = a6;
  v11 = -1LL;
  v30 = a7;
  v32 = v35;
  v33 = v35;
  v34 = &v36;
  do
    ++v11;
  while ( *(_BYTE *)(*(_QWORD *)(a3 + 40) + v11) );
  v26[0] = 0;
  if ( v11 == -3 )
  {
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
      &v32,
      0LL,
      0LL);
  }
  else
  {
    v27 = v35;
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v32,
      (unsigned int)&v31,
      (unsigned int)&v27,
      v11 + 3,
      (__int64)v26);
  }
  memcpy_0(v32, *(const void **)(a3 + 40), v11 + 1);
  v15 = a4 + 32LL * (unsigned __int8)*(_WORD *)(a3 + 52);
  if ( *(_BYTE *)(v15 + 18) )
  {
    LOBYTE(v13) = *(_BYTE *)(v15 + 16);
    if ( (_BYTE)v13 )
    {
      ExtendModeDecoration = GetExtendModeDecoration(v13, v12, v14);
      v17 = v32;
      *((_BYTE *)v32 + v11) = ExtendModeDecoration;
      LOBYTE(v17) = *(_BYTE *)(v15 + 17);
      v20 = GetExtendModeDecoration(v17, v18, v19);
      *((_BYTE *)v32 + v11 + 1) = v20;
      *((_BYTE *)v32 + v11 + 2) = 0;
    }
  }
  v31 = *(_OWORD *)a3;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a2, v29, v28, (__int64)v32, &v31);
  v22 = appended;
  if ( appended < 0 )
  {
    v25 = 1153LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shaderlinking.cpp",
      (const char *)(unsigned int)appended);
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::~vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>(&v32);
    return v22;
  }
  appended = AppendColorModifications(a1, (__int128 *)v15, a2, v30);
  v22 = appended;
  if ( appended < 0 )
  {
    v25 = 1162LL;
    goto LABEL_18;
  }
  v23 = v32;
  if ( v33 != v32 )
  {
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
      &v32,
      0LL,
      v33 - (_BYTE *)v32);
    v23 = v32;
  }
  v32 = 0LL;
  if ( v23 == v35 )
    v23 = 0LL;
  operator delete(v23);
  return 0LL;
}
