__int64 VIDMM_PROCESS::GetCurrentPartitionHandle(void)
{
  __int64 v0; // rax

  if ( !DXGPROCESS::GetCurrent() )
    return -1LL;
  v0 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v0 )
    v0 = *(_QWORD *)(v0 + 8);
  if ( v0 )
    return *(_QWORD *)(v0 + 296);
  else
    return -1LL;
}
