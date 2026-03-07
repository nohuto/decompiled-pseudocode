char IopLiveDumpGenerateIptSecondaryData()
{
  __int64 v0; // rdi
  __int64 MillisecondCounter; // rsi
  int v2; // eax
  void **v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  void *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int *v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v0 = IopLiveDumpContext;
  v18 = 0LL;
  MillisecondCounter = 0LL;
  v15 = 0LL;
  v2 = *(_DWORD *)(IopLiveDumpContext + 80);
  v16 = 0LL;
  v17 = 0LL;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = (void **)(v0 + 1048);
  v4 = *(_QWORD *)(v0 + 1048);
  if ( v4 )
  {
    v5 = IptInterface;
    *(_DWORD *)(v0 + 1088) = 0;
    *(_QWORD *)(v0 + 1080) = v4;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(v5 + 40))(2LL, 0LL, v0 + 1048, 48LL);
    v6 = *(_DWORD *)(v0 + 1088);
    if ( v6 && *(_DWORD *)(v0 + 1056) >= v6 )
    {
      v7 = *(void **)(v0 + 1080);
      if ( *v3 != v7 )
      {
        memmove(*v3, v7, v6);
        *(_QWORD *)(v0 + 1080) = *v3;
        v6 = *(_DWORD *)(v0 + 1088);
      }
      if ( v6 )
      {
        if ( *(_QWORD *)(v0 + 1000) )
        {
          LODWORD(v16) = *(_DWORD *)v0;
          *((_QWORD *)&v16 + 1) = *(_QWORD *)(v0 + 8);
          v17 = *(_OWORD *)(v0 + 16);
          v18 = *(_QWORD *)(v0 + 32);
          HIDWORD(v15) = 0x2000000;
          (*(void (__fastcall **)(__int64, _QWORD, __int128 *, __int64))(IptInterface + 32))(7LL, 0LL, &v15, 56LL);
          v8 = v15;
          if ( (_QWORD)v15 )
          {
            v9 = 16 * *(_DWORD *)(v15 + 16) + 12;
            if ( v9 <= *(_DWORD *)(v0 + 1008) )
            {
              v10 = *(unsigned int **)(v0 + 1000);
              *(_DWORD *)(v0 + 1040) = v9;
              *(_QWORD *)(v0 + 1032) = v10;
              *(GUID *)(v0 + 1016) = GUID_TRIAGEDUMP_DATA;
              v11 = *(_DWORD *)(v8 + 16);
              *v10 = v11;
              v10[1] = 4;
              memmove(v10 + 2, (const void *)(v15 + 48), 16LL * v11);
              v10[4 * *v10 + 2] = 5525577;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v0 + 1080) = 0LL;
      *(_DWORD *)(v0 + 1088) = 0;
    }
  }
  v12 = *(_DWORD *)(v0 + 80);
  if ( (v12 & 0x80u) != 0 )
  {
    v13 = IopLiveDumpGetMillisecondCounter(0);
    LOBYTE(v12) = IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(v0, v13 - MillisecondCounter);
  }
  return v12;
}
