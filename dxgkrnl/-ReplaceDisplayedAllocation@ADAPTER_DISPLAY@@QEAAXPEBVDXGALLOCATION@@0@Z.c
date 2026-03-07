void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  const struct DXGALLOCATION *v3; // r15
  unsigned int i; // r14d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // rsi
  unsigned int j; // r8d
  __int64 v11; // r13
  char v12; // r12
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rdi
  __int64 v14; // r11
  int PreviousConfigIndex; // r15d
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  _BYTE v23[72]; // [rsp+50h] [rbp-48h] BYREF
  const struct DXGALLOCATION *v25; // [rsp+B0h] [rbp+18h] BYREF

  v25 = a3;
  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v6 = *((_QWORD *)this + 16);
    v7 = 0;
    v8 = i;
    v9 = 4000LL * i;
    if ( *(_DWORD *)(v9 + v6 + 3760) )
    {
      do
      {
        LODWORD(v25) = 0;
        v11 = v9 + 168LL * v7;
        v12 = 1;
        DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                   (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v11 + v6 + 1144),
                                   (int *)&v25);
        if ( DisplayPlaneConfigHead )
        {
          PreviousConfigIndex = (int)v25;
          while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
          {
            v12 = v14;
            v16 = v11 + *((_QWORD *)this + 16);
            if ( *(_DWORD *)(v16 + 1144) == -1 )
            {
              WdLogSingleEntry1(1LL, 9317LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
                9317LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *(_DWORD *)(v16 + 1148) == -1 )
            {
              WdLogSingleEntry1(1LL, 9318LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
                9318LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( PreviousConfigIndex != *(_DWORD *)(v16 + 1148) )
            {
              PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
              v14 = 0LL;
              DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(80LL * PreviousConfigIndex + v16 + 1152);
              if ( DisplayPlaneConfigHead )
                continue;
            }
            v3 = a2;
            goto LABEL_18;
          }
          *(_QWORD *)DisplayPlaneConfigHead = v14;
          if ( v12 )
          {
            v3 = a2;
            WdLogSingleEntry3(3LL, a2, i, v7);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v19 = *((_QWORD *)this + 16);
              LODWORD(v22) = *(unsigned __int8 *)(v19 + v9 + 761);
              LODWORD(v21) = v7;
              LODWORD(v20) = i;
              McTemplateK0ppqqt_EtwWriteTransfer(
                *(unsigned __int8 *)(v19 + v9 + 761),
                v17,
                v18,
                *((_QWORD *)this + 2),
                a2,
                v20,
                v21,
                v22);
            }
          }
          else
          {
            v3 = a2;
          }
          *((_DWORD *)DisplayPlaneConfigHead + 2) &= ~1u;
        }
LABEL_18:
        v6 = *((_QWORD *)this + 16);
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v6 + v9 + 3760) );
      v8 = i;
    }
    for ( j = 0; j < *(_DWORD *)(v6 + v9 + 3764); ++j )
    {
      if ( *(_BYTE *)(j + v9 + v6 + 2904)
        && (*(_DWORD *)(v6 + 80 * (j + 50 * v8) + 2928) & 1) != 0
        && *(const struct DXGALLOCATION **)(v6 + 80 * (j + 50 * v8) + 2920) == v3 )
      {
        *(_QWORD *)(v6 + 80 * (j + 50 * v8) + 2920) = 0LL;
        *(_BYTE *)(j + *((_QWORD *)this + 16) + v9 + 2904) = 0;
        *(_DWORD *)(*((_QWORD *)this + 16) + 80 * (j + 50 * v8) + 2928) &= ~1u;
      }
      v6 = *((_QWORD *)this + 16);
    }
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
