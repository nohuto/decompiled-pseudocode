/*
 * XREFs of ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180036D38
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180036C50 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z @ 0x180036CEC (-UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800DAAEC (--$uninitialized_copy@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_.c)
 */

__int64 __fastcall detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // zf
  __int64 v11; // r8
  __int64 result; // rax
  bool v13; // sf
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v8 = v6 >> 3;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_14;
  }
  v11 = v5 + 8 * v8;
  if ( !v10 )
  {
    *(_QWORD *)&v14 = v5;
    *((_QWORD *)&v14 + 1) = v8;
    v13 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_11;
      v13 = a2 < 0;
    }
    if ( !v13 )
    {
LABEL_8:
      if ( a2 <= 0 || v8 >= a2 )
      {
        v15 = a2;
        v16 = v14;
        v17 = a2;
        std::uninitialized_copy<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
          &v14,
          v5 + 8 * v7,
          v11,
          &v16);
        v3 = a1[1];
        goto LABEL_3;
      }
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v7, a2);
      __debugbreak();
      JUMPOUT(0x180036DEELL);
    }
LABEL_14:
    if ( a2 )
      goto LABEL_11;
    goto LABEL_8;
  }
LABEL_3:
  result = 8 * a3;
  a1[1] = v3 - 8 * a3;
  return result;
}
