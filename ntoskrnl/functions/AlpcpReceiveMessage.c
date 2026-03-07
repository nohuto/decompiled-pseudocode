__int64 __fastcall AlpcpReceiveMessage(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int *a4, __int64 *a5)
{
  __int64 *v8; // r10
  struct _KTHREAD *CurrentThread; // r9
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r14d
  ULONG v17; // r8d
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  ULONG v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx
  ULONG v30; // eax
  ULONG v31; // ecx
  __int64 v32; // rcx
  int v33; // r8d
  unsigned int v34; // eax
  unsigned int v35; // r14d
  ULONG_PTR v36; // rdi
  __int16 v37; // ax
  unsigned __int16 v38; // ax
  int v39; // r13d
  char *v40; // rdx
  __int16 v41; // ax
  __int16 v42; // cx
  unsigned __int8 PreviousMode; // [rsp+30h] [rbp-A8h]
  int v45; // [rsp+34h] [rbp-A4h]
  int v46; // [rsp+38h] [rbp-A0h]
  int v47; // [rsp+3Ch] [rbp-9Ch]
  int v48; // [rsp+40h] [rbp-98h]
  int v49; // [rsp+50h] [rbp-88h]
  unsigned __int64 v50; // [rsp+58h] [rbp-80h]
  __int64 v51; // [rsp+60h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-70h] BYREF
  int v53; // [rsp+70h] [rbp-68h]
  unsigned int v54; // [rsp+74h] [rbp-64h]
  __int64 v55; // [rsp+78h] [rbp-60h] BYREF
  struct _KTHREAD *v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  _OWORD v58[2]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+E0h] [rbp+8h]

  v8 = (__int64 *)a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v56 = CurrentThread;
  v10 = *(_DWORD *)(a1 + 48);
  v49 = v10;
  v51 = *(_QWORD *)a1;
  v57 = *(_QWORD *)a1;
  PreviousMode = CurrentThread->PreviousMode;
  v11 = PreviousMode;
  v55 = 0LL;
  v50 = -1LL;
  v48 = 0;
  v47 = 0;
  if ( PreviousMode )
  {
    v12 = (__int64)a5;
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v55 = *(_QWORD *)v12;
      a5 = &v55;
    }
    v13 = v10 & 0xC0000000;
    if ( (v10 & 0xC0000000) == 0x80000000 )
    {
      if ( (a2 & 3) != 0 )
        goto LABEL_62;
      v32 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v32 = a2;
      *(_BYTE *)v32 = *(_BYTE *)v32;
      *(_BYTE *)(v32 + 23) = *(_BYTE *)(v32 + 23);
    }
    else
    {
      v14 = a2;
      if ( (a2 & 3) != 0 )
        goto LABEL_62;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 39) = *(_BYTE *)(v14 + 39);
    }
    v53 = v10 & 0x1000000;
    if ( (v10 & 0x1000000) != 0 )
    {
      if ( v13 == 0x80000000 )
      {
        v48 = *(_DWORD *)(a2 + 16);
        v47 = *(_DWORD *)(a2 + 20);
      }
      else
      {
        v48 = *(_DWORD *)(a2 + 24);
        v47 = *(_DWORD *)(a2 + 32);
      }
    }
    if ( !a4 )
    {
      v27 = 0;
      v45 = 0;
      v46 = 0;
      goto LABEL_37;
    }
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v16 = *(_DWORD *)v15;
    v45 = *(_DWORD *)v15;
    v17 = 8;
    if ( v13 == 0x80000000 )
    {
      if ( v16 < 0 )
        v17 = 20;
      v30 = v17 + 16;
      if ( (v16 & 0x40000000) == 0 )
        v30 = v17;
      v31 = v30 + 20;
      if ( (v16 & 0x20000000) == 0 )
        v31 = v30;
      v22 = v31 + 16;
      if ( (v16 & 0x10000000) == 0 )
        v22 = v31;
      v23 = (v16 & 0x8000000) == 0;
      v24 = v22 + 24;
      v17 = 4;
    }
    else
    {
      v18 = 8;
      if ( v16 < 0 )
        v18 = 32;
      v19 = v18 + 32;
      if ( (v16 & 0x40000000) == 0 )
        v19 = v18;
      v20 = v19 + 32;
      if ( (v16 & 0x20000000) == 0 )
        v20 = v19;
      v21 = v20 + 24;
      if ( (v16 & 0x10000000) == 0 )
        v21 = v20;
      v22 = v21 + 24;
      if ( (v16 & 0x8000000) == 0 )
        v22 = v21;
      v23 = (v16 & 0x4000000) == 0;
      v24 = v22 + 8;
    }
    if ( v23 )
      v24 = v22;
    v25 = v24 + 8;
    if ( (v16 & 0x2000000) == 0 )
      v25 = v24;
    v26 = (__int64)a4;
    if ( (unsigned __int64)(v25 - 1) > 0xFFE )
    {
      ProbeForWrite(a4, (unsigned int)v25, v17);
      v8 = (__int64 *)a1;
LABEL_36:
      v46 = v16;
      v27 = v45;
LABEL_37:
      if ( a3 )
      {
        v28 = (__int64)a3;
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v28 = 0x7FFFFFFF0000LL;
        v50 = *(_QWORD *)v28;
        v29 = (__int64)a3;
        if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
          v29 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v29 = *(_QWORD *)v29;
        v27 = v46;
        v45 = v46;
      }
      v33 = v53;
      v11 = PreviousMode;
      goto LABEL_63;
    }
    if ( ((v17 - 1) & (unsigned int)a4) == 0 )
    {
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v26 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v26 = *(_BYTE *)v26;
      *(_BYTE *)(v26 + (unsigned int)v25 - 1) = *(_BYTE *)(v26 + (unsigned int)v25 - 1);
      goto LABEL_36;
    }
