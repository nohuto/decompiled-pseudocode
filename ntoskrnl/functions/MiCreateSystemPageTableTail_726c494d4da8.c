__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168) + 144LL);
  return 0LL;
}
