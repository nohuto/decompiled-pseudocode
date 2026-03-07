__int64 __fastcall ESM_NotifyingTransferRingsEndpointHalted(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx
  __int64 v3; // rdi
  unsigned int i; // esi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (__int64 *)(v1 + 136);
  if ( *(_BYTE *)(v1 + 37) && (XilEndpoint_FetchStreamContextArray(*v2), *(_BYTE *)(v1 + 37)) )
  {
    v3 = *v2;
    *(_DWORD *)(v3 + 20) = 0;
    for ( i = 1; i <= *(_DWORD *)(v3 + 8); ++i )
      TR_EndpointHalted(*(_QWORD *)(104LL * (i - 1) + *v2 + 48));
  }
  else
  {
    TR_EndpointHalted(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
