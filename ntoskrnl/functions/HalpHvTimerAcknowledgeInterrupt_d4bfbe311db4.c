char __fastcall HalpHvTimerAcknowledgeInterrupt(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // eax

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v2 = *(_QWORD *)(a1 + 24 * v1 + 8);
  _m_prefetchw((const void *)(v2 + 768));
  v3 = *(_DWORD *)(v2 + 768);
  if ( v3 )
  {
    *(_DWORD *)(v2 + 768) = 0;
    LOBYTE(v3) = *(_BYTE *)(v2 + 773);
    if ( (v3 & 1) != 0 )
    {
      LOBYTE(v3) = 0;
      __writemsr(0x40000084u, 0LL);
    }
  }
  return v3;
}
