/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x140A14498
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140A108BC (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SdbCloseDatabaseRead @ 0x1406E0BB8 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     SdbpReadMappedData @ 0x140797F3C (SdbpReadMappedData.c)
 *     SdbpOpenDatabaseInMemory @ 0x1407ED0C8 (SdbpOpenDatabaseInMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(_QWORD **a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  __m128i *v9; // rax
  SIZE_T v10; // rcx
  PVOID v11; // rdi
  _DWORD *v13; // rax
  int v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = (__int64)*a1;
  v4 = 0;
  v14 = 0;
  v5 = 0LL;
  if ( !g_ExpandCallback
    || *(_DWORD *)(v3 + 20) < 0x14u
    || (v9 = *(__m128i **)(v3 + 8), v10 = v9[1].m128i_u32[0], _mm_cvtsi128_si32(_mm_srli_si128(*v9, 8)) != 1717724282)
    || HIDWORD(*(unsigned __int128 *)v9) != g_ExpectedAlgorithm
    || (v14 = v9[1].m128i_i32[0], (v11 = AslAlloc(v10, v10)) == 0LL) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_11;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                        v11,
                        &v14,
                        *(_QWORD *)(v3 + 8) + 20LL,
                        (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
    goto LABEL_8;
  v13 = SdbpOpenDatabaseInMemory((__int64)v11, v14, a3);
  v5 = v13;
  if ( v13 )
  {
    v13[6] |= 4u;
    if ( !a2 || (unsigned int)SdbpReadMappedData((__int64)v13, 0, a2, 0xCu) )
    {
      v5[6] |= 8u;
      v4 = 1;
      v14 = 0;
      goto LABEL_11;
    }
LABEL_8:
    AslLogCallPrintf(1LL);
  }
  ExFreePoolWithTag(v11, 0x74705041u);
  v14 = 0;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    SdbCloseDatabaseRead(v5);
    v5 = 0LL;
  }
LABEL_11:
  SdbCloseDatabaseRead(*a1);
  *a1 = v5;
  return v4;
}
