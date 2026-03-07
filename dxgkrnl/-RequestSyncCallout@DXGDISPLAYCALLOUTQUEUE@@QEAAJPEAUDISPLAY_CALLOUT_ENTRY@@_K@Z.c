__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(DXGDISPLAYCALLOUTQUEUE *this, char *P, __int64 a3)
{
  char **v6; // rax
  char *v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rsi
  char *v11; // rax
  char *v12; // rcx
  char **v13; // rdx
  _BYTE v15[24]; // [rsp+50h] [rbp-18h] BYREF

  P[20] = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v6 = (char **)*((_QWORD *)this + 7);
  v7 = (char *)this + 48;
  if ( *v6 != v7 )
    goto LABEL_15;
  *(_QWORD *)P = v7;
  *((_QWORD *)P + 1) = v6;
  *v6 = P;
  *((_QWORD *)v7 + 1) = P;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  v9 = DpiGdiSyncDisplayCallout(a3, 1, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    LODWORD(v10) = *((_DWORD *)P + 14);
    goto LABEL_12;
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v11 = *(char **)v7;
  if ( *(char **)v7 != v7 )
  {
    while ( 1 )
    {
      v12 = *(char **)v11;
      if ( v11 == P )
        break;
      v11 = *(char **)v11;
      if ( v12 == v7 )
        goto LABEL_11;
    }
    if ( *((char **)v12 + 1) == v11 )
    {
      v13 = (char **)*((_QWORD *)v11 + 1);
      if ( *v13 == v11 )
      {
        *v13 = v12;
        *((_QWORD *)v12 + 1) = v13;
        goto LABEL_11;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
LABEL_11:
  WdLogSingleEntry1(2LL, v10);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed request a synchronous Display Callout (Status == 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_12:
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)P);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v10;
}
