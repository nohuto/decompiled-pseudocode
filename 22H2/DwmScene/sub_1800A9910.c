/*
 * XREFs of sub_1800A9910 @ 0x1800A9910
 * Callers:
 *     sub_1800F7AC0 @ 0x1800F7AC0 (sub_1800F7AC0.c)
 *     sub_1800FA340 @ 0x1800FA340 (sub_1800FA340.c)
 * Callees:
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 *     sub_180099964 @ 0x180099964 (sub_180099964.c)
 *     sub_1800A5CAC @ 0x1800A5CAC (sub_1800A5CAC.c)
 *     sub_1800A7058 @ 0x1800A7058 (sub_1800A7058.c)
 *     sub_1800A71B4 @ 0x1800A71B4 (sub_1800A71B4.c)
 *     sub_1800A7B14 @ 0x1800A7B14 (sub_1800A7B14.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 *     sub_1800EB1E0 @ 0x1800EB1E0 (sub_1800EB1E0.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 */

char __fastcall sub_1800A9910(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  const void *v5; // rdx
  const void *v6; // rcx
  size_t v7; // r8
  const void *v8; // rdx
  const void *v9; // rcx
  size_t v10; // r8
  float v11; // xmm6_4
  char v12; // al
  bool v13; // zf
  __int64 v14; // r8
  _QWORD *v15; // rcx

  if ( !(unsigned __int8)sub_1800EB1E0() )
    return 0;
  v4 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( !sub_1800A5CAC((_QWORD *)(v4 + 104), (_QWORD *)(a1 + 104))
    || *(_DWORD *)(v4 + 128) != *(_DWORD *)(a1 + 128)
    || *(_QWORD *)(v4 + 136) != *(_QWORD *)(a1 + 136)
    || *(_QWORD *)(v4 + 152) != *(_QWORD *)(a1 + 152)
    || *(_DWORD *)(v4 + 172) != *(_DWORD *)(a1 + 172)
    || *(_DWORD *)(v4 + 176) != *(_DWORD *)(a1 + 176) )
  {
    return 0;
  }
  v5 = (const void *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 240) >= 0x10uLL )
    v5 = *(const void **)(a1 + 216);
  v6 = (const void *)(v4 + 216);
  if ( *(_QWORD *)(v4 + 240) >= 0x10uLL )
    v6 = *(const void **)(v4 + 216);
  v7 = *(_QWORD *)(v4 + 232);
  if ( v7 != *(_QWORD *)(a1 + 232) || memcmp(v6, v5, v7) )
    return 0;
  v8 = (const void *)(a1 + 248);
  if ( *(_QWORD *)(a1 + 272) >= 0x10uLL )
    v8 = *(const void **)(a1 + 248);
  v9 = (const void *)(v4 + 248);
  if ( *(_QWORD *)(v4 + 272) >= 0x10uLL )
    v9 = *(const void **)(v4 + 248);
  v10 = *(_QWORD *)(v4 + 264);
  if ( v10 != *(_QWORD *)(a1 + 264) )
    return 0;
  if ( memcmp(v9, v8, v10) )
    return 0;
  if ( *(_DWORD *)(v4 + 292) != *(_DWORD *)(a1 + 292) )
    return 0;
  if ( sub_18008A608((__m128 *)(v4 + 296), (__m128 *)(a1 + 296)) )
    return 0;
  if ( *(float *)(v4 + 312) != *(float *)(a1 + 312) )
    return 0;
  if ( *(_DWORD *)(v4 + 316) != *(_DWORD *)(a1 + 316) )
    return 0;
  if ( *(float *)(v4 + 320) != *(float *)(a1 + 320) )
    return 0;
  if ( *(float *)(v4 + 324) != *(float *)(a1 + 324) )
    return 0;
  if ( *(float *)(v4 + 328) != *(float *)(a1 + 328) )
    return 0;
  sub_1800ACE08(v4);
  v11 = *(float *)(v4 + 332);
  sub_1800ACE08(a1);
  if ( v11 != *(float *)(a1 + 332)
    || *(_BYTE *)(v4 + 336) != *(_BYTE *)(a1 + 336)
    || *(float *)(v4 + 340) != *(float *)(a1 + 340)
    || !sub_1800A7B14((unsigned __int64 *)(v4 + 344), (unsigned __int64 *)(a1 + 344))
    || !sub_1800A7B14((unsigned __int64 *)(v4 + 352), (unsigned __int64 *)(a1 + 352))
    || *(_DWORD *)(v4 + 360) != *(_DWORD *)(a1 + 360)
    || sub_180099964((unsigned __int64 *)(v4 + 364), (unsigned __int64 *)(a1 + 364)) )
  {
    return 0;
  }
  v12 = *(_BYTE *)(a1 + 388);
  if ( *(_BYTE *)(v4 + 388) )
  {
    if ( !v12
      || *(_DWORD *)(v4 + 372) != *(_DWORD *)(a1 + 372)
      || *(_DWORD *)(v4 + 376) != *(_DWORD *)(a1 + 376)
      || *(_DWORD *)(v4 + 380) != *(_DWORD *)(a1 + 380) )
    {
      return 0;
    }
    v13 = *(_DWORD *)(v4 + 384) == *(_DWORD *)(a1 + 384);
  }
  else
  {
    v13 = v12 == 0;
  }
  if ( v13
    && *(float *)(v4 + 392) == *(float *)(a1 + 392)
    && *(float *)(v4 + 396) == *(float *)(a1 + 396)
    && *(float *)(v4 + 400) == *(float *)(a1 + 400)
    && *(float *)(v4 + 404) == *(float *)(a1 + 404)
    && *(float *)(v4 + 408) == *(float *)(a1 + 408) )
  {
    v14 = *(_QWORD *)(a1 + 416);
    v15 = *(_QWORD **)(v4 + 416);
    if ( (((*(_QWORD *)(v4 + 424) - (_QWORD)v15) ^ (*(_QWORD *)(a1 + 424) - v14)) & 0xFFFFFFFFFFFFFFE0uLL) == 0
      && sub_1800A71B4(v15, *(_QWORD **)(v4 + 424), v14)
      && *(_DWORD *)(v4 + 440) == *(_DWORD *)(a1 + 440)
      && *(_BYTE *)(v4 + 464) == *(_BYTE *)(a1 + 464)
      && *(_BYTE *)(v4 + 465) == *(_BYTE *)(a1 + 465)
      && *(_QWORD *)(v4 + 480) == *(_QWORD *)(a1 + 480)
      && *(_QWORD *)(v4 + 472) == *(_QWORD *)(a1 + 472)
      && *(_QWORD *)(v4 + 496) == *(_QWORD *)(a1 + 496)
      && *(_QWORD *)(v4 + 488) == *(_QWORD *)(a1 + 488)
      && *(_QWORD *)(v4 + 512) == *(_QWORD *)(a1 + 512)
      && *(_QWORD *)(v4 + 504) == *(_QWORD *)(a1 + 504)
      && *(_QWORD *)(v4 + 528) == *(_QWORD *)(a1 + 528)
      && *(_QWORD *)(v4 + 520) == *(_QWORD *)(a1 + 520)
      && *(_QWORD *)(v4 + 536) == *(_QWORD *)(a1 + 536)
      && *(_QWORD *)(v4 + 1624) == *(_QWORD *)(a1 + 1624)
      && sub_1800A7058(**(__int64 ***)(v4 + 1616), *(__int64 **)(v4 + 1616), **(__int64 ***)(a1 + 1616))
      && !(unsigned int)_std_type_info_compare(*(_QWORD *)(v4 + 1696) + 8LL, *(_QWORD *)(a1 + 1696) + 8LL)
      && !*(_QWORD *)(v4 + 1760)
      && !*(_QWORD *)(a1 + 1760) )
    {
      return 1;
    }
  }
  return 0;
}
