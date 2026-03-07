bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char v2; // bl
  struct DXGADAPTER *i; // rax

  v2 = 0;
  if ( this[87] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6491LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterListMutex.IsOwner()", 6491LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = this[96]; i != (struct DXGADAPTER *)(this + 96) && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *((_DWORD *)a2 + 50) == 1;
  }
  return v2;
}
