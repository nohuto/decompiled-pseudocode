/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800F19D8
 * Callers:
 *     ?reserve_region@?$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$buffer_impl@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K0@Z @ 0x1800F1B34 (-reserve_region@-$vector_facade@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$buffer_impl@.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061AA4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@V?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@stdext@@V?$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@0V12@@Z @ 0x1800F0D28 (--$uninitialized_copy@V-$move_iterator@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  __int64 v4; // r11
  _BYTE *v5; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  const void *v10; // rax
  __int64 v11; // r8
  const void *v12; // rdx
  const void *v13; // rbx
  void *v14; // rcx
  bool v15; // zf
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-18h]

  v3 = a1[2];
  v4 = 0xE38E38E38E38E39LL;
  v5 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v3 - v5) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
  if ( (v3 - v5) / 144 < a2 )
  {
    v7 = (v5 - (_BYTE *)*a1) / 144;
    v8 = v7 + a2;
    if ( v7 + a2 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 - (_BYTE *)*a1),
           ((unsigned __int64)((unsigned __int128)((v3 - (_BYTE *)*a1) * (__int128)v4) >> 64) >> 63)
         + ((__int64)((unsigned __int128)((v3 - (_BYTE *)*a1) * (__int128)v4) >> 64) >> 3),
           v8);
    v10 = operator new(saturated_mul(v9, 0x90uLL));
    v11 = (__int64)a1[1];
    v12 = *a1;
    *(_QWORD *)&v16 = v10;
    *((_QWORD *)&v16 + 1) = v7;
    v13 = v10;
    v17 = 0LL;
    v18 = v16;
    v19 = 0LL;
    std::uninitialized_copy<std::move_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>,stdext::checked_array_iterator<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>>(
      (__int64)&v16,
      v12,
      v11,
      &v18);
    v14 = (void *)*a1;
    v15 = *a1 == a1 + 3;
    *a1 = v13;
    if ( v15 )
      v14 = 0LL;
    operator delete(v14);
    a1[1] = (char *)*a1 + 144 * v7;
    result = (unsigned __int64)*a1 + 144 * v9;
    a1[2] = (const void *)result;
  }
  return result;
}
