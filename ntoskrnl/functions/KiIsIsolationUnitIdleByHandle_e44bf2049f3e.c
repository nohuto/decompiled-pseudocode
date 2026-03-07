__int64 __fastcall KiIsIsolationUnitIdleByHandle(_QWORD *a1)
{
  unsigned __int64 v1; // r9
  __int64 result; // rax
  unsigned __int8 *v3; // rax
  unsigned int v4; // ecx
  __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx

  v1 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return (*(_BYTE *)(v1 + 35) & 1) == 0;
  v3 = *(unsigned __int8 **)(v1 + 34904);
  v4 = *v3;
  v5 = (__int64 *)(v3 + 8);
  result = 1LL;
  if ( v4 )
  {
    v6 = v4;
    do
    {
      v7 = *v5++;
      result = (*(unsigned __int8 *)(v7 + 35) ^ 1) & (unsigned int)result;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
