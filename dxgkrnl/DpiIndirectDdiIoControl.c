__int64 __fastcall DpiIndirectDdiIoControl(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 1056))(*(_QWORD *)(a1 + 1008));
  v2 = v1;
  if ( v1 < 0 )
    WdLogSingleEntry1(2LL, v1);
  return v2;
}
