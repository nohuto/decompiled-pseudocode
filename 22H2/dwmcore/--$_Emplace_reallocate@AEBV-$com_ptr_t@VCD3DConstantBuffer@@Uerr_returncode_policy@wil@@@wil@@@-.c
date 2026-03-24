/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800CED58
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18005070C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004A314 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050D58 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> const &>(
        __int64 a1,
        CMILPoolResource **a2,
        __int64 *a3)
{
  __int64 v4; // rbp
  CMILPoolResource **v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // rbp
  __int64 v16; // rax
  CMILPoolResource **v17; // r8
  CMILPoolResource **v18; // rcx
  CMILPoolResource **v19; // rdx
  __int64 *result; // rax
  CMILPoolResource *v21; // rax
  CMILPoolResource *v22; // rax
  CMILPoolResource **v23; // rdx
  CMILPoolResource *v24; // rax

  v4 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v5 = a2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = (__int64 *)(v14 + 8 * v4);
  v16 = *a3;
  *v15 = *a3;
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  v17 = *(CMILPoolResource ***)(a1 + 8);
  v18 = (CMILPoolResource **)v14;
  v19 = *(CMILPoolResource ***)a1;
  if ( v5 == v17 )
  {
    while ( v19 != v17 )
    {
      v21 = *v19;
      *v19 = 0LL;
      *v18++ = v21;
      ++v19;
    }
  }
  else
  {
    while ( v19 != v5 )
    {
      v22 = *v19;
      *v19 = 0LL;
      *v18++ = v22;
      ++v19;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(v18, v18);
    v23 = *(CMILPoolResource ***)(a1 + 8);
    v18 = (CMILPoolResource **)(v15 + 1);
    while ( v5 != v23 )
    {
      v24 = *v5;
      *v5 = 0LL;
      *v18++ = v24;
      ++v5;
    }
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(v18, v18);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>>(
      *(CMILPoolResource ***)a1,
      *(CMILPoolResource ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = v14 + 8 * v8;
  result = v15;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 16) = v12 + v14;
  return result;
}
