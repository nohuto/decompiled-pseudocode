/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C01C4BE4
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01C49B4 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000B0E4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  const struct _LUID *v6; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  unsigned int v9; // ebx
  DXGADAPTER *v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  ADAPTER_DISPLAY *v13; // r13
  int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // rbp
  unsigned int v17; // ecx
  char *v18; // r15
  __int64 v19; // r11
  signed __int64 v20; // r14
  unsigned int v21; // ebp
  unsigned int v22; // ecx
  _DWORD *v23; // r14
  unsigned int v24; // edx
  unsigned int v25; // eax
  __int64 LowPart; // rbp
  const wchar_t *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 HighPart; // rcx
  __int64 v34; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-F0h] BYREF
  const struct _LUID *v36; // [rsp+70h] [rbp-E8h]
  char *v37; // [rsp+78h] [rbp-E0h]
  _BYTE v38[144]; // [rsp+80h] [rbp-D8h] BYREF

  v37 = a4;
  v6 = a1;
  v36 = a1;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v35);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v8, 0LL);
    DXGADAPTER::ReleaseReference(v10);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
    LODWORD(v12) = v11;
    if ( v11 < 0 )
    {
      LowPart = v11;
      WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, v11);
      v28 = L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.";
    }
    else
    {
      v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 365);
      if ( v13 )
      {
        v14 = 0;
        v15 = 0;
        if ( !a2 )
        {
LABEL_17:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
          return v9;
        }
        do
        {
          v16 = v15;
          v17 = *(_DWORD *)&a4[4 * v15];
          if ( v17 != -1 )
          {
            if ( v17 >= *((_DWORD *)v13 + 24) )
            {
              LODWORD(v12) = -1071774972;
              WdLogSingleEntry4(2LL, *(unsigned int *)&a4[4 * v15], v6->HighPart, v6->LowPart, -1071774972LL);
              v29 = *(unsigned int *)&a4[4 * v16];
              v28 = L"Caller specified VidPn source 0x%I64x exceeds the MAX VidPn source on adapter 0x%I64x%08I64x, returning 0x%I64x.";
              LowPart = v6->LowPart;
              v30 = -1071774972LL;
              HighPart = v6->HighPart;
              goto LABEL_32;
            }
            v14 |= 1 << v17;
          }
          ++v15;
        }
        while ( v15 < a2 );
        v18 = a4;
        v19 = a2;
        v20 = a3 - a4;
        v34 = a2;
        do
        {
          if ( *(_DWORD *)v18 == -1 )
          {
            v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v13, *(_DWORD *)&v18[v20]);
            if ( v21 != -1 )
            {
              if ( v21 >= *((_DWORD *)v13 + 24) )
              {
                WdLogSingleEntry1(1LL, 8865LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < pDisplayCore->GetNumVidPnSources()",
                  8865LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v19 = v34;
              }
              if ( ((1 << v21) & v14) == 0 )
              {
                *(_DWORD *)v18 = v21;
                v14 |= 1 << v21;
              }
            }
          }
          v18 += 4;
          v34 = --v19;
        }
        while ( v19 );
        v6 = v36;
        v22 = 0;
        v23 = v37;
        v24 = 0;
        v25 = a2;
        while ( *v23 != -1 )
        {
LABEL_16:
          ++v24;
          ++v23;
          if ( v24 >= v25 )
            goto LABEL_17;
        }
        while ( v22 < *((_DWORD *)v13 + 24) )
        {
          if ( !_bittest(&v14, v22) )
          {
            *v23 = v22;
            v14 |= 1 << v22;
            v25 = a2;
            ++v22;
            goto LABEL_16;
          }
          ++v22;
        }
        v12 = -1071774975LL;
        WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, -1071774975LL);
        v28 = L"All the VidPn sources are used on adapter 0x%I64x%08I64x, returning 0x%I64x.";
      }
      else
      {
        v12 = -1073741811LL;
        WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, -1073741811LL);
        v28 = L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.";
      }
      LowPart = v12;
    }
    v29 = v6->HighPart;
    v30 = 0LL;
    HighPart = v6->LowPart;
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v29, HighPart, LowPart, v30, 0LL);
    v9 = v12;
    goto LABEL_17;
  }
  WdLogSingleEntry3(2LL, v6->HighPart, v6->LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
    v6->HighPart,
    v6->LowPart,
    -1073741811LL,
    0LL,
    0LL);
  return 3221225485LL;
}
