/*
 * XREFs of HalpConstructScatterGatherListDmaThin @ 0x1402B5C40
 * Callers:
 *     HalpBuildScatterGatherListDmaThin @ 0x1402B58B4 (HalpBuildScatterGatherListDmaThin.c)
 *     HalBuildScatterGatherListDmaThin @ 0x1402B5A40 (HalBuildScatterGatherListDmaThin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmaThin(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v3; // edx
  void (__fastcall *v5)(_QWORD, _QWORD, __int64, _QWORD); // r12
  unsigned int v6; // r8d
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // esi
  void *v10; // r13
  __int64 *v11; // r15
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r10d
  __int64 *i; // r14
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // r10d
  __int64 v19; // rax

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 60);
  v5 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(a1 + 64);
  v6 = 0;
  v7 = 0LL;
  v8 = v1 + 16;
  v9 = *(_DWORD *)(a1 + 56);
  v10 = *(void **)(a1 + 88);
  v11 = *(__int64 **)(a1 + 48);
  *(_QWORD *)(v1 + 8) = a1;
  if ( v9 )
  {
    while ( v11 )
    {
      v12 = v9;
      if ( *((_DWORD *)v11 + 10) - v3 <= v9 )
        v12 = *((_DWORD *)v11 + 10) - v3;
      v13 = *((_DWORD *)v11 + 11) + v3;
      v9 -= v12;
      v14 = v13 & 0xFFF;
      for ( i = &v11[((unsigned __int64)v13 >> 12) + 6]; v12; v14 = 0 )
      {
        v16 = v14 + (*i << 12);
        v17 = 4096 - v14;
        v18 = v12;
        if ( v17 <= v12 )
          v18 = v17;
        if ( v16 != v7 + 1 || !v6 )
        {
          v19 = v6++;
          v8 = v1 + 8 * (3 * v19 + 2);
          *(_QWORD *)v8 = v16;
          *(_DWORD *)(v8 + 8) = 0;
          *(_QWORD *)(v8 + 16) = 0LL;
        }
        *(_DWORD *)(v8 + 8) += v18;
        v12 -= v18;
        v7 = v18 + v16 - 1;
        ++i;
      }
      v11 = (__int64 *)*v11;
      v3 = 0;
      if ( !v9 )
        goto LABEL_12;
    }
    if ( v6 )
      *(_DWORD *)(v1 + 24 * (v6 - 1 + 1LL)) += v9;
  }
LABEL_12:
  *(_DWORD *)v1 = v6;
  if ( v10 )
  {
    _m_prefetchw(v10);
    if ( (_InterlockedOr((volatile signed __int32 *)v10, 1u) & 2) != 0 )
      v2 = -1073741536;
  }
  if ( v5 )
    v5(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v1, *(_QWORD *)(a1 + 72));
  return v2;
}
