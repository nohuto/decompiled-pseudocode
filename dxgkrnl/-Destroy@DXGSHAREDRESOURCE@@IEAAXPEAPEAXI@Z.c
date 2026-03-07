void __fastcall DXGSHAREDRESOURCE::Destroy(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  DXGSHAREDRESOURCE::DestroyCoreAllocations(this, a2, a3);
  (**(void (__fastcall ***)(DXGSHAREDRESOURCE *, __int64))this)(this, 1LL);
}
