__int64 __fastcall CmpKeyEnumStackCreateResumeContext(__int64 a1, __int64 a2, int a3, char a4, __int64 *a5)
{
  int v5; // r15d
  unsigned int v6; // esi
  __int64 v10; // rdx
  __int64 Pool; // rax
  __int64 v12; // rdi
  __int16 v13; // bp
  __int64 v14; // rsi
  _QWORD *v15; // r14
  __int64 EntryAtLayerHeight; // r12
  __int16 v17; // dx
  __int64 KcbAtLayerHeight; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12

  v5 = *(__int16 *)(a1 + 2);
  v6 = 0;
  v10 = 24LL * (v5 + 1) + 8;
  if ( a4 )
    Pool = CmpAllocatePool(256LL, v10, 909593923LL);
  else
    Pool = CmpAllocatePool(256LL, v10, 926371139LL);
  v12 = Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 4) = a3;
    v13 = 0;
    *(_WORD *)Pool = v5;
    *(_BYTE *)(Pool + 2) = a4;
    if ( (v5 & 0x8000u) == 0 )
    {
      v14 = a2;
      v15 = (_QWORD *)(Pool + 8);
      do
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v14);
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v17);
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)KcbAtLayerHeight);
        v19 = v15 + 2;
        v20 = 2LL;
        v15[1] = KcbAtLayerHeight;
        v21 = EntryAtLayerHeight - (_QWORD)v15;
        *v15 = *(_QWORD *)(KcbAtLayerHeight + 304);
        do
        {
          *v19 = *(_DWORD *)((char *)v19 + v21 + 8);
          ++v19;
          --v20;
        }
        while ( v20 );
        ++v13;
        v15 += 3;
        v14 = a2;
      }
      while ( v13 <= (__int16)v5 );
      v6 = 0;
    }
    *a5 = v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
