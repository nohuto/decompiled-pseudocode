__int64 __fastcall NtDxgkOutputDuplPresentToHwQueue(_OWORD *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rcx
  struct DXGPROCESS *v5; // r14
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 Elements; // rax
  PVOID v10; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // edx
  char *v21; // rsi
  struct _D3DKMT_MOVE_RECT *v22; // rbx
  const void *v23; // rdx
  unsigned int v24; // ecx
  ULONG64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // [rsp+28h] [rbp-D0h]
  _OWORD v28[4]; // [rsp+50h] [rbp-A8h] BYREF
  struct DXGPROCESS *v29; // [rsp+90h] [rbp-68h]
  PVOID P; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+A0h] [rbp-58h] BYREF
  int v32; // [rsp+B0h] [rbp-48h]
  PVOID v33; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE v34[16]; // [rsp+C0h] [rbp-38h] BYREF
  int v35; // [rsp+D0h] [rbp-28h]

  memset(v28, 0, sizeof(v28));
  Current = DXGPROCESS::GetCurrent(v2);
  v5 = Current;
  v29 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v27 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v27,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    WdLogSingleEntry1(2LL, 2841LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Function can only be called from DWM process",
      2841LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  P = 0LL;
  v32 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v28[0] = *a1;
  v28[1] = a1[1];
  v28[2] = a1[2];
  v28[3] = a1[3];
  if ( !DWORD2(v28[0]) )
  {
    WdLogSingleEntry1(3LL, 2853LL);
    if ( P != v31 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    P = 0LL;
    v32 = 0;
    return 3221225485LL;
  }
  Elements = PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&P, DWORD2(v28[0]));
  v10 = P;
  if ( !Elements )
  {
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    return 3221225495LL;
  }
  v11 = 4LL * DWORD2(v28[0]);
  v12 = *(const void **)&v28[1];
  if ( *(_QWORD *)&v28[1] + v11 < *(_QWORD *)&v28[1] || *(_QWORD *)&v28[1] + v11 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v10, v12, v11);
  *(_QWORD *)&v28[1] = P;
  v13 = 16LL * DWORD2(v28[1]);
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v15 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v13 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 2881LL);
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    return v15;
  }
  v16 = 24LL * DWORD2(v28[2]);
  v17 = -1;
  if ( v16 <= 0xFFFFFFFF )
    v17 = 24 * DWORD2(v28[2]);
  v18 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v16 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 2888LL);
    goto LABEL_32;
  }
  v19 = v17 + v14;
  v20 = -1;
  if ( v17 + (unsigned int)v14 >= v17 )
    v20 = v17 + v14;
  v18 = v19 < v17 ? 0xC0000095 : 0;
  if ( v19 < v17 )
  {
    WdLogSingleEntry1(3LL, 2895LL);
LABEL_32:
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    return v18;
  }
  v33 = 0LL;
  v35 = 0;
  if ( v20 )
  {
    v21 = (char *)PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&v33, v20);
    if ( !v21 )
    {
      WdLogSingleEntry1(6LL, 2907LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
        2907LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v33 != v34 && v33 )
        ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      v35 = 0;
      if ( P != v31 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225495LL;
    }
    v22 = (struct _D3DKMT_MOVE_RECT *)&v21[16 * DWORD2(v28[1])];
    if ( DWORD2(v28[1]) )
    {
      v23 = *(const void **)&v28[2];
      if ( (unsigned __int64)(*(_QWORD *)&v28[2] + v14) < *(_QWORD *)&v28[2]
        || *(_QWORD *)&v28[2] + v14 > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v21, v23, (unsigned int)v14);
      *(_QWORD *)&v28[2] = v21;
    }
    else
    {
      *(_QWORD *)&v28[2] = 0LL;
    }
    v24 = DWORD2(v28[2]);
    if ( DWORD2(v28[2]) )
    {
      if ( v17 )
      {
        v25 = *(_QWORD *)&v28[3] + v17;
        if ( v25 > MmUserProbeAddress || v25 < *(_QWORD *)&v28[3] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v24 = DWORD2(v28[2]);
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v24, *(const struct _D3DKMT_MOVE_RECT **)&v28[3], v22);
      *(_QWORD *)&v28[3] = v22;
    }
    else
    {
      *(_QWORD *)&v28[3] = 0LL;
    }
  }
  else
  {
    *(_QWORD *)&v28[2] = 0LL;
    *(_QWORD *)&v28[3] = 0LL;
  }
  v26 = OutputDuplPresentToHwQueue((struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *)v28, v5);
  if ( v33 != v34 && v33 )
    ExFreePoolWithTag(v33, 0);
  v33 = 0LL;
  v35 = 0;
  if ( P != v31 && P )
    ExFreePoolWithTag(P, 0);
  return v26;
}
