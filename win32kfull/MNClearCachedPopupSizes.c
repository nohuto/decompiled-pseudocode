__int64 __fastcall MNClearCachedPopupSizes(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // r9d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v1 = a1[5];
  a1[8] = 0LL;
  v2 = 0;
  if ( *(_DWORD *)(v1 + 44) )
  {
    do
    {
      v3 = (int)v2++;
      v4 = 96 * v3;
      *(_DWORD *)(*(_QWORD *)(a1[11] + v4) + 84LL) = 0x7FFFFFFF;
      *(_DWORD *)(*(_QWORD *)(a1[11] + v4) + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1[11] + 96 * v3) + 104LL) = -1;
      v5 = a1[11];
      *(_OWORD *)(v5 + v4 + 52) = 0LL;
      *(_OWORD *)(v5 + v4 + 68) = 0LL;
    }
    while ( v2 < *(_DWORD *)(a1[5] + 44LL) );
  }
  return MNRefreshUAHCachedSizes(a1);
}
