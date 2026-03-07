__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        DXGADAPTER *this,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int appended; // ebx
  _QWORD *v10; // rax
  DXGADAPTER *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-79h] BYREF
  DXGADAPTER *v14; // [rsp+28h] [rbp-71h]
  char v15; // [rsp+30h] [rbp-69h]
  _BYTE v16[16]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  DXGADAPTER *v18; // [rsp+58h] [rbp-41h]
  char v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+90h] [rbp-9h]
  DXGADAPTER *v22; // [rsp+98h] [rbp-1h]
  char v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  v14 = this;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  v20 = 0LL;
  v16[1] = 0;
  v18 = this;
  v19 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v17 = -1LL;
  }
  v24 = 0LL;
  v22 = this;
  v23 = 0;
  if ( this )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v21 = -1LL;
  }
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  appended = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_9;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 102);
    v10[5] = *((unsigned int *)this + 101);
    v10[6] = a2;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 2833) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_8:
    appended = 0;
    goto LABEL_9;
  }
  appended = DmmAppendCcdConnectedSetForAdapter(v12, (struct _UNICODE_STRING *)(a2 + 8));
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return appended;
}
