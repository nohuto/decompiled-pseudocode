/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x1409676E8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x1407563CC (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x140756414 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(_QWORD **a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  __m128i *v7; // rax
  SIZE_T v8; // rcx
  PVOID v9; // rdi
  _QWORD *v10; // rax
  __int64 result; // rax
  int v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = a3;
  v3 = (__int64)*a1;
  v4 = 0;
  v12 = 0;
  v5 = 0LL;
  if ( g_ExpandCallback
    && *(_DWORD *)(v3 + 20) >= 0x14u
    && (v7 = *(__m128i **)(v3 + 8), v8 = v7[1].m128i_u32[0], _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8)) == 1717724282)
    && HIDWORD(*(unsigned __int128 *)v7) == g_ExpectedAlgorithm
    && (v12 = v7[1].m128i_i32[0], (v9 = AslAlloc(v8, v8)) != 0LL) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                         v9,
                         &v12,
                         *(_QWORD *)(v3 + 8) + 20LL,
                         (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
    {
      v10 = SdbpOpenDatabaseInMemory((__int64)v9, v12);
      v5 = v10;
      if ( v10 )
      {
        *((_DWORD *)v10 + 6) |= 0xCu;
        v9 = 0LL;
        v12 = 0;
        v4 = 1;
      }
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x74705041u);
      v12 = 0;
      if ( v5 )
        v5[1] = 0LL;
    }
    if ( !v4 && v5 )
    {
      SdbCloseDatabaseRead(v5);
      v5 = 0LL;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  SdbCloseDatabaseRead(*a1);
  result = v4;
  *a1 = v5;
  return result;
}
