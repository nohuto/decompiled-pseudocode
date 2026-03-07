char __fastcall CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(
        char a1,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  char v3; // r9
  __int64 v4; // rax

  v3 = 80;
  if ( a1 != 111 )
    v3 = a1;
  if ( a3 )
  {
    v4 = a3;
    do
    {
      v3 ^= *a2++;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
