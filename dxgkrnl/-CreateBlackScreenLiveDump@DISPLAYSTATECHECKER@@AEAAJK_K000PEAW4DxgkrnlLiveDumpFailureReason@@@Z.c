__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DxgkrnlLiveDumpFailureReason *a7)
{
  enum DxgkrnlLiveDumpFailureReason *v7; // r15
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  DXGDIAGNOSTICS *v12; // r13
  DXGDIAGNOSTICS *v13; // rax
  int v14; // r12d
  int v15; // ebp
  int v16; // ebx
  unsigned int DriverWhiteboxDiagDataSize; // eax
  int v18; // r14d
  __int64 v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rbp
  _DWORD *v22; // rbx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r8
  DISPLAYSTATECHECKER *v26; // rcx
  _DWORD *v27; // r14
  unsigned int v28; // r13d
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v30; // rdx
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  unsigned int v33; // ebp
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // edx
  const wchar_t *v37; // r9
  int v38; // esi
  unsigned int v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+54h] [rbp-54h]
  DXGDIAGNOSTICS *v41; // [rsp+58h] [rbp-50h]
  unsigned int v43; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+18h]
  __int64 v45; // [rsp+C8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v12 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 116);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 117);
  v41 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v15 = *((_DWORD *)v13 + 4);
  v16 = *((_DWORD *)this + 3522) << 13;
  LODWORD(a7) = *((_DWORD *)v12 + 4);
  v14 = (int)a7;
  LODWORD(v45) = v15;
  LODWORD(a6) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  DriverWhiteboxDiagDataSize = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v18 = *((_DWORD *)this + 3522);
  v39 = DriverWhiteboxDiagDataSize;
  v19 = (unsigned int)(8 * v18 + 48);
  v40 = v16 + a6 + v19 + DriverWhiteboxDiagDataSize;
  LODWORD(a5) = v14 + v15 + v40;
  v20 = (a5 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v20 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v21 = v20;
  v22 = (_DWORD *)operator new[](v20, 0x4B677844u, 256LL);
  if ( v22 )
  {
    v23 = (unsigned int)a7;
    v22[1] = 0;
    v24 = (unsigned int)a5;
    *v22 = v18 + 5;
    v22[2] = v19;
    v22[3] = 160;
    v43 = v23;
    if ( v19 + v23 >= v23 && v19 + v23 <= v24 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                v12,
                                (unsigned __int8 *)v22 + (unsigned int)v19,
                                &v43,
                                0xFFFFFFFF);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v19 = v43 + (unsigned int)v19;
        LODWORD(a7) = v43;
      }
      else
      {
        *(_DWORD *)v7 = 32;
      }
    }
    v25 = (unsigned int)v45;
    v22[4] = v19;
    v22[5] = 176;
    v43 = v25;
    if ( v19 + v25 >= v25 && v19 + v25 <= v24 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                v41,
                                (unsigned __int8 *)v22 + (unsigned int)v19,
                                &v43,
                                0xFFFFFFFF);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v19 = v43 + (unsigned int)v19;
        LODWORD(v45) = v43;
      }
      else
      {
        *(_DWORD *)v7 = 64;
      }
    }
    v26 = this;
    v27 = v22 + 6;
    v28 = 0;
    if ( *((_DWORD *)this + 3522) )
    {
      do
      {
        *v27 = v19;
        v27[1] = 5;
        DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v28);
        if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
        {
          v30 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
          if ( v30 )
          {
            memmove((char *)v22 + (unsigned int)v19, v30, 0x2000uLL);
            v27 += 2;
            v19 = (unsigned int)(v19 + 0x2000);
          }
        }
        ++v28;
      }
      while ( v28 < *((_DWORD *)this + 3522) );
      v26 = this;
    }
    v31 = (unsigned int)a6;
    *v27 = v19;
    v27[1] = 194;
    if ( v19 + v31 >= v31 && v19 + v31 <= v24 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                                v26,
                                (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v22 + v19),
                                v31);
      if ( BlackScreenDiagPacket >= 0 )
        v19 = (unsigned int)(v31 + v19);
      else
        *(_DWORD *)v7 = 1024;
    }
    v27[2] = v19;
    v27[3] = 208;
    if ( v19 + (unsigned __int64)v39 >= v39 && v19 + (unsigned __int64)v39 <= v24 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v22 + (unsigned int)v19),
                                v39);
      if ( BlackScreenDiagPacket >= 0 )
        LODWORD(v19) = v39 + v19;
      else
        *(_DWORD *)v7 = 2048;
    }
    v32 = v44;
    v33 = (_DWORD)a7 + v40 + v45;
    v27[4] = v19;
    v27[5] = 0;
    v34 = WdDbgReportCreate(0LL, 424LL, v32, 0LL, 0LL, 0LL, 0);
    v35 = v34;
    if ( v34 )
    {
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v34, v22, v33) )
      {
        WdLogSingleEntry1(2LL, 1039LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          1039LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)v7 = 256;
        BlackScreenDiagPacket = -1073741823;
      }
      WdDbgReportComplete(v35);
      goto LABEL_45;
    }
    v21 = 1032LL;
    WdLogSingleEntry1(2LL, 1032LL);
    v36 = 0x40000;
    v37 = L"WdDbgReportCreate failed";
    BlackScreenDiagPacket = -1073741823;
    v38 = 128;
  }
  else
  {
    WdLogSingleEntry1(6LL, v21);
    v36 = 262145;
    v37 = L"Out of memory allocating black screen live dump data (size 0x%I64x)";
    BlackScreenDiagPacket = -1073741801;
    v38 = 16;
  }
  DxgkLogInternalTriageEvent(0LL, v36, -1, (__int64)v37, v21, 0LL, 0LL, 0LL, 0LL);
  *(_DWORD *)v7 = v38;
  if ( v22 )
LABEL_45:
    operator delete(v22);
  return (unsigned int)BlackScreenDiagPacket;
}
