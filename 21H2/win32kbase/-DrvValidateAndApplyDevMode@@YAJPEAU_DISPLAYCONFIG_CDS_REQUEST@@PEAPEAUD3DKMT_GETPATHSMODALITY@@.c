/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C007AAA0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  struct _devicemodeW *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 *v13; // rsi
  void *v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // edi
  int v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+54h] [rbp-2Ch]
  int v25; // [rsp+5Ch] [rbp-24h]
  int v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+64h] [rbp-1Ch]
  int v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+B0h] [rbp+30h] BYREF
  int v32; // [rsp+B8h] [rbp+38h] BYREF

  v29 = 0;
  v31 = 0;
  v32 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
    WdLogSingleEntry0(1LL);
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
    WdLogSingleEntry0(1LL);
  v23 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v24 = *(_QWORD *)(v4 + 248);
  v5 = *(_DWORD *)(v4 + 256);
  v26 = -1;
  v25 = v5;
  v30 = *((_QWORD *)a1 + 4);
  v27 = -2;
  v28 = -2;
  v6 = ((__int64 (__fastcall *)(int *))qword_1C0296720)(&v23);
  v7 = v6;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    WdLogSingleEntry4(3LL, -1073741266LL, *((_QWORD *)a1 + 4));
    return 3221226030LL;
  }
  else
  {
    result = 3221225485LL;
    if ( (_DWORD)v7 == -1073741811 )
    {
      *((_DWORD *)a1 + 13) = 3;
      *((_DWORD *)a1 + 12) = -2;
    }
    else if ( (int)v7 < 0 )
    {
      *((_DWORD *)a1 + 13) = 4;
      *((_DWORD *)a1 + 12) = -2;
      WdLogSingleEntry4(2LL, v7, *((_QWORD *)a1 + 4));
      return (unsigned int)v7;
    }
    else
    {
      v9 = (__int64)*a2;
      v10 = 0LL;
      if ( *a2 )
      {
        v11 = 0;
        if ( *(_WORD *)(v9 + 20) )
        {
          while ( 1 )
          {
            v12 = 296LL * v11;
            if ( *(_DWORD *)(v12 + v9 + 80) == *(_DWORD *)(v4 + 256)
              && *(_DWORD *)(v12 + v9 + 72) == *(_DWORD *)(v4 + 248)
              && *(_DWORD *)(v12 + v9 + 76) == *(_DWORD *)(v4 + 252) )
            {
              break;
            }
            if ( ++v11 >= *(unsigned __int16 *)(v9 + 20) )
              goto LABEL_15;
          }
          v10 = *(struct _devicemodeW **)(v12 + v9 + 304);
        }
      }
LABEL_15:
      v13 = (__int64 *)((char *)a1 + 40);
      v14 = (void *)*((_QWORD *)a1 + 5);
      if ( v14 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v14);
        *v13 = 0LL;
      }
      v15 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)v4,
              (struct _devicemodeW **)a1 + 5,
              &v32,
              &v31,
              *((struct _devicemodeW **)a1 + 4),
              0,
              *((_DWORD *)a1 + 3),
              *((_DWORD *)a1 + 2),
              0,
              v10);
      v16 = v15;
      if ( v15 < 0 )
      {
        *((_DWORD *)a1 + 13) = 4;
        *((_DWORD *)a1 + 12) = -2;
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        WdLogSingleEntry4(2LL, v16, *((_QWORD *)a1 + 4));
        return (unsigned int)v16;
      }
      else
      {
        if ( *((_DWORD *)a1 + 4) && v31 )
          v17 = 8;
        else
          v17 = 0;
        v23 = v17 | (v31 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
        v24 = *(_QWORD *)(v4 + 248);
        v18 = *(_DWORD *)(v4 + 256);
        v26 = -1;
        v25 = v18;
        v19 = *v13;
        v27 = -2;
        v28 = -2;
        if ( !v19 )
          v19 = *((_QWORD *)a1 + 4);
        v20 = *((_DWORD *)a1 + 5) == 0;
        v30 = v19;
        if ( v20 || *((_DWORD *)a1 + 6) )
          v21 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C02968B8)(a2, &v23);
        else
          v21 = ((__int64 (__fastcall *)(int *))qword_1C0296720)(&v23);
        v22 = v21;
        if ( v21 < 0 )
        {
          *((_DWORD *)a1 + 13) = 8;
          *((_DWORD *)a1 + 12) = -1;
          WdLogSingleEntry4(2LL, v21, v30);
          return v22;
        }
        else
        {
          return 0LL;
        }
      }
    }
  }
  return result;
}
