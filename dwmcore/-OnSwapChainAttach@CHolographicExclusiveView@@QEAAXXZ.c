void __fastcall CHolographicExclusiveView::OnSwapChainAttach(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  PVOID Ptr; // rcx

  v1 = this + 51;
  AcquireSRWLockExclusive(this + 51);
  Ptr = this[11].Ptr;
  if ( Ptr )
  {
    this[12].Ptr = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    BYTE2(this[10].Ptr) = 1;
  }
  ReleaseSRWLockExclusive(v1);
}
