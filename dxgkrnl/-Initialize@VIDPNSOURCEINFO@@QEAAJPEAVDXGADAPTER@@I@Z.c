__int64 __fastcall VIDPNSOURCEINFO::Initialize(VIDPNSOURCEINFO *this, struct DXGADAPTER *a2, unsigned int a3)
{
  __int64 v3; // r14
  _QWORD *v7; // rbp
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // r15
  int VidPnSourceOwnerType; // eax
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned __int8 *v19; // rdx
  __int16 v20; // cx
  unsigned int i; // esi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  const char *ProcessImageFileName; // rax
  __int64 v24; // rdx
  int v25; // ecx
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( !a2 )
    return 3221225485LL;
  v7 = (_QWORD *)*((_QWORD *)a2 + 365);
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 12) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v7, a3);
  v9 = VidPnSourceOwner;
  if ( VidPnSourceOwner )
  {
    _m_prefetchw((char *)VidPnSourceOwner + 64);
    v10 = *((_QWORD *)VidPnSourceOwner + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 8, v10 + 1, v10);
      if ( v11 == v10 )
      {
        *(_QWORD *)this = v9;
        break;
      }
    }
  }
  *((_DWORD *)this + 2) = v3;
  *((_QWORD *)this + 2) = *(_QWORD *)((char *)a2 + 404);
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 7) = 25;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (2 * ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v7, v3))) & 2;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (4 * ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                           (ADAPTER_DISPLAY *)v7,
                                                           v3))) & 4;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (32 * ADAPTER_DISPLAY::IsPointerVisible((ADAPTER_DISPLAY *)v7, v3))) & 0x20;
  v12 = 4000 * v3;
  *((_DWORD *)this + 7) ^= ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(*(_BYTE *)(4000 * v3
                                                                                                + v7[16]
                                                                                                + 1140) << 7)) & 0x80;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v7, v3);
  v14 = 0;
  if ( VidPnSourceOwnerType == 1 )
    v14 = 256;
  v15 = v14 | *((_DWORD *)this + 7) & 0xFFFFFEFF;
  *((_DWORD *)this + 7) = v15;
  if ( *((_QWORD *)a2 + 366) )
    v16 = *((_DWORD *)a2 + 72) > 1u ? 0x400 : 0;
  else
    v16 = 0;
  v17 = v16 | v15 & 0xFFFFFBFF;
  *((_DWORD *)this + 7) = v17;
  v18 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(2 * *((_DWORD *)a2 + 109))) & 0x200;
  v19 = *(unsigned __int8 **)this;
  *((_DWORD *)this + 7) = v18;
  if ( v19 )
    v20 = v19[1938];
  else
    v20 = 0;
  *((_DWORD *)this + 7) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(v20 << 14)) & 0x4000;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
                                                       *((DXGADAPTER ***)a2 + 365),
                                                       (const struct DXGDEVICE *)v19,
                                                       v3) << 15)) & 0x8000;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v7 + 76), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  for ( i = 0; i < 0xA; ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)(v12 + v7[16]), i);
    if ( LatestPlaneConfigInternal )
    {
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 && i )
        *((_DWORD *)this + 7) |= 0x800u;
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 8) != 0 )
        *((_DWORD *)this + 7) |= 0x1000u;
    }
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( *(_QWORD *)this )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 56LL));
    RtlStringCchCopyA((char *)this + 32, v24, ProcessImageFileName);
  }
  else
  {
    *((_BYTE *)this + 32) = 0;
  }
  if ( (*((_DWORD *)this + 7) & 0x486) != 6 || !*(_QWORD *)this )
    *((_DWORD *)this + 12) = 1;
  DISPLAY_SOURCE::GetPresentDiagHistory((DISPLAY_SOURCE *)(v12 + v7[16]), (VIDPNSOURCEINFO *)((char *)this + 64));
  v25 = *(_DWORD *)(v7[16] + v12 + 1088);
  *((_DWORD *)this + 3) = v25;
  if ( v25 == -1 )
    DmmGetMostImportantClientVidPnPathTargetsFromSource(a2, v3, (unsigned int *const)this + 3);
  return 0LL;
}
