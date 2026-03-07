__int64 __fastcall IoGetFsTrackOffsetState(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r9
  _QWORD *v3; // r10
  __int64 v5; // rcx

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
    return 3221226021LL;
  v5 = *(_QWORD *)(v1 + 200);
  *v3 = *(_QWORD *)(v5 + 40);
  *v2 = *(_QWORD *)(v5 + 48);
  return 0LL;
}
