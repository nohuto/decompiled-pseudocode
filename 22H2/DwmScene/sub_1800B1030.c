/*
 * XREFs of sub_1800B1030 @ 0x1800B1030
 * Callers:
 *     sub_1800B143C @ 0x1800B143C (sub_1800B143C.c)
 * Callees:
 *     sub_1800CA2E4 @ 0x1800CA2E4 (sub_1800CA2E4.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800B1030(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::VertexBufferGeneric>::`vftable';
    memset(v2 + 4, 0, 0x68uLL);
    sub_1800CA2E4(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::VertexBufferGeneric::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
