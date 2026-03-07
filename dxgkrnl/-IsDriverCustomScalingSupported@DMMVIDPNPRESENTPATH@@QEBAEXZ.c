bool __fastcall DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 40) )
    WdLogSingleEntry0(1LL);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !*(_QWORD *)(v2 + 72) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 48LL);
  if ( !*(_QWORD *)(v3 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  return *(_DWORD *)(*(_QWORD *)(v4 + 16) + 2820LL) >= 1105;
}
