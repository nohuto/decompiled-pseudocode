__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuProfile(ADAPTER_RENDER *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdx

  if ( a2 == 1 )
  {
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 8) = 1000000000LL;
    *(_QWORD *)(a3 + 16) = 1000000000LL;
    *(_QWORD *)(a3 + 32) = 1000000000LL;
    *(_QWORD *)(a3 + 40) = 1000000000LL;
    *(_QWORD *)(a3 + 48) = -1LL;
    *(_QWORD *)(a3 + 56) = -1LL;
    *(_QWORD *)(a3 + 72) = -1LL;
    *(_QWORD *)(a3 + 80) = -1LL;
    *(_QWORD *)(a3 + 88) = 1000000000LL;
    *(_QWORD *)(a3 + 96) = 1000000000LL;
    *(_QWORD *)(a3 + 112) = 1000000000LL;
    *(_QWORD *)(a3 + 120) = 1000000000LL;
    *(_QWORD *)(a3 + 128) = 1000000000LL;
    *(_QWORD *)(a3 + 136) = 1000000000LL;
    *(_QWORD *)(a3 + 152) = 1000000000LL;
    *(_QWORD *)(a3 + 160) = 1000000000LL;
    *(_QWORD *)(a3 + 64) = 0LL;
    *(_QWORD *)(a3 + 104) = 0LL;
    *(_QWORD *)(a3 + 144) = 0LL;
    *(_DWORD *)(a3 + 4) = 2304;
    if ( !*(_DWORD *)a3 )
    {
      v3 = *((_QWORD *)a1 + 234);
      if ( v3 )
        *(_DWORD *)a3 = *(_DWORD *)(v3 + 12);
    }
    return 0LL;
  }
  else
  {
    if ( !*(_DWORD *)a3 )
    {
      v5 = *((_QWORD *)a1 + 233);
      if ( v5 )
        *(_DWORD *)a3 = *(_DWORD *)(v5 + 12);
    }
    return ADAPTER_RENDER::DdiGetVirtualGpuProfile(a1, (struct _DXGKARG_GETVIRTUALGPUPROFILE *)a3);
  }
}