LABEL_62:
    ExRaiseDatatypeMisalignment();
  }
  v33 = v10 & 0x1000000;
  if ( v33 )
  {
    v48 = *(_DWORD *)(a2 + 24);
    v47 = *(_DWORD *)(a2 + 32);
  }
  if ( a4 )
    v27 = *a4;
  else
    v27 = 0;
  v45 = v27;
  if ( a3 )
    v50 = *a3;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 )
    LOBYTE(v11) = 1;
LABEL_63:
  if ( v33 )
    v34 = AlpcpReceiveDirectMessagePort(v8, v48, v47, &BugCheckParameter2, v27);
  else
    v34 = AlpcpReceiveMessagePort((_DWORD)v8, v11, (_DWORD)a5, (unsigned int)&BugCheckParameter2, v27);
  v35 = v34;
  if ( !v34 )
  {
    v36 = BugCheckParameter2;
    v37 = 24;
    if ( (v49 & 0xC0000000) != 0x80000000 )
      v37 = 40;
    v38 = *(_WORD *)(BugCheckParameter2 + 240) + v37;
    if ( a3 && (v60 = v38, v38 > v50) )
    {
      memset(v58, 0, sizeof(v58));
      v35 = AlpcpReturnMessageOnInsufficientBuffer(v51, (_QWORD *)BugCheckParameter2, v58);
      v54 = v35;
      if ( v35 == -1073741789 )
      {
        *a3 = v60;
        AlpcpExposeCapturedContextAttribute(v49, v58, v45, (__int64)a4);
      }
    }
    else
    {
      *(_QWORD *)(BugCheckParameter2 + 200) = v56;
      if ( (v49 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a2 = *(_WORD *)(v36 + 240);
        *(_WORD *)(a2 + 2) = *(_WORD *)(v36 + 240) + 24;
        v41 = *(_WORD *)(v36 + 246);
        if ( v41 )
          *(_WORD *)(a2 + 6) = v41 - 16;
        else
          *(_WORD *)(a2 + 6) = 0;
        v42 = *(_WORD *)(v36 + 244) | 0x1000;
        *(_WORD *)(a2 + 4) = v42;
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(v36 + 248);
        *(_DWORD *)(a2 + 12) = *(_DWORD *)(v36 + 256);
        *(_DWORD *)(a2 + 16) = *(_DWORD *)(v36 + 264);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 272);
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v36 + 272);
        v39 = v51;
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = v42 & 0xC00F;
        v40 = (char *)(a2 + 24);
      }
      else
      {
        *(_OWORD *)a2 = *(_OWORD *)(v36 + 240);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v36 + 256);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v36 + 272);
        v39 = v51;
        if ( (*(_DWORD *)(v51 + 256) & 0x1000) != 0 )
          *(_WORD *)(a2 + 4) = *(_WORD *)(v36 + 244) & 0xC00F;
        v40 = (char *)(a2 + 40);
      }
      if ( *(_QWORD *)(v36 + 176) )
        AlpcpGetDataFromUserVaSafe(v36, v40);
      else
        AlpcpReadMessageData(v36, v40);
      if ( a4 )
        AlpcpExposeAttributes(v39, v49, v36, v45, (__int64)a4);
    }
    if ( v35 != -1073741789 && *(_QWORD *)(v36 + 64) == v51 )
    {
      *(_QWORD *)(v36 + 64) = 0LL;
      *(_QWORD *)(v36 + 56) = 0LL;
    }
    if ( ((v35 + 0x80000000) & 0x80000000) != 0 || v35 == -1073741789 )
    {
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v36);
      AlpcpUnlockBlob(v36);
    }
    else
    {
      *(_QWORD *)(v36 + 200) = 0LL;
      AlpcpCancelMessage(v51, v36, 0x10000);
    }
  }
  return v35;
}
