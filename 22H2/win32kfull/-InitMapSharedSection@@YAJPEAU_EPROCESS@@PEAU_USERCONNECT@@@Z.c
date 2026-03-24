/*
 * XREFs of ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C004D714
 * Callers:
 *     NtUserProcessConnect @ 0x1C004D1F0 (NtUserProcessConnect.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  struct _USERCONNECT *v2; // rsi
  __int64 ProcessWin32Process; // rax
  __int64 result; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  v2 = a2;
  v17 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 3, 14, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
  }
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 744) )
  {
    v16 = *(_QWORD *)(PsGetProcessWin32Process(a1) + 744);
    v10 = *(_QWORD *)(PsGetProcessWin32Process(a1) + 752);
    v17 = v10;
  }
  else
  {
    v15 = 0LL;
    v14 = 0x200000LL;
    result = MmMapViewOfSection(ghSectionShared, a1, &v16, 0LL, 0LL, &v15, &v14, 2, 0x400000, 2);
    if ( (int)result < 0 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(v7, v6, 3, 15, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids, v16);
    }
    v14 = 0LL;
    v15 = 2101248LL;
    v8 = MmMapViewOfSection(ghSectionShared, a1, &v17, 0LL, 0LL, &v15, &v14, 2, 0x400000, 2);
    if ( v8 < 0 )
    {
      MmUnmapViewOfSection(a1, v16);
      return (unsigned int)v8;
    }
    v9 = PsGetProcessWin32Process(a1);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 744) = v16;
      *(_QWORD *)(v9 + 752) = v17;
    }
    v10 = v17;
  }
  *((_QWORD *)v2 + 5) = v10;
  v11 = 31LL;
  *((_QWORD *)v2 + 1) = v10 + gSharedInfo[0] - gpvSharedAlloc;
  *((_QWORD *)v2 + 2) = v16 + gSharedInfo[1] - gpvSharedBase;
  *((_DWORD *)v2 + 6) = gSharedInfo[2];
  *((_QWORD *)v2 + 4) = v10 + gSharedInfo[3] - gpvSharedAlloc;
  *((_DWORD *)v2 + 136) = gSharedInfo[67];
  *((_QWORD *)v2 + 69) = v10 + gSharedInfo[68] - gpvSharedAlloc;
  *((_DWORD *)v2 + 140) = gSharedInfo[69];
  v12 = (_QWORD *)((char *)v2 + 56);
  *((_QWORD *)v2 + 71) = v10 + gSharedInfo[70] - gpvSharedAlloc;
  do
  {
    *((_DWORD *)v12 - 2) = *(_DWORD *)((char *)v12 + gSharedInfo[0] - (_QWORD)v2 - 16);
    v13 = *(_QWORD *)((char *)v12 + gSharedInfo[0] - (_QWORD)v2 - 8);
    if ( v13 )
      v13 = v10 + v13 - gpvSharedAlloc;
    *v12 = v13;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  return 0LL;
}
