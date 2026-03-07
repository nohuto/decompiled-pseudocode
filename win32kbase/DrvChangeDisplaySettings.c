__int64 __fastcall DrvChangeDisplaySettings(
        const UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        HSEMAPHORE a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _MDEV *a8,
        void **a9,
        unsigned int a10,
        int a11,
        int a12,
        unsigned int a13,
        _BYTE *a14,
        __int64 a15)
{
  char *v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rbx
  ULONG TimeIncrement; // eax
  unsigned int v20; // edi
  int v21; // ebx
  int v22; // r15d
  int v23; // r14d
  struct tagGRAPHICS_DEVICE *v24; // rsi
  int PruneFlag; // eax
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  int v28; // eax
  bool v30; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v32; // [rsp+90h] [rbp-78h] BYREF
  struct tagGRAPHICS_DEVICE *v33; // [rsp+98h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  _QWORD v41[13]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+160h] [rbp+58h]
  int v45; // [rsp+1A8h] [rbp+A0h]

  v16 = 0LL;
  v31 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v17 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v18 = MEMORY[0xFFFFF78000000320];
  v39 = v17;
  TimeIncrement = KeQueryTimeIncrement();
  *a9 = 0LL;
  v40 = v18 * TimeIncrement;
  v34 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v34, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v41);
  v41[0] = &off_1C027BC60;
  v20 = DrvChangeDisplaySettingsPreValidate(a1, a6, (__int64)&v33, (__int64)&v32);
  if ( v20 )
    goto LABEL_27;
  v21 = 1;
  if ( !(_DWORD)v32 )
  {
    if ( *(_DWORD *)(v17 + 1296) )
      WdLogSingleEntry0(1LL);
    v22 = a12;
    v23 = a7;
    *(_DWORD *)(v17 + 1296) = 1;
    v24 = v33;
    v20 = DrvChangeDisplaySettingsInternal((WCHAR *)v33, a3, 0LL, a4, a6, a7, a8, a9, a10, a11, a12, 0, 0);
    *(_DWORD *)(v39 + 1296) = 0;
    v31 = 1;
    goto LABEL_25;
  }
  v23 = a7;
  v24 = v33;
  v30 = 0;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v33 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v33 + 40) & 0x800000) == 0 )
      WdLogSingleEntry0(1LL);
    DWORD2(v35) = a11;
    *(_QWORD *)&v36 = __PAIR64__(a6, a13);
    *(_QWORD *)&v35 = v24;
    *(_QWORD *)&v37 = a3;
    DWORD2(v36) = a7;
    if ( a10 == -1 )
      PruneFlag = DrvGetPruneFlag(v24);
    else
      PruneFlag = a10 != 0;
    HIDWORD(v35) = PruneFlag;
  }
  v22 = a12;
  v26 = 32;
  v27 = (a7 != 0 ? 143 : 79) | (a12 != 0 ? 0x100 : 0);
  if ( !a3 && a7 )
  {
    v27 |= 0x800u;
    v26 = 34;
  }
  v28 = DrvSetDisplayConfig(
          0,
          0LL,
          v27,
          v26,
          a4,
          a5 != 0,
          0LL,
          (struct _DISPLAYCONFIG_CDS_REQUEST *)&v35,
          a8,
          (struct _MDEV **)a9,
          &v31,
          0LL,
          &v30,
          a14,
          a15,
          0LL);
  v20 = v38;
  v16 = (char *)*((_QWORD *)&v37 + 1);
  HIDWORD(v32) = v28;
  v45 = HIDWORD(v38);
  if ( v28 >= 0 )
  {
    if ( (int)v38 < 0 )
      WdLogSingleEntry0(1LL);
    if ( v30 )
    {
      if ( a12 )
        WdLogSingleEntry0(1LL);
      v20 = 2;
    }
    goto LABEL_24;
  }
  if ( (int)v38 >= 0 )
  {
    WdLogSingleEntry0(1LL);
LABEL_24:
    v21 = v45;
    goto LABEL_25;
  }
  v21 = HIDWORD(v38);
LABEL_25:
  LogDiagCDS(a1, a3, v24, a5, a6, v23, a11, v22, v40, v20, HIDWORD(v32), v21, v31, v16);
  if ( v16 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
LABEL_27:
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)v41);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v34, 3LL);
  return v20;
}
