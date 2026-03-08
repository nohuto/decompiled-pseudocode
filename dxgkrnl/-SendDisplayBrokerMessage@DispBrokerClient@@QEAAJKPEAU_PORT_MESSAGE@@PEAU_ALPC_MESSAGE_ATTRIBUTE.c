/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01D5B30
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D56C8 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01DCA60 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C00021A8 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002D10 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C0016524 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01D5CF8 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall DispBrokerClient::SendDisplayBrokerMessage(
        DispBrokerClient *this,
        unsigned int a2,
        struct _PORT_MESSAGE *a3,
        struct _ALPC_MESSAGE_ATTRIBUTES *a4,
        struct _PORT_MESSAGE *a5,
        unsigned __int64 *a6,
        struct _ALPC_MESSAGE_ATTRIBUTES *a7,
        union _LARGE_INTEGER *a8)
{
  int v10; // r8d
  int v11; // esi
  unsigned __int64 TotalLength; // rdx
  struct _PORT_MESSAGE *v13; // r15
  struct _ALPC_MESSAGE_ATTRIBUTES *v14; // r13
  unsigned __int64 *v15; // rdi
  union _LARGE_INTEGER *v16; // r12
  int v17; // eax
  unsigned int v18; // edi
  unsigned int *v19; // r14
  __int64 v21; // rbx
  const wchar_t *v22; // r9
  __int64 v23; // rbx
  const wchar_t *v24; // r9
  unsigned int *v25; // rbx
  unsigned int **v26; // r15
  unsigned int **v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r8d
  struct _PORT_MESSAGE *v31; // [rsp+50h] [rbp-71h] BYREF
  DispBrokerClientHandle *v32; // [rsp+58h] [rbp-69h] BYREF
  DispBrokerClientHandle *v33[2]; // [rsp+60h] [rbp-61h] BYREF
  __int128 v34; // [rsp+70h] [rbp-51h] BYREF
  DispBrokerClient *v35; // [rsp+80h] [rbp-41h]
  struct _PORT_MESSAGE **v36; // [rsp+88h] [rbp-39h]
  unsigned int *v37; // [rsp+90h] [rbp-31h] BYREF
  unsigned int *v38; // [rsp+98h] [rbp-29h]
  unsigned int **v39; // [rsp+A0h] [rbp-21h]
  __int64 v40; // [rsp+A8h] [rbp-19h]
  char v41; // [rsp+B0h] [rbp-11h]
  int v42; // [rsp+110h] [rbp+4Fh] BYREF
  unsigned int v43; // [rsp+118h] [rbp+57h]
  int v44; // [rsp+120h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v45; // [rsp+128h] [rbp+67h]

  v45 = a4;
  v43 = a2;
  v35 = this;
  *(_QWORD *)&v34 = &v42;
  v42 = -1073741811;
  *((_QWORD *)&v34 + 1) = &v44;
  v44 = 0;
  v36 = &v31;
  v31 = 0LL;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)&v37, &v34);
  v11 = -1;
  if ( !a3 )
  {
    v21 = 425LL;
    WdLogSingleEntry1(2LL, 425LL);
    v22 = L"Caller did not specified the message to be sent to display broker.";
LABEL_26:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v21, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  TotalLength = a3->u1.s1.TotalLength;
  if ( TotalLength < 0x40 )
  {
    WdLogSingleEntry1(2LL, TotalLength);
    v21 = a3->u1.s1.TotalLength;
    v22 = L"The message is smaller than AlpcMessage (size = 0x%I64x).";
    goto LABEL_26;
  }
  v13 = a5;
  v14 = a7;
  v15 = a6;
  v31 = a3;
  if ( a5 )
  {
    if ( a6 )
      goto LABEL_6;
    goto LABEL_25;
  }
  if ( a6 || a7 )
  {
LABEL_25:
    v21 = 444LL;
    WdLogSingleEntry1(2LL, 444LL);
    v22 = L"The parameters of the receiving message are not consistent.";
    goto LABEL_26;
  }
LABEL_6:
  if ( !*((_BYTE *)this + 8) && a3[1].u1.Length != 1 )
  {
    v18 = -1073741637;
    goto LABEL_15;
  }
  v16 = a8;
  if ( (v10 & 0x20000) == 0 )
  {
    if ( a5 )
    {
      v23 = 466LL;
      WdLogSingleEntry1(2LL, 466LL);
      v24 = L"Receiving message does not mean anything when senting async message.";
    }
    else
    {
      if ( !a8 )
        goto LABEL_11;
      v23 = 475LL;
      WdLogSingleEntry1(2LL, 475LL);
      v24 = L"Timeout does not mean anything when senting async message.";
    }
    v11 = -1;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v23, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
    v18 = v42;
    goto LABEL_15;
  }
LABEL_11:
  DispBrokerClient::ReferencePort(this, &v32);
  v11 = -1;
  if ( !v32 )
  {
    v42 = -1073741772;
    WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
LABEL_19:
    v18 = v42;
    goto LABEL_14;
  }
  v44 |= 2u;
  v17 = ZwAlpcSendWaitReceivePort(*((_QWORD *)v32 + 1), v43, a3, v45, v13, v15, v14, v16);
  v18 = v17;
  v42 = v17;
  if ( v17 == 258 )
  {
    v44 |= 4u;
    v42 = -1073741505;
    WdLogSingleEntry3(2LL, **(unsigned int **)this, -1073741505LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Timeout to send ALPC message to display broker in session 0x%I64x, returning 0x%I64x.",
      **(unsigned int **)this,
      v42,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(2LL, **(unsigned int **)this, v17, 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to send ALPC message to display broker in session 0x%I64x (Status = 0x%I64x).",
      **(unsigned int **)this,
      v42,
      1LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
LABEL_14:
  DispBrokerClientReference::Assign(&v32, 0LL);
LABEL_15:
  if ( v41 )
  {
    v19 = v37;
    if ( (int)(*v37 + 0x80000000) >= 0 && *v37 != -1073741772 )
    {
      v25 = v38;
      v26 = v39;
      v27 = v39;
      *v38 |= 1u;
      DispBrokerClient::ReferencePort(v27, v33);
      v28 = *v25;
      v29 = v40;
      v32 = 0LL;
      v30 = (v33[0] != 0LL ? 8 : 0) | v28 & 0xFFFFFFF7;
      *v25 = v30;
      if ( *(_QWORD *)v29 )
        v11 = *(_DWORD *)(*(_QWORD *)v29 + 40LL);
      DxgkLogCodePointPacketForSession(0x69u, **v26, *v19, v11, v30, (__int64)v32);
      DispBrokerClientReference::Assign(v33, 0LL);
    }
  }
  return v18;
}
