/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x1800693F0
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$24 @ 0x1800690FF (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$28 @ 0x18006910B (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18006910B.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::dtor$34 @ 0x180069123 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_180069123.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>::~_Uninitialized_backout_al<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(
        __int64 *a1)
{
  return std::_Destroy_range<std::allocator<std::function<void (bool)>>>(*a1, a1[1]);
}
