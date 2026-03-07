struct DXG_CLIENT_STATISTICS *__fastcall DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        enum _D3DKMT_CLIENTHINT a2)
{
  __int64 **v3; // rdi
  char *v4; // rsi
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 ***v7; // rax

  v3 = (__int64 **)((char *)this + 136);
  v4 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  v6 = operator new[](0x20uLL, 0x4B677844u, 256LL);
  i = (__int64 *)v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 16) = a2;
    v7 = (__int64 ***)v3[1];
    if ( *v7 != v3 )
      __fastfail(3u);
    *i = (__int64)v3;
    i[1] = (__int64)v7;
    *v7 = (__int64 **)i;
    v3[1] = i;
  }
  else
  {
    i = 0LL;
  }
LABEL_6:
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXG_CLIENT_STATISTICS *)i;
}
