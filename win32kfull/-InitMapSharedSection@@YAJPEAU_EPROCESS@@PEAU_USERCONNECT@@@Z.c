__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  struct _USERCONNECT *v2; // rsi
  _QWORD *ProcessWin32Process; // rax
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h] BYREF

  v17 = 0LL;
  v2 = a2;
  v18 = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (unsigned int)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids,
      4,
      3,
      14,
      (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids);
  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *ProcessWin32Process && ProcessWin32Process[92] )
  {
    v14 = PsGetProcessWin32Process(a1);
    if ( v14 )
      v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
    v17 = *(_QWORD *)(v14 + 736);
    v15 = PsGetProcessWin32Process(a1);
    if ( v15 )
      v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
    v10 = *(_QWORD *)(v15 + 744);
    v18 = v10;
  }
  else
  {
    v16[0] = 0LL;
    v19 = 0x200000LL;
    result = MmMapViewOfSection(ghSectionShared, a1, &v17, 0LL, 0LL, v16, &v19, 2, 0x400000, 2);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        15,
        4,
        3,
        15,
        (__int64)&WPP_ec7b7e6d7dea360f8b258b91fa3b2ce6_Traceguids,
        v17);
    }
    v19 = 0LL;
    v16[0] = 2101248LL;
    v8 = MmMapViewOfSection(ghSectionShared, a1, &v18, 0LL, 0LL, v16, &v19, 2, 0x400000, 2);
    if ( v8 < 0 )
    {
      MmUnmapViewOfSection(a1, v17);
      return (unsigned int)v8;
    }
    v9 = (_QWORD *)PsGetProcessWin32Process(a1);
    if ( v9 && *v9 )
    {
      v9[92] = v17;
      v9[93] = v18;
    }
    v10 = v18;
  }
  *((_QWORD *)v2 + 5) = v10;
  v11 = 31LL;
  *((_QWORD *)v2 + 1) = v10 + gSharedInfo - gpvSharedAlloc;
  *((_QWORD *)v2 + 2) = v17 + *((_QWORD *)&gSharedInfo + 1) - gpvSharedBase;
  *((_DWORD *)v2 + 6) = *((_DWORD *)&gSharedInfo + 4);
  *((_QWORD *)v2 + 4) = v10 + *((_QWORD *)&gSharedInfo + 3) - gpvSharedAlloc;
  *((_DWORD *)v2 + 136) = *((_DWORD *)&gSharedInfo + 134);
  *((_QWORD *)v2 + 69) = v10 + *((_QWORD *)&gSharedInfo + 68) - gpvSharedAlloc;
  *((_DWORD *)v2 + 140) = *((_DWORD *)&gSharedInfo + 138);
  v12 = (_QWORD *)((char *)v2 + 56);
  *((_QWORD *)v2 + 71) = v10 + *((_QWORD *)&gSharedInfo + 70) - gpvSharedAlloc;
  do
  {
    *((_DWORD *)v12 - 2) = *(_DWORD *)((char *)v12 + gSharedInfo - (_QWORD)v2 - 16);
    v13 = *(_QWORD *)((char *)v12 + gSharedInfo - (_QWORD)v2 - 8);
    if ( v13 )
      v13 = v10 + v13 - gpvSharedAlloc;
    *v12 = v13;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  result = 0LL;
  *((_DWORD *)v2 + 144) = gCallerKernelAbiVersion;
  return result;
}
