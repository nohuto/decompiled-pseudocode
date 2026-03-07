__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  __int64 v4; // rcx
  char v6; // r12
  unsigned int v7; // r13d
  int AdapterInfo; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // rax
  _DWORD *v16; // rcx
  __int128 v17; // xmm1
  SIZE_T v18; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  __int128 v25; // [rsp+60h] [rbp-29h]
  __int64 v26; // [rsp+70h] [rbp-19h]
  _DXGKARG_QUERYADAPTERINFO v27; // [rsp+78h] [rbp-11h] BYREF
  unsigned int DriverVersion; // [rsp+F0h] [rbp+67h]
  int v29; // [rsp+F8h] [rbp+6Fh] BYREF

  v29 = a2;
  *((_DWORD *)&v27.Type + 1) = 0;
  v4 = *((_QWORD *)this + 27);
  *(&v27.InputDataSize + 1) = 0;
  *(_QWORD *)&v27.Flags.0 = 0LL;
  HIDWORD(v27.hKmdProcessHandle) = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27.InputDataSize = 4;
  DriverVersion = DpiGetDriverVersion(v4);
  v24 = 0uLL;
  v27.pInputData = &v29;
  v6 = 0;
  v27.pOutputData = &v24;
  v7 = 0;
  v27.Type = DXGKQAITYPE_QUERYSEGMENT4;
  v27.OutputDataSize = 40;
  AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                  this,
                  (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v27);
  v9 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    WdLogSingleEntry1(3LL, AdapterInfo);
    return v9;
  }
  v10 = (unsigned int)v24;
  if ( (unsigned int)v24 > 0x20 )
  {
    WdLogSingleEntry1(1LL, 76LL);
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  v11 = 104LL * (unsigned int)v24;
  if ( !is_mul_ok((unsigned int)v24, 0x68uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, 0x31326956u, 256LL);
  v13 = (_DWORD *)v12;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C00767D8);
    WdLogSingleEntry1(6LL, v10);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    return 3221225495LL;
  }
  *((_QWORD *)&v24 + 1) = v12;
  v26 = 104LL;
  v14 = DXGADAPTER::DdiQueryAdapterInfo(this, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v27);
  v9 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(1LL, v14);
    DxgkLogInternalTriageEvent(v22, 0x40000LL);
    goto LABEL_25;
  }
  v15 = 0LL;
  if ( !(_DWORD)v10 )
  {
LABEL_13:
    v17 = v25;
    *(_OWORD *)&a3->NbSegment = v24;
    v18 = v26;
    *(_OWORD *)&a3->PagingBufferSegmentId = v17;
    a3->SegmentDescriptorStride = v18;
    return v9;
  }
  v16 = v13 + 23;
  while ( 1 )
  {
    if ( DriverVersion < 0x7005 )
    {
      *v16 = 0;
      goto LABEL_12;
    }
    if ( *v16 > 1u )
      break;
    if ( *v16 )
    {
      if ( v6 )
      {
        WdLogSingleEntry2(1LL, v7, (unsigned int)v15);
        goto LABEL_24;
      }
      v6 = 1;
      v7 = v15;
    }
LABEL_12:
    v15 = (unsigned int)(v15 + 1);
    v16 += 26;
    if ( (unsigned int)v15 >= (unsigned int)v10 )
      goto LABEL_13;
  }
  WdLogSingleEntry1(1LL, (unsigned int)v13[26 * v15 + 23]);
LABEL_24:
  DxgkLogInternalTriageEvent(v23, 0x40000LL);
  v9 = -1073741823;
LABEL_25:
  operator delete(v13);
  return v9;
}
