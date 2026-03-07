void __fastcall CPreComputeContext::SubTreeContext::EndWalk(CVisualTree **this, int a2)
{
  CVisualTree::EndPreCompute(this[54], a2);
  CBspPreComputeHelper::CleanupAfterWalking((CBspPreComputeHelper *)this);
  if ( *((_BYTE *)this + 448) )
  {
    CThreadContext::UnregisterGraphWalkRoot();
    *((_BYTE *)this + 448) = 0;
  }
}
