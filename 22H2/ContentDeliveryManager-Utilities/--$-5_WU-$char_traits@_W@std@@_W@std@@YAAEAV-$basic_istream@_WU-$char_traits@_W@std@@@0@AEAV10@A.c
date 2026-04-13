/*
 * XREFs of ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800AD938
 * Callers:
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800AD6CC (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002B0F0 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x180097C1C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x1800AEC2C (-get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istreambu.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800AF564 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r15d
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  char *v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  char *v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v22; // [rsp+60h] [rbp-68h] BYREF
  char v23; // [rsp+68h] [rbp-60h]
  __int64 v24; // [rsp+70h] [rbp-58h] BYREF
  bool v25; // [rsp+78h] [rbp-50h]
  __int64 *v26; // [rsp+80h] [rbp-48h]
  char v28; // [rsp+90h] [rbp-38h] BYREF
  int v30; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a1;
  v30 = 0;
  v26 = a1;
  v5 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( std::wistream::_Ipfx(v3) )
  {
    v6 = **(_QWORD **)((char *)v3 + *(int *)(*v3 + 4) + 64);
    v31 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(&v31);
    if ( v6 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      v9 = a2[2];
      v10 = a2[1];
      v11 = *a2;
      v12 = (__int64)v3 + *(int *)(*v3 + 4);
      v22 = 0LL;
      v23 = 1;
      v24 = *(_QWORD *)(v12 + 72);
      v25 = v24 == 0;
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        v7,
        (unsigned int)&v28,
        (unsigned int)&v24,
        (unsigned int)&v22,
        v12,
        (__int64)&v30,
        v11,
        v10,
        v9);
    }
    catch ( ... )
    {
      v18 = (char *)a1 + *(int *)(*a1 + 4);
      v19 = *((_DWORD *)v18 + 4) | 4;
      v20 = v19 & 0x17;
      *((_DWORD *)v18 + 4) = v20;
      if ( (v20 & *((_DWORD *)v18 + 5)) != 0 )
        throw;
      v3 = a1;
      v4 = a1;
    }
  }
  v13 = *v3;
  v14 = (char *)v3 + *(int *)(*v3 + 4);
  if ( v30 )
  {
    v15 = v30 | *((_DWORD *)v14 + 4);
    if ( !*((_QWORD *)v14 + 9) )
      LOBYTE(v15) = v15 | 4;
    std::ios_base::clear((std::ios_base *)v14, v15, 0);
    v13 = *v4;
  }
  v16 = *(__int64 *)((char *)v3 + *(int *)(v13 + 4) + 72);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v3;
}
