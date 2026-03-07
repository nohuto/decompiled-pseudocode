__int64 MmRegisterEtwProvider()
{
  __int64 result; // rax

  result = TlgRegisterAggregateProviderEx(&unk_140C06888, (__int64)MiTracingEnabledCallback, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140C69568 = &unk_140C06888;
    if ( dword_140C67C30 )
      MiLogBadMapper(0LL, -1, 0LL);
    return 0LL;
  }
  return result;
}
