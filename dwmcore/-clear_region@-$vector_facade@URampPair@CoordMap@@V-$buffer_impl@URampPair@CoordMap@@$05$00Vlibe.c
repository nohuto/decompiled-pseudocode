__int64 __fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v5) >> 2);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = 12 * a3;
  result = (a1[1] - v5) >> 2;
  v8 = v5 + 4 * result;
  if ( a3 != v6 )
  {
LABEL_5:
    v9[2] = 0LL;
    v9[0] = v5;
    v9[1] = v6;
    result = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD *))std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
               v10,
               v3 + v5,
               v8,
               v9);
  }
  a1[1] -= v3;
  return result;
}
