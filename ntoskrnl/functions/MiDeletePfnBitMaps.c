__int64 __fastcall MiDeletePfnBitMaps(__int64 a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // rbp
  unsigned int i; // edi
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 result; // rax

  v1 = MiLargePageSizes;
  v2 = qword_140C65820 + 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( i >= 2 )
    {
      if ( (unsigned __int16 *)a1 != MiSystemPartition )
        goto LABEL_7;
      v5 = 512LL;
      v6 = i + 1009LL;
    }
    else
    {
      v5 = *v1;
      v6 = i + 1001LL;
    }
    v7 = (_QWORD *)(a1 + 16 * v6);
    MiDeleteSparseRange(*v7, (unsigned int)((((v2 / v5 + (v2 % v5 != 0) + 7LL) >> 3) + 4095) >> 12));
    *v7 = 0LL;
LABEL_7:
    ++v1;
  }
  MiDeleteSparseRange(
    *(_QWORD *)(a1 + 16064),
    (unsigned int)((((((v2 & 0x3FFFF) != 0) + (v2 >> 18) + 7) >> 3) + 4095) >> 12));
  *(_QWORD *)(a1 + 16064) = 0LL;
  MiDeleteSparseRange(*(_QWORD *)(a1 + 16072), (unsigned int)((2 * ((v2 >> 18) + ((v2 & 0x3FFFF) != 0)) + 4095) >> 12));
  *(_QWORD *)(a1 + 16072) = 0LL;
  result = MiDeleteSparseRange(
             *(_QWORD *)(a1 + 16048),
             (unsigned int)(((v2 >> 9) + ((v2 & 0x1FF) != 0) + 4095LL) >> 12));
  *(_QWORD *)(a1 + 16048) = 0LL;
  return result;
}
