/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1800DDE60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1801CF170 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 */

__int64 std::_Func_impl_no_alloc__lambda_b496c46762585f0fe68863cd1dbbffab__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const___::_Do_call(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        ...)
{
  int v3; // edi
  __int64 result; // rax
  _QWORD *v5; // rbx
  _DWORD *v6; // rdx
  _DWORD *v7; // rdx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 v13; // [rsp+50h] [rbp+28h]
  int *v14; // [rsp+58h] [rbp+30h]
  va_list va1; // [rsp+60h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, int *);
  v3 = *v14;
  result = (unsigned int)*a3;
  LODWORD(v11) = *a3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
  {
    v5 = (_QWORD *)*a2;
    if ( (v3 & 1) != 0 )
    {
      v6 = (_DWORD *)v5[1];
      if ( v6 == (_DWORD *)v5[2] )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(v5, v6, (__int64 *)va);
        result = (unsigned int)v11;
      }
      else
      {
        *v6 = result;
        v5[1] += 4LL;
      }
    }
    if ( (v3 & 2) != 0 )
    {
      v7 = (_DWORD *)v5[4];
      if ( v7 == (_DWORD *)v5[5] )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(v5 + 3, v7, (__int64 *)va);
        result = (unsigned int)v11;
      }
      else
      {
        *v7 = result;
        v5[4] += 4LL;
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v8 = (_DWORD *)v5[7];
      if ( v8 == (_DWORD *)v5[8] )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(v5 + 6, v8, (__int64 *)va);
        result = (unsigned int)v11;
      }
      else
      {
        *v8 = result;
        v5[7] += 4LL;
      }
    }
    if ( (v3 & 8) != 0 )
    {
      v9 = (_DWORD *)v5[10];
      if ( v9 == (_DWORD *)v5[11] )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(v5 + 9, v9, (__int64 *)va);
        result = (unsigned int)v11;
      }
      else
      {
        *v9 = result;
        v5[10] += 4LL;
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v10 = (_DWORD *)v5[13];
      if ( v10 == (_DWORD *)v5[14] )
      {
        return std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(v5 + 12, v10, (__int64 *)va);
      }
      else
      {
        *v10 = result;
        v5[13] += 4LL;
      }
    }
  }
  return result;
}
