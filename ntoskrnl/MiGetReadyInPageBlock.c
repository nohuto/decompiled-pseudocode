__int64 MiGetReadyInPageBlock()
{
  __int64 VadEvent; // rsi
  __int64 v1; // rbx
  PSLIST_ENTRY v2; // rdi

  VadEvent = MiLocateVadEvent();
  v1 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v1 + 176) != 1 )
  {
    v2 = MiGetInPageSupportBlock(0, 0LL);
    if ( v2 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v1);
      *(_QWORD *)(VadEvent + 8) = v2;
      v1 = (__int64)v2;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v1, 0, 0LL);
  return v1;
}
