/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00161AC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00163F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3B40 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v12; // rcx
  struct _devicemodeW *v13; // r14
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+54h] [rbp-2Ch]
  int v37; // [rsp+5Ch] [rbp-24h]
  int v38; // [rsp+60h] [rbp-20h]
  int v39; // [rsp+64h] [rbp-1Ch]
  int v40; // [rsp+68h] [rbp-18h]
  int v41; // [rsp+6Ch] [rbp-14h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  int v43; // [rsp+B0h] [rbp+30h] BYREF
  int v44; // [rsp+B8h] [rbp+38h] BYREF

  v41 = 0;
  v43 = 0;
  v44 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  v4 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  v35 = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  v36 = *(_QWORD *)(v4 + 248);
  v5 = *(_DWORD *)(v4 + 256);
  v38 = -1;
  v37 = v5;
  v42 = *((_QWORD *)a1 + 4);
  v39 = -2;
  v40 = -2;
  v6 = ((__int64 (__fastcall *)(int *))qword_1C0251930)(&v35);
  v9 = v6;
  LODWORD(v10) = -1073741266;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v29[3] = -1073741266LL;
    v29[4] = *((_QWORD *)a1 + 4);
    v29[5] = *((int *)a1 + 13);
    v29[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v29);
    return (unsigned int)v10;
  }
  result = 3221225485LL;
  if ( (_DWORD)v9 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v9 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v33[3] = v9;
    v33[4] = *((_QWORD *)a1 + 4);
    v33[5] = *((int *)a1 + 13);
    v33[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v33);
    return (unsigned int)v9;
  }
  v12 = *a2;
  v13 = 0LL;
  if ( *a2 )
  {
    v14 = 0;
    if ( *((_WORD *)v12 + 10) )
    {
      while ( 1 )
      {
        v15 = 272LL * v14;
        if ( *(_DWORD *)((char *)v12 + v15 + 72) == *(_DWORD *)(v4 + 256)
          && *(_DWORD *)((char *)v12 + v15 + 64) == *(_DWORD *)(v4 + 248)
          && *(_DWORD *)((char *)v12 + v15 + 68) == *(_DWORD *)(v4 + 252) )
        {
          break;
        }
        if ( ++v14 >= *((unsigned __int16 *)v12 + 10) )
          goto LABEL_15;
      }
      v13 = *(struct _devicemodeW **)((char *)v12 + v15 + 272);
    }
  }
LABEL_15:
  v16 = (__int64 *)((char *)a1 + 40);
  v17 = *((_QWORD *)a1 + 5);
  if ( v17 )
  {
    Win32FreePool(v17);
    *v16 = 0LL;
  }
  v18 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 5,
          &v44,
          &v43,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v13);
  v10 = v18;
  if ( v18 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL);
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v32[3] = v10;
    v32[4] = *((_QWORD *)a1 + 4);
    v32[5] = *((int *)a1 + 13);
    v32[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v32);
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)a1 + 4) && v43 )
    v19 = 8;
  else
    v19 = 0;
  v35 = v19 | (v43 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  v36 = *(_QWORD *)(v4 + 248);
  v20 = *(_DWORD *)(v4 + 256);
  v38 = -1;
  v37 = v20;
  v21 = *v16;
  v39 = -2;
  v40 = -2;
  if ( !v21 )
    v21 = *((_QWORD *)a1 + 4);
  v22 = *((_DWORD *)a1 + 5) == 0;
  v42 = v21;
  if ( v22 || *((_DWORD *)a1 + 6) )
    v23 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, int *))qword_1C0251AD0)(a2, &v35);
  else
    v23 = ((__int64 (__fastcall *)(int *))qword_1C0251930)(&v35);
  v26 = v23;
  if ( v23 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
  v34[3] = v26;
  v34[4] = v42;
  v34[5] = *((int *)a1 + 13);
  v34[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v34);
  return (unsigned int)v26;
}
