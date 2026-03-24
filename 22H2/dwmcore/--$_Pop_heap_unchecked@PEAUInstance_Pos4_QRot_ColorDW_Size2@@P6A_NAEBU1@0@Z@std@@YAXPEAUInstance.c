/*
 * XREFs of ??$_Pop_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801A96C4
 * Callers:
 *     ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801A9824 (--$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@_J1$$QEAU1@P6A_NAEBU1@3@Z@Z @ 0x1801A95AC (--$_Pop_heap_hole_by_index@PEAUInstance_Pos4_QRot_ColorDW_Size2@@U1@P6A_NAEBU1@0@Z@std@@YAXPEAUI.c)
 */

__int64 __fastcall std::_Pop_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int128 v6; // xmm1
  char *v7; // r10
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (__int64)((unsigned __int128)((a2 - (__int64)a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  result = v4 >> 63;
  if ( (__int64)((v4 >> 63) + v4) >= 2 )
  {
    v6 = *(_OWORD *)(a2 - 32);
    v7 = (char *)(a2 - 48);
    v8[1] = v6;
    v8[0] = *(_OWORD *)v7;
    v8[2] = *((_OWORD *)v7 + 2);
    *(_OWORD *)v7 = *(_OWORD *)a1;
    *((_OWORD *)v7 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)a1 + 2);
    return std::_Pop_heap_hole_by_index<Instance_Pos4_QRot_ColorDW_Size2 *,Instance_Pos4_QRot_ColorDW_Size2,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
             (__int64)a1,
             0LL,
             (v7 - a1) / 48,
             (int)v8,
             a3);
  }
  return result;
}
