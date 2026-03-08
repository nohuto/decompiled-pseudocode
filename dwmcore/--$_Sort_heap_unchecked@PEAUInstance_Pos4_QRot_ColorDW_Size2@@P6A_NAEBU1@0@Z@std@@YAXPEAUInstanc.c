/*
 * XREFs of ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x180205190
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@_J1$$QEAU1@P6A_NAEBU1@3@Z@Z @ 0x180204FA4 (--$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUI.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 result; // rax
  __int64 v5; // rbx
  char *v7; // rdi
  signed __int64 v8; // rdx
  __int128 v9; // xmm1
  _OWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a2 - (_QWORD)a1;
  if ( a2 - (__int64)a1 >= 96 )
  {
    v7 = (char *)(a2 - 48);
    do
    {
      result = 0xAAAAAAAAAAAAAAABuLL * v5;
      v8 = v5 / 0x30uLL;
      v5 = v7 - a1;
      if ( v8 >= 2 )
      {
        v9 = *((_OWORD *)v7 + 1);
        v10[0] = *(_OWORD *)v7;
        v10[2] = *((_OWORD *)v7 + 2);
        *(_OWORD *)v7 = *(_OWORD *)a1;
        v10[1] = v9;
        *((_OWORD *)v7 + 1) = *((_OWORD *)a1 + 1);
        *((_OWORD *)v7 + 2) = *((_OWORD *)a1 + 2);
        result = std::_Pop_heap_hole_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
                   (__int64)a1,
                   0LL,
                   0xAAAAAAAAAAAAAAABuLL * (v5 >> 4),
                   (int)v10,
                   a3);
      }
      v7 -= 48;
    }
    while ( v5 >= 96 );
  }
  return result;
}
