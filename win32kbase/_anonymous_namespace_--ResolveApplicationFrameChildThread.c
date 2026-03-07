__int64 __fastcall anonymous_namespace_::ResolveApplicationFrameChildThread(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (*(_DWORD *)(a1 + 1272) & 0x40000) != 0 && (v1 = *(_QWORD *)(a1 + 1440)) != 0 )
    return *(_QWORD *)(v1 + 16);
  else
    return a1;
}
