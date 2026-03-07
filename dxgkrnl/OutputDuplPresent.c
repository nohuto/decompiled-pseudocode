__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  D3DKMT_HANDLE hIndirectContext; // edx
  __int64 v7; // rcx
  struct DXGCONTEXT *v8; // rbx
  D3DKMT_HANDLE v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ebx
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  DXGCONTEXTBYHANDLE *v15; // rcx
  D3DKMT_HANDLE hContext; // edx
  __int64 v17; // rcx
  struct DXGDEVICE **v18; // rsi
  D3DKMT_HANDLE v19; // ebx
  __int64 CurrentProcess; // rax
  __int64 v21; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v23; // rbx
  _QWORD *Pool2; // rax
  ULONG v25; // ebx
  __int64 v26; // r15
  D3DKMT_HANDLE v27; // eax
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r9
  struct DXGADAPTER *v34; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-69h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h]
  _BYTE v38[32]; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+98h] [rbp-31h]
  _BYTE v40[16]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v41[24]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v42[6]; // [rsp+C8h] [rbp-1h] BYREF
  char v43; // [rsp+F8h] [rbp+2Fh]
  struct DXGCONTEXT *v44; // [rsp+130h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v34 = 0LL;
  if ( (*(_BYTE *)&Value & 8) == 0 )
  {
LABEL_8:
    hContext = a1->hContext;
    v44 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40, hContext, a2, &v44, 0, 1);
    v18 = (struct DXGDEVICE **)v44;
    if ( !v44 )
    {
      v19 = a1->hContext;
      CurrentProcess = PsGetCurrentProcess(v17);
      v21 = v19;
      v12 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v21);
LABEL_46:
      v15 = (DXGCONTEXTBYHANDLE *)v40;
      goto LABEL_47;
    }
    if ( !v34 )
      DXGADAPTER_REFERENCE::Assign(&v34, *(struct DXGADAPTER **)(*((_QWORD *)v44 + 2) + 1880LL));
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v18[2]);
    BroadcastContextCount = a1->BroadcastContextCount;
    if ( BroadcastContextCount > 0x40 )
    {
      v12 = -1073741811;
      WdLogSingleEntry2(3LL, v18, -1073741811LL);
LABEL_44:
      if ( v36[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      goto LABEL_46;
    }
    v23 = BroadcastContextCount + 1;
    P = 0LL;
    v39 = 0;
    if ( (unsigned int)v23 <= 4 )
    {
      Pool2 = v38;
      P = v38;
      if ( (_DWORD)v23 )
      {
        memset(v38, 0, 8LL * (unsigned int)v23);
        Pool2 = P;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 < 8 )
      {
LABEL_20:
        WdLogSingleEntry1(3LL, 2714LL);
        v12 = -1073741801;
LABEL_40:
        if ( P != v38 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v39 = 0;
        goto LABEL_44;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v23, 1265072196LL);
      P = Pool2;
    }
    v39 = v23;
    if ( !Pool2 )
      goto LABEL_20;
    *Pool2 = v18;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, a2);
    v25 = 0;
    if ( !a1->BroadcastContextCount )
    {
LABEL_32:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v42,
        P,
        v39,
        v32,
        1);
      if ( v43 )
      {
        if ( v42[0] )
        {
          WdLogSingleEntry1(3LL, 2768LL);
          v12 = -1073741811;
        }
        else
        {
          WdLogSingleEntry1(3LL, 2763LL);
          v12 = -1073741801;
        }
      }
      else
      {
        v12 = OutputDuplPresentInternal(v34, (struct DXGCONTEXT *)v18, a1, (struct DXGCONTEXT **)P);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v42);
      goto LABEL_40;
    }
    while ( 1 )
    {
      v26 = v25;
      v27 = (a1->BroadcastContext[v25] >> 6) & 0xFFFFFF;
      if ( v27 < *((_DWORD *)a2 + 74) )
      {
        v28 = *((_QWORD *)a2 + 35);
        if ( ((a1->BroadcastContext[v25] >> 25) & 0x60) == (*(_BYTE *)(v28 + 16LL * v27 + 8) & 0x60)
          && (*(_DWORD *)(v28 + 16LL * v27 + 8) & 0x2000) == 0 )
        {
          v29 = *(_DWORD *)(v28 + 16LL * v27 + 8) & 0x1F;
          if ( v29 )
          {
            if ( v29 == 7 )
            {
              v30 = *(_QWORD *)(v28 + 16LL * v27);
              goto LABEL_29;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v30 = 0LL;
LABEL_29:
      *((_QWORD *)P + ++v25) = v30;
      v31 = *((_QWORD *)P + v25);
      if ( !v31 || *(struct DXGDEVICE **)(v31 + 16) != v18[2] )
      {
        v12 = -1073741811;
        WdLogSingleEntry4(2LL, v18, a1->BroadcastContext[v26], v26, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v18,
          a1->BroadcastContext[v26],
          v26,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
        goto LABEL_40;
      }
      if ( v25 >= a1->BroadcastContextCount )
        goto LABEL_32;
    }
  }
  hIndirectContext = a1->hIndirectContext;
  v44 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36, hIndirectContext, a2, &v44, 0, 1);
  v8 = v44;
  if ( v44 )
  {
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v34);
    v14 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v8 + 2), a1->VidPnSourceId, v13, &v35);
    if ( v14 < 0 )
    {
      v12 = v14;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36);
    goto LABEL_8;
  }
  v9 = a1->hIndirectContext;
  v10 = PsGetCurrentProcess(v7);
  v11 = v9;
  v12 = -1073741811;
  WdLogSingleEntry3(3LL, -1073741811LL, v10, v11);
LABEL_6:
  v15 = (DXGCONTEXTBYHANDLE *)v36;
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v15);
  DXGADAPTER_REFERENCE::Assign(&v34, 0LL);
  return v12;
}
