__int64 __fastcall HsaSetDeviceSvmCapabilities(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= 0x10000 )
    return 3221225485LL;
  else
    return a2 >= *(_QWORD *)(a1 + 40) >> 5 ? 0xC000000D : 0;
}
