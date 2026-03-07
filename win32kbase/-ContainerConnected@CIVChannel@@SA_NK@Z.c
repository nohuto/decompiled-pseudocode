bool __fastcall CIVChannel::ContainerConnected(int a1)
{
  __int64 v1; // rax
  char v2; // cl
  __int64 v3; // rdx

  v1 = a1;
  v2 = 0;
  v3 = qword_1C02D8780[v1];
  if ( v3 )
    return _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 40), 0, 0) != 0;
  return v2;
}
