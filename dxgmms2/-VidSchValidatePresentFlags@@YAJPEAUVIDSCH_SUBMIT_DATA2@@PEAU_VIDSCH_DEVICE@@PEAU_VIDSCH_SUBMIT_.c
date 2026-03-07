__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // eax
  struct _VIDSCH_GLOBAL *v5; // r15
  __int64 v7; // rcx
  unsigned int *v9; // r14
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // ecx

  v3 = *(_DWORD *)a3;
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = *((unsigned int *)a2 + 126);
  v9 = (unsigned int *)((char *)a1 + 116);
  if ( (*(_DWORD *)a3 & 0x40) == 0 )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v10 = v3 | 0x7000;
    }
    else
    {
      if ( (_DWORD)v7 != *v9 )
      {
        WdLogSingleEntry4(1LL, v5, a2, *v9, v7);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, struct _VIDSCH_GLOBAL *, struct _VIDSCH_DEVICE *, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid VidPnSourceId (Check 3)",
          v5,
          a2,
          *v9,
          *((unsigned int *)a2 + 126),
          0LL);
        v10 = *(_DWORD *)a3;
        goto LABEL_5;
      }
      v10 = v3 | 0x4000;
    }
    *(_DWORD *)a3 = v10;
LABEL_5:
    *((_DWORD *)a2 + 126) = -1;
    goto LABEL_6;
  }
  v13 = *v9;
  v14 = v3 & 0xFFFFFF7F;
  *(_DWORD *)a3 = v14;
  if ( (_DWORD)v7 == -1 )
  {
    *((_DWORD *)a2 + 126) = v13;
    v15 = 4096;
  }
  else
  {
    if ( (_DWORD)v7 != (_DWORD)v13 )
    {
      WdLogSingleEntry4(1LL, v5, a2, v13, v7);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, struct _VIDSCH_GLOBAL *, struct _VIDSCH_DEVICE *, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (Check 2)",
        v5,
        a2,
        *v9,
        *((unsigned int *)a2 + 126),
        0LL);
      return 3221225485LL;
    }
    v15 = 0x2000;
  }
  v10 = v15 | v14;
  *(_DWORD *)a3 = v10;
LABEL_6:
  if ( (v10 & 4) == 0 )
    return 0LL;
  v11 = VidSchiSetFlipDevice(v5, *v9, (__int64)a2, *((_DWORD *)a1 + 30), 9u, (*(_DWORD *)a1 & 0x20000000) != 0, 0);
  if ( v11 >= 0 )
  {
    VidSchiUpdatePresentParameters(v5, (__int64)a1);
    return 0LL;
  }
  WdLogSingleEntry0(3LL);
  return (unsigned int)v11;
}
