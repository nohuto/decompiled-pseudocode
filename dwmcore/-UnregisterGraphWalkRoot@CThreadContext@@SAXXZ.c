void CThreadContext::UnregisterGraphWalkRoot(void)
{
  unsigned __int64 Count; // rax
  CPtrArrayBase *v1; // rcx
  struct CThreadContext *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v2) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v2 + 24));
    CPtrArrayBase::RemoveAt(v1, Count - 1, 1uLL);
  }
}
