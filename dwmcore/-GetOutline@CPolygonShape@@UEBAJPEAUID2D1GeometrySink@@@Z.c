/*
 * XREFs of ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18002E120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800304E8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B9278 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygonShape::GetOutline(CPolygonShape *this, struct ID2D1GeometrySink *a2)
{
  unsigned int v2; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v6; // rbx
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx

  v2 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) )
  {
    ObjectCache = CThreadContext::GetObjectCache(this);
    v6 = 0LL;
    v7 = *((_DWORD *)ObjectCache + 1);
    if ( v7 )
    {
      v6 = (char *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v6;
      *((_DWORD *)ObjectCache + 1) = v7 - 1;
    }
    if ( !v6 )
    {
      v6 = (char *)DefaultHeap::Alloc(0x168uLL);
      if ( !v6 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x2Eu, 0LL);
        return v2;
      }
    }
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &CPolygonBuilder::`vftable';
    *((_QWORD *)v6 + 2) = v6 + 40;
    *((_QWORD *)v6 + 3) = v6 + 40;
    *((_QWORD *)v6 + 4) = v6 + 360;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 96LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           0LL,
           v8,
           v6);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x30u, 0LL);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
      return v2;
    }
    v11 = (_QWORD *)*((_QWORD *)this + 2);
    v12 = v11[4];
    v13 = v11[3];
    v14 = (unsigned int)((__int64)(*((_QWORD *)v6 + 3) - *((_QWORD *)v6 + 2)) >> 3);
    v15 = (v12 - v13) >> 3;
    if ( v14 < v15 )
    {
      v11[4] = v13 + 8 * v14;
    }
    else if ( v14 > v15 )
    {
      if ( v14 <= (v11[5] - v13) >> 3 )
      {
        v20 = v14 - v15;
        if ( v20 )
          v12 += 8 * v20;
        v11[4] = v12;
      }
      else
      {
        std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(v11 + 3);
      }
    }
    memcpy_0(
      *(void **)(*((_QWORD *)this + 2) + 24LL),
      *((const void **)v6 + 2),
      8LL * (unsigned int)((__int64)(*((_QWORD *)v6 + 3) - *((_QWORD *)v6 + 2)) >> 3));
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v16 = *((_QWORD *)this + 2);
  v17 = *(unsigned int **)(v16 + 24);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v16 + 32) - (_QWORD)v17) >> 3) >= 3 )
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(
      a2,
      _mm_unpacklo_ps((__m128)*v17, (__m128)v17[1]).m128_u64[0],
      0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL))(
      a2,
      *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 8LL,
      (unsigned int)((__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 2) + 24LL)) >> 3)
    - 1);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
  }
  return v2;
}
