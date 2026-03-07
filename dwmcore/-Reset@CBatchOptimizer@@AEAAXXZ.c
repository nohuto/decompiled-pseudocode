void __fastcall CBatchOptimizer::Reset(CBatchOptimizer *this)
{
  int v1; // eax
  _DWORD *v2; // rcx

  v1 = 0;
  *((_BYTE *)this + 4240) = 0;
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  v2 = (_DWORD *)((char *)this + 48);
  do
    *v2++ = v1++;
  while ( v1 < 8 );
}
