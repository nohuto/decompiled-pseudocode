__int64 __fastcall std::move<std::move_iterator<CCheckMPOCache::PlaneInfo *>,stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *> &,__int64>(
                 a4,
                 0xCCCCCCCCCCCCCCCDuLL * ((a3 - (__int64)a2) >> 5));
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)((__int64)v8 + v5 - *a4) >> 5);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
