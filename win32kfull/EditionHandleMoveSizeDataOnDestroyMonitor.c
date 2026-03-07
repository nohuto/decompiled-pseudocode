__int64 __fastcall EditionHandleMoveSizeDataOnDestroyMonitor(__int64 a1)
{
  __int64 *v1; // r8
  __int64 result; // rax

  v1 = (__int64 *)gActiveMoveSizeDataList;
  result = *(_QWORD *)(gpDispInfo + 96LL);
  if ( !result )
    result = gpMonitorCached;
  while ( v1 != &gActiveMoveSizeDataList )
  {
    if ( v1[26] == a1 )
      v1[26] = result;
    if ( v1[27] == a1 )
      v1[27] = result;
    if ( v1[29] == a1 )
      v1[29] = result;
    v1 = (__int64 *)*v1;
  }
  return result;
}
