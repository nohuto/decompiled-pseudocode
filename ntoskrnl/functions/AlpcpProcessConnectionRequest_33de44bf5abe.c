__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        char a8)
{
  _QWORD *v11; // r14
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  char PreviousMode; // bl
  ULONG_PTR v19; // r13
  int v20; // edx
  unsigned int v21; // r14d
  ULONG_PTR v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rbx
  int v25; // edx
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int16 v29; // ax
  __int16 v30; // dx
  int v31; // r13d
  char *v32; // rdx
  int v33; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+78h] [rbp-90h] BYREF
  __int128 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  _QWORD v41[8]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+118h] [rbp+10h]
  unsigned int v44; // [rsp+118h] [rbp+10h]

  v11 = (_QWORD *)a1;
  memset(v41, 0, sizeof(v41));
  v34 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v33 = 0;
  v36 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v38, a2);
    }
    v14 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      v36 = *(_QWORD *)v15;
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a4;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
    v17 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
    {
      LOBYTE(v12) = 1;
      v33 = AlpcpProbeMessageAttributes(a2, a6, v12);
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a7;
      v37 = *(_QWORD *)v14;
      a7 = &v37;
    }
    v11 = (_QWORD *)a1;
  }
  else
  {
    if ( a3 )
    {
      v38 = *(_OWORD *)a3;
      v39 = *(_OWORD *)(a3 + 16);
      v40 = *(_QWORD *)(a3 + 32);
    }
    if ( a4 )
      v36 = *a4;
    v17 = (__int64)a6;
    PreviousMode = 1;
    if ( a6 )
      v33 = *a6;
  }
  result = AlpcpFormatConnectionRequest(&v34, a2, v11, a3, (unsigned __int16 *)&v38, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v19 = v34;
    v43 = *(_DWORD *)(v34 + 264);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(v34);
    v41[0] = v11;
    v41[1] = v19;
    LODWORD(v41[6]) = a2;
    v21 = AlpcpDispatchConnectionRequest((__int64)v41);
    if ( (v21 & 0x80000000) == 0 )
    {
      if ( (a2 & 0x20000) == 0 )
        return v21;
      if ( (a2 & 0x100000) == 0 )
      {
        if ( (unsigned int)Feature_2203404602__private_IsEnabledDeviceUsage() && (a2 & 0x2000000) != 0 && (a2 & 2) != 0 )
          PreviousMode = 0;
        else
          PreviousMode = KeGetCurrentThread()->PreviousMode;
      }
      v34 = 0LL;
      LOBYTE(v20) = PreviousMode;
      v23 = AlpcpReceiveSynchronousReply((unsigned int)v41, v20, (unsigned int)&v34, v33, (__int64)a7);
      v21 = v23;
      if ( v23 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v43, v23);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
        return v21;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogConnectSuccess(v43);
      v24 = v34;
      v25 = *(unsigned __int16 *)(v34 + 240);
      v26 = 24;
      if ( (a2 & 0xC0000000) != 0x80000000 )
        v26 = 40;
      v27 = (unsigned int)(v25 + v26);
      v44 = v27;
      if ( a4 )
      {
        v28 = (unsigned int)v27;
        if ( (unsigned int)v27 > v36 )
        {
          AlpcpUnlockMessage(v34);
          *a4 = v28;
          return 3221225507LL;
        }
      }
      if ( a3 )
      {
        v35 = 0;
        if ( (a2 & 0xC0000000) == 0x80000000 )
        {
          *(_WORD *)a3 = v25;
          v35 = *(unsigned __int16 *)(v24 + 240) + 24;
          *(_WORD *)(a3 + 2) = v35;
          v29 = *(_WORD *)(v24 + 246);
          if ( v29 )
            *(_WORD *)(a3 + 6) = v29 - 16;
          else
            *(_WORD *)(a3 + 6) = 0;
          v30 = *(_WORD *)(v24 + 244) | 0x1000;
          *(_WORD *)(a3 + 4) = v30;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(v24 + 248);
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(v24 + 256);
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(v24 + 264);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v24 + 272);
          *(_DWORD *)(a3 + 20) = *(_DWORD *)(v24 + 272);
          v31 = a1;
          if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
            *(_WORD *)(a3 + 4) = v30 & 0xC00F;
          v32 = (char *)(a3 + 24);
        }
        else
        {
          *(_OWORD *)a3 = *(_OWORD *)(v34 + 240);
          *(_OWORD *)(a3 + 16) = *(_OWORD *)(v24 + 256);
          *(_QWORD *)(a3 + 32) = *(_QWORD *)(v24 + 272);
          v31 = a1;
          if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
            *(_WORD *)(a3 + 4) = *(_WORD *)(v24 + 244) & 0xC00F;
          v35 = *(unsigned __int16 *)(v24 + 242);
          v32 = (char *)(a3 + 40);
        }
        if ( *(_QWORD *)(v24 + 176) )
          AlpcpGetDataFromUserVaSafe(v24, v32);
        else
          AlpcpReadMessageData(v24, v32);
        v27 = v44;
      }
      else
      {
        v31 = a1;
      }
      if ( a4 )
        *a4 = v27;
      if ( v17 )
        AlpcpExposeAttributes(v31, a2, v24, v33, v17);
      v22 = v24;
    }
    else
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v43, v21);
      v22 = v19;
    }
    AlpcpUnlockMessage(v22);
    return v21;
  }
  return result;
}
