unsigned __int8 __fastcall ADAPTER_RENDER::IsMultiPlaneOverlaySupported(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 412) == 1297040209
    && *(int *)(v2 + 2820) <= 1300
    && (v4 = *(_QWORD *)(v2 + 216),
        v5 = 0LL,
        v6 = 0LL,
        DxgkGetAdapterMiracastInfo(v4, (__int64)&v5),
        (BYTE8(v6) & 4) != 0) )
  {
    return 0;
  }
  else
  {
    return *(_BYTE *)(*((_QWORD *)this + 2) + 2756LL);
  }
}
