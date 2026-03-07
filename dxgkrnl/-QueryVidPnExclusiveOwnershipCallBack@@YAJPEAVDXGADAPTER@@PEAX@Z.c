__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ADAPTER_DISPLAY *v8; // rax
  unsigned int v9; // ebp
  int VidPnSourceOwnerType; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  int v14; // edx
  int v15; // edx
  _QWORD *v16; // rax
  _BYTE v18[8]; // [rsp+60h] [rbp-28h] BYREF
  struct DXGADAPTER *v19; // [rsp+68h] [rbp-20h]
  char v20; // [rsp+70h] [rbp-18h]

  v19 = a1;
  v20 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
    v9 = 0;
    if ( *((_DWORD *)v8 + 24) )
    {
      while ( 1 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v8, v9);
        if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((ADAPTER_DISPLAY **)a1 + 365), v9) )
          break;
        if ( VidPnSourceOwnerType == 2 || VidPnSourceOwnerType == 3 || VidPnSourceOwnerType == 4 )
          goto LABEL_8;
LABEL_16:
        v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 365);
        if ( ++v9 >= *((_DWORD *)v8 + 24) )
          goto LABEL_19;
      }
      VidPnSourceOwnerType = 4;
LABEL_8:
      v11 = 4000LL * v9;
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 128LL);
      if ( *(_QWORD *)(v11 + v12 + 752) == *(_QWORD *)a2 )
      {
        v13 = *(_OWORD *)(v11 + v12 + 628);
        v14 = *((_DWORD *)a2 + 2);
        if ( (int)v13 <= v14 && SDWORD2(v13) >= v14 )
        {
          v15 = *((_DWORD *)a2 + 3);
          if ( SDWORD1(v13) <= v15 && SHIDWORD(v13) >= v15 )
          {
            if ( *((_DWORD *)a2 + 4) != -1 )
            {
              WdLogSingleEntry1(1LL, 10471LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pCallbackContext->VidPnSourceId == D3DDDI_ID_UNINITIALIZED",
                10471LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *((_DWORD *)a2 + 4) = v9;
            *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)a1 + 404);
            *((_DWORD *)a2 + 7) = VidPnSourceOwnerType;
          }
        }
      }
      goto LABEL_16;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v16[3] = a1;
    v16[4] = *((int *)a1 + 102);
    v16[5] = *((unsigned int *)a1 + 101);
  }
LABEL_19:
  if ( v20 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  return 0LL;
}
