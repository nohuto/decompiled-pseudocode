/*
 * XREFs of std::_Make_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C891C
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8EC8 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8CCC (std--_Pop_heap_hole_by_index_SpatialInteractionDevices--SpatialInputButtonCaps___SpatialInteract.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 *v9; // rsi
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v3 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  result = (unsigned __int64)v3 >> 63;
  v7 = ((unsigned __int64)v3 >> 63) + (v3 >> 1);
  v8 = v7 >> 1;
  if ( v7 >> 1 > 0 )
  {
    v9 = (__int64 *)(a1 + 12 * v8);
    do
    {
      v9 = (__int64 *)((char *)v9 - 12);
      LOBYTE(v11) = a3;
      v10 = *((_DWORD *)v9 + 2);
      --v8;
      v12 = *v9;
      v13 = v10;
      result = std::_Pop_heap_hole_by_index_SpatialInteractionDevices::SpatialInputButtonCaps___SpatialInteractionDevices::SpatialInputButtonCaps__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
                 a1,
                 v8,
                 v7,
                 &v12,
                 v11);
    }
    while ( v8 > 0 );
  }
  return result;
}
