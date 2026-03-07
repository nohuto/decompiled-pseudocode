__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        HSEMAPHORE a4,
        struct _MDEV *a5,
        _BYTE *a6,
        void **a7,
        int *a8,
        _DWORD *a9,
        __int64 a10)
{
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rsi
  __int64 DxgkWin32kInterface; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ebx
  unsigned int v24; // ebp
  __int64 v25; // rdx
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v33; // r10
  __int64 v34; // r9
  unsigned int v35; // r9d
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // r8

  *a6 = 0;
  v14 = ApplyPathModalityToCdsRegistryStore();
  if ( v14 < 0 )
  {
    *a8 = v14;
    *a9 = 50;
    return 0xFFFFFFFFLL;
  }
  else
  {
    LOBYTE(v15) = 1;
    DrvNotifyModeChangeStartStop(v15);
    v18 = (__int64 *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 40) || *v18 )
      WdLogSingleEntry0(1LL);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v17, v16);
    v20 = a2;
    LODWORD(v20) = a2 | 0x20000;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(DxgkWin32kInterface + 160))(v20, a1, a10);
    if ( v21 < 0 )
    {
      v30 = -1;
      *a6 = 1;
      *a8 = v21;
      *a9 = 51;
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 40);
      if ( !v22 || !*v18 )
      {
        WdLogSingleEntry0(1LL);
        v22 = *(_DWORD *)(a1 + 40);
      }
      v23 = (a2 & 0x400000) != 0;
      v24 = 0;
      if ( v22 )
      {
        v25 = *v18;
        do
        {
          v26 = v22;
          if ( (v23 & 1) != 0 )
          {
            v33 = 340LL * v24;
            v34 = *(unsigned int *)(v33 + v25 + 88);
            if ( (_DWORD)v34 != *(_DWORD *)(v33 + v25 + 120) )
            {
              WdLogSingleEntry4(4LL, *(int *)(v33 + v25 + 4), *(unsigned int *)(v33 + v25), v34);
              v26 = *(_DWORD *)(a1 + 40);
              v23 &= ~1u;
            }
          }
          v25 = *v18;
          v22 = v26;
          if ( *(_BYTE *)(340LL * v24 + *v18 + 76) )
            a3 = 1;
          ++v24;
        }
        while ( v24 < v26 );
      }
      v27 = DrvChangeDisplaySettingsInternal(
              0LL,
              0LL,
              (struct D3DKMT_GETPATHSMODALITY *)a1,
              a4,
              0,
              1,
              a5,
              a7,
              0,
              1,
              a3,
              1,
              v23);
      v30 = v27;
      if ( v27 < 0 )
      {
        *a6 = 1;
        *a8 = -1073741823;
        v29 = a9;
        *a9 = 16;
      }
      else if ( v27 == 1 )
      {
        v30 = -1;
        *a8 = -1073741823;
        *a9 = 52;
      }
      v31 = DxDdGetDxgkWin32kInterface(v29, v28);
      (*(void (__fastcall **)(__int64))(v31 + 168))(a1);
      if ( v30 == 2 )
      {
        v35 = *(_DWORD *)(a1 + 40);
        if ( v35 )
        {
          v36 = *v18;
          if ( *v18 )
          {
            v37 = 0;
            while ( 1 )
            {
              v38 = 340LL * v37;
              if ( *(_DWORD *)(v38 + v36 + 88)
                || *(_DWORD *)(v38 + v36 + 92)
                || *(_DWORD *)(v38 + v36 + 124)
                || *(_DWORD *)(v38 + v36 + 132) )
              {
                break;
              }
              if ( ++v37 >= v35 )
                goto LABEL_17;
            }
            v30 = 0;
            *a7 = a5;
            GreIncrementDisplaySettingsUniqueness();
          }
        }
      }
    }
LABEL_17:
    DrvNotifyModeChangeStartStop(0LL);
    return v30;
  }
}
