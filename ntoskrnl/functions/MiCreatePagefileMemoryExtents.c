__int64 __fastcall MiCreatePagefileMemoryExtents(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 SpecialPurposeMemoryPartitionForCaching; // r12
  unsigned int v6; // edi
  int v7; // r13d
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  char *Pool; // rax
  unsigned __int64 v11; // r15
  _DWORD *v12; // rax
  unsigned __int64 v13; // rbx
  bool v14; // r8
  int v15; // r14d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // esi
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rbx
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 248);
  v25 = 0LL;
  *(_OWORD *)P = 0LL;
  SpecialPurposeMemoryPartitionForCaching = MiGetSpecialPurposeMemoryPartitionForCaching(v3, 0);
  if ( SpecialPurposeMemoryPartitionForCaching )
  {
    v7 = 0;
    LODWORD(v8) = a3;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !a3 )
        {
          MiInsertPageFileMemoryExtents(a1, (__int64)P);
          v6 = 0;
          goto LABEL_29;
        }
        v9 = a3;
        if ( (unsigned int)v8 <= a3 )
          v9 = v8;
        v8 = v9;
        if ( (int)MiFindContiguousPagesEx(
                    SpecialPurposeMemoryPartitionForCaching,
                    0LL,
                    qword_140C65820,
                    0LL,
                    0,
                    v9,
                    1u,
                    0x80000000,
                    0x80000000,
                    1048577,
                    0,
                    0LL,
                    &v25) >= 0 )
          break;
        if ( (_DWORD)v8 == 512 )
          goto LABEL_34;
        LODWORD(v8) = (((unsigned int)v8 >> 1) + 511) & 0xFFFFFE00;
      }
      Pool = (char *)MiAllocatePool(64, 0x28uLL, 0x6550694Du);
      v11 = (unsigned __int64)Pool;
      if ( !Pool )
        break;
      v12 = Pool + 24;
      a3 -= v8;
      *v12 = v7;
      v7 += v8;
      *(_DWORD *)(v11 + 28) = v7 - 1;
      *(_QWORD *)(v11 + 32) = v25;
      v13 = (unsigned __int64)P[0];
      if ( ((__int64)P[1] & 1) != 0 && P[0] )
        v13 = (unsigned __int64)P ^ (unsigned __int64)P[0];
      v14 = 0;
      v15 = (__int64)P[1] & 1;
      if ( v13 )
      {
        while ( 1 )
        {
          if ( (int)MiComparePageFileMemoryExtents(v12, v13) < 0 )
          {
            v16 = *(_QWORD *)v13;
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_25;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_25:
              v14 = 0;
              break;
            }
          }
          else
          {
            v16 = *(_QWORD *)(v13 + 8);
            if ( v15 )
            {
              if ( !v16 )
                goto LABEL_19;
              v16 ^= v13;
            }
            if ( !v16 )
            {
LABEL_19:
              v14 = 1;
              break;
            }
          }
          v13 = v16;
          v12 = (_DWORD *)(v11 + 24);
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)P, v13, v14, v11);
    }
    MiFreeContiguousPages(v25, v8);
LABEL_34:
    v6 = -1073741670;
LABEL_29:
    PsDereferencePartition(*(_QWORD *)(SpecialPurposeMemoryPartitionForCaching + 200));
  }
  else
  {
    v6 = -1073741670;
  }
  v17 = (unsigned __int64)P[0];
  if ( ((__int64)P[1] & 1) != 0 && P[0] )
    v17 = (unsigned __int64)P ^ (unsigned __int64)P[0];
  v18 = (__int64)P[1] & 1;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
        break;
      v20 = (_QWORD *)(v17 + 8);
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
      {
LABEL_39:
        if ( v18 )
          v17 ^= v19;
        else
          v17 = v19;
        *v20 = 0LL;
      }
      else
      {
        v21 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v18 && v21 )
          v21 ^= v17;
        MiDeletePageFileMemoryExtents((PVOID)v17);
        if ( !v21 )
          return v6;
        v17 = v21;
      }
    }
    v20 = (_QWORD *)v17;
    goto LABEL_39;
  }
  return v6;
}
