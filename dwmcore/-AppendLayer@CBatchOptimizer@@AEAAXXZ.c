void __fastcall CBatchOptimizer::AppendLayer(CBatchOptimizer *this)
{
  if ( *((_DWORD *)this + 8) == 8 && (!*((_BYTE *)this + 4240) || !CBatchOptimizer::TryMergeOneLayer(this)) )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    CBatchOptimizer::RecycleLayer(this, 0LL);
  }
  *(_OWORD *)((char *)this + 520 * *((int *)this + (*((_DWORD *)this + 8))++ + 12) + 80) = *((_OWORD *)this + 1);
}
