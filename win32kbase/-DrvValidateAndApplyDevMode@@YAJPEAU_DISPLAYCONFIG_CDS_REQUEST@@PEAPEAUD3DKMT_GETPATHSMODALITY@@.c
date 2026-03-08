/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F534
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 DxgkWin32kInterface; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v10; // rcx
  struct _devicemodeW *v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 *v14; // rsi
  char *v15; // rdx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+54h] [rbp-2Ch]
  int v29; // [rsp+5Ch] [rbp-24h]
  int v30; // [rsp+60h] [rbp-20h]
  int v31; // [rsp+64h] [rbp-1Ch]
  int v32; // [rsp+68h] [rbp-18h]
  int v33; // [rsp+6Ch] [rbp-14h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+B0h] [rbp+30h] BYREF
  int v36; // [rsp+B8h] [rbp+38h] BYREF

  v33 = 0;
  v35 = 0;
  v36 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
    WdLogSingleEntry0(1LL);
  v27 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v28 = *(_QWORD *)(v4 + 240);
  v5 = *(_DWORD *)(v4 + 248);
  v30 = -1;
  v29 = v5;
  v34 = *((_QWORD *)a1 + 4);
  v31 = -2;
  v32 = -2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v27, a2);
  v7 = (*(__int64 (__fastcall **)(unsigned int *))(DxgkWin32kInterface + 192))(&v27);
  v8 = v7;
  if ( v7 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    WdLogSingleEntry4(3LL, -1073741266LL, *((_QWORD *)a1 + 4), 2LL);
    return 3221226030LL;
  }
  else
  {
    result = 3221225485LL;
    if ( (_DWORD)v8 == -1073741811 )
    {
      *((_DWORD *)a1 + 13) = 3;
      *((_DWORD *)a1 + 12) = -2;
    }
    else if ( (int)v8 >= 0 )
    {
      v10 = *a2;
      v11 = 0LL;
      if ( *a2 )
      {
        v12 = 0;
        if ( *((_WORD *)v10 + 10) )
        {
          while ( 1 )
          {
            v13 = 296LL * v12;
            if ( *(_DWORD *)((char *)v10 + v13 + 80) == *(_DWORD *)(v4 + 248)
              && *(_DWORD *)((char *)v10 + v13 + 72) == *(_DWORD *)(v4 + 240)
              && *(_DWORD *)((char *)v10 + v13 + 76) == *(_DWORD *)(v4 + 244) )
            {
              break;
            }
            if ( ++v12 >= *((unsigned __int16 *)v10 + 10) )
              goto LABEL_22;
          }
          v11 = *(struct _devicemodeW **)((char *)v10 + v13 + 304);
        }
      }
LABEL_22:
      v14 = (__int64 *)((char *)a1 + 40);
      v15 = (char *)*((_QWORD *)a1 + 5);
      if ( v15 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
        *v14 = 0LL;
      }
      v16 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)v4,
              (struct _devicemodeW **)a1 + 5,
              &v36,
              &v35,
              *((struct _devicemodeW **)a1 + 4),
              0,
              *((_DWORD *)a1 + 3),
              *((_DWORD *)a1 + 2),
              0,
              v11);
      v17 = v16;
      if ( v16 >= 0 )
      {
        if ( *((_DWORD *)a1 + 4) && v35 )
          v18 = 8LL;
        else
          v18 = 0LL;
        v19 = (unsigned int)v18 | (v35 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
        v27 = v18 | (v35 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
        v28 = *(_QWORD *)(v4 + 240);
        v20 = *(_DWORD *)(v4 + 248);
        v30 = -1;
        v29 = v20;
        v21 = *v14;
        v31 = -2;
        v32 = -2;
        if ( !v21 )
          v21 = *((_QWORD *)a1 + 4);
        v22 = *((_DWORD *)a1 + 5) == 0;
        v34 = v21;
        if ( v22 || *((_DWORD *)a1 + 6) )
        {
          v26 = DxDdGetDxgkWin32kInterface(v19, v18);
          v24 = (*(__int64 (__fastcall **)(struct D3DKMT_GETPATHSMODALITY **, unsigned int *))(v26 + 600))(a2, &v27);
        }
        else
        {
          v23 = DxDdGetDxgkWin32kInterface(v19, v18);
          v24 = (*(__int64 (__fastcall **)(unsigned int *))(v23 + 192))(&v27);
        }
        v25 = v24;
        if ( v24 >= 0 )
        {
          return 0LL;
        }
        else
        {
          *((_DWORD *)a1 + 13) = 8;
          *((_DWORD *)a1 + 12) = -1;
          WdLogSingleEntry4(2LL, v24, v34, 8LL);
          return v25;
        }
      }
      else
      {
        *((_DWORD *)a1 + 13) = 4;
        *((_DWORD *)a1 + 12) = -2;
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0, 0);
        WdLogSingleEntry4(2LL, v17, *((_QWORD *)a1 + 4), *((int *)a1 + 13));
        return (unsigned int)v17;
      }
    }
    else
    {
      *((_DWORD *)a1 + 13) = 4;
      *((_DWORD *)a1 + 12) = -2;
      WdLogSingleEntry4(2LL, v8, *((_QWORD *)a1 + 4), 4LL);
      return (unsigned int)v8;
    }
  }
  return result;
}
