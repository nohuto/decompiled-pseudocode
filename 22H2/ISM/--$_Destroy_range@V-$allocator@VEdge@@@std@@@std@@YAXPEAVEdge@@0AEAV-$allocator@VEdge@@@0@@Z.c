/*
 * XREFs of ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@0AEAV?$allocator@VEdge@@@0@@Z @ 0x180177380
 * Callers:
 *     ??1EdgyConnection@@UEAA@XZ @ 0x18017740C (--1EdgyConnection@@UEAA@XZ.c)
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x180177C88 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 *     ??$_Uninitialized_move@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x18017888C (--$_Uninitialized_move@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x180179D8C (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003641C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180049F50 (--1-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3D4C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<Edge>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 5;
    do
    {
      std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::~vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>();
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(v3);
      std::wstring::_Tidy_deallocate((__int64)(v3 - 4));
      v3 += 16;
      result = v3 - 5;
    }
    while ( v3 - 5 != a2 );
  }
  return result;
}
