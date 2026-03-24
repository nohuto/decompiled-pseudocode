/*
 * XREFs of ?EmitSetChildrenCommand@CTransformGroupMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003E3C
 * Callers:
 *     ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003DF0 (-EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005C9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitSetChildrenCommand(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  bool v5; // zf
  unsigned __int64 v6; // rax
  bool v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // r10
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  void *v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)this + 10) == 0LL;
    *((_DWORD *)this + 4) = v2 & 0xFFFFFF7F;
    v6 = *((unsigned int *)this + 24);
    v7 = v5;
    while ( v6 < *((_QWORD *)this + 10) || v7 )
    {
      v7 = 0;
      v8 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
      v18 = v8;
      if ( v8 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v18) )
        {
          *((_DWORD *)this + 4) |= 0x80u;
          return *((unsigned int *)this + 24) == *((_QWORD *)this + 10);
        }
        v8 = v18;
      }
      v9 = *((unsigned int *)this + 24);
      v10 = (v8 - 20) >> 2;
      if ( *((_QWORD *)this + 10) - v9 < v10 )
        LODWORD(v10) = *((_DWORD *)this + 20) - v9;
      v19 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v10 + 20), &v19);
      v11 = (char *)v19;
      v12 = 668;
      *(_DWORD *)v19 = 4 * v10 + 20;
      v5 = *((_DWORD *)this + 24) == 0;
      *(_OWORD *)(v11 + 4) = 0LL;
      if ( !v5 )
        v12 = 669;
      *((_DWORD *)v11 + 1) = v12;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v11 + 3) = 4 * v10;
      v13 = *((_DWORD *)this + 24);
      if ( (_DWORD)v10 )
      {
        v14 = 0LL;
        v15 = (unsigned int)v10;
        do
        {
          if ( (unsigned __int64)v13 >= *((_QWORD *)this + 10) )
          {
            v16 = 0LL;
          }
          else
          {
            _mm_lfence();
            v16 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v13);
          }
          ++v13;
          *(_DWORD *)&v11[v14 + 16] = *(_DWORD *)(v16 + 24);
          v14 += 4LL;
          --v15;
        }
        while ( v15 );
        v13 = *((_DWORD *)this + 24);
      }
      v6 = v13 + (unsigned int)v10;
      *((_DWORD *)this + 24) = v6;
    }
  }
  return *((unsigned int *)this + 24) == *((_QWORD *)this + 10);
}
