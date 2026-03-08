/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800E0DB4
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800E0A64 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800922D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x180111BAC (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180244BE8 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  CSharedSectionBase *v4; // rcx
  __m128i *v5; // rax
  unsigned __int64 v6; // r11
  __m128i v7; // xmm1
  __int32 v8; // ebp
  __int64 v9; // xmm4_8
  __m128 v10; // xmm2
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r11

  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 11);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 12);
  v2 = *((unsigned int *)this + 101);
  v3 = *((unsigned int *)this + 100);
  v4 = (CSharedSectionBase *)*((_QWORD *)this + 49);
  *((_BYTE *)this + 104) = 0;
  v5 = (__m128i *)CSharedSectionBase::ResolveAllocation(v4, v2, v3);
  if ( !v5 )
    goto LABEL_10;
  v7 = v5[1];
  v8 = v5[3].m128i_i32[2];
  v9 = v5[3].m128i_i64[0];
  v10 = (__m128)v5[2];
  v11 = HIDWORD(v7.m128i_i64[0]);
  v12 = HIDWORD(_mm_srli_si128(*v5, 8).m128i_u64[0]);
  v13 = (unsigned int)_mm_cvtsi128_si32(v7);
  v14 = HIDWORD(_mm_srli_si128(v7, 8).m128i_u64[0]);
  v15 = v13 + 60;
  v16 = v12 + v13 + 60;
  if ( v12 + v15 < v15 )
    goto LABEL_10;
  if ( v11 + v16 >= v16
    && v6 >= v11 + v16
    && (v17 = (unsigned int)v12 / 0x94, v18 = v17 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)), v18 >= v17)
    && ((_DWORD)v14 == -1 || (unsigned int)v12 >= 0x94 && (unsigned int)v14 <= (int)v12 - 148) )
  {
    *(__m128i *)((char *)this + 408) = *v5;
    *((_QWORD *)this + 60) = v13;
    *(__m128i *)((char *)this + 424) = v7;
    *((_QWORD *)this + 59) = (char *)v5 + 60;
    *((_QWORD *)this + 61) = (char *)v5 + v15;
    *(__m128 *)((char *)this + 440) = v10;
    *((_QWORD *)this + 62) = v12;
    *((_QWORD *)this + 63) = (char *)v5 + v16;
    *((_DWORD *)this + 135) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v10, 4));
    *((_DWORD *)this + 132) = v9;
    *((_QWORD *)this + 57) = v9;
    *((_BYTE *)this + 544) = (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v10, 8)) != 0;
    *((_DWORD *)this + 131) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
    *((_DWORD *)this + 133) = HIDWORD(v9);
    *((_DWORD *)this + 134) = v8;
    *((_DWORD *)this + 116) = v8;
    *((_QWORD *)this + 64) = v11;
    *((_DWORD *)this + 130) = v18;
  }
  else
  {
LABEL_10:
    CPrimitiveGroup::ClearPrimitiveContent(this);
  }
  if ( *((_BYTE *)this + 545) )
    CPrimitiveGroup::BuildHeatMap(this);
}
