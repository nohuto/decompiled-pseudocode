__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetContentType(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  DXGADAPTER **v4; // rbx
  __int64 v5; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  _DXGKARG_SETTARGETCONTENTTYPE v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
    WdLogSingleEntry0(1LL);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
    WdLogSingleEntry0(1LL);
  v4 = *(DXGADAPTER ***)(v3 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v4[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v4, *(_DWORD *)(*((_QWORD *)this + 11) + 24LL)) )
    return 0LL;
  v6 = *((_DWORD *)this + 41);
  v10.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  v10.ContentType = v6;
  v7 = ADAPTER_DISPLAY::DdiSetTargetContentType((ADAPTER_DISPLAY *)v4, &v10, v5);
  v8 = v7;
  if ( v7 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  if ( v7 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, this, v7);
  return v8;
}
