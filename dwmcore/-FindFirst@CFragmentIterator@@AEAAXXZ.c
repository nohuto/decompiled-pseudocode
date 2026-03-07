void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v2 - 8);
  v7 = (v5 - v4) >> 4;
  while ( v6 < (unsigned int)v7 )
  {
    if ( *(_QWORD *)(v4 + 16LL * v6 + 8) )
    {
      DWORD2(v8) = 0;
      *(_DWORD *)(v2 - 8) = v6;
      *(_QWORD *)&v8 = *(_QWORD *)(v4 + 16LL * v6 + 8);
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        (__int64)this,
        &v8);
      goto LABEL_1;
    }
    ++v6;
  }
}
