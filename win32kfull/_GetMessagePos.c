__int64 __fastcall GetMessagePos(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = PtiCurrentShared(a1);
  LODWORD(v5) = *((_DWORD *)v1 + 191);
  v2 = *((unsigned int *)v1 + 192);
  HIDWORD(v5) = *((_DWORD *)v1 + 192);
  if ( *((_DWORD *)v1 + 193) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v2);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*((_DWORD *)v1 + 193) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v5, &v5, *((unsigned int *)v1 + 193), 0LL);
      PhysicalToLogicalDPIPoint(&v5, &v5, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned __int16)v5 | (WORD2(v5) << 16);
}
