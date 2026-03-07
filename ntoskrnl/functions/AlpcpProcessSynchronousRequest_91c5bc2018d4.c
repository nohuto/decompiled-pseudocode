__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *Address,
        __int64 *a8,
        unsigned __int8 a9)
{
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // rax
  ULONG v19; // r9d
  ULONG v20; // eax
  ULONG v21; // ecx
  ULONG v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  void **v30; // r15
  void *v31; // rsi
  int v33; // eax
  int PreviousMode; // edx
  unsigned int v35; // r13d
  ULONG_PTR v36; // rbx
  int v37; // edx
  int v38; // eax
  unsigned __int64 v39; // rax
  __int16 v40; // ax
  __int16 v41; // cx
  char *v42; // rdx
  void *v43; // rcx
  __int64 v44; // rdi
  size_t v45; // rdi
  size_t v46; // rax
  const void *v47; // rdx
  size_t v48; // r8
  signed __int64 v49; // rax
  int v50; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v53; // [rsp+50h] [rbp-C8h]
  __int64 v54; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-B8h]
  __int64 v56; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-A8h]
  _DWORD *v58; // [rsp+78h] [rbp-A0h]
  _QWORD v59[2]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v60; // [rsp+90h] [rbp-88h]
  __int128 v61; // [rsp+A0h] [rbp-78h]
  int v62; // [rsp+B0h] [rbp-68h]
  __int64 v63; // [rsp+B4h] [rbp-64h]
  int v64; // [rsp+BCh] [rbp-5Ch]
  _OWORD v65[5]; // [rsp+C0h] [rbp-58h] BYREF

  v10 = (__int64)a8;
  v59[1] = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v63 = 0LL;
  v64 = 0;
  v56 = 0LL;
  v11 = 0;
  v50 = 0;
  v53 = -1LL;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v56 = *(_QWORD *)v13;
      a8 = &v56;
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v14 = a5;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v53 = *(_QWORD *)v16;
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    if ( Address )
    {
      v18 = (int *)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v18 = Address;
      v11 = *v18;
      v19 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v11 < 0 )
          v19 = 20;
        v20 = v19 + 16;
        if ( (v11 & 0x40000000) == 0 )
          v20 = v19;
        v21 = v20 + 20;
        if ( (v11 & 0x20000000) == 0 )
          v21 = v20;
        v22 = v21 + 16;
        if ( (v11 & 0x10000000) == 0 )
          v22 = v21;
        v23 = (v11 & 0x8000000) == 0;
        v24 = v22 + 24;
        v19 = 4;
      }
      else
      {
        v25 = 8;
        if ( v11 < 0 )
          v25 = 32;
        v26 = v25 + 32;
        if ( (v11 & 0x40000000) == 0 )
          v26 = v25;
        v27 = v26 + 32;
        if ( (v11 & 0x20000000) == 0 )
          v27 = v26;
        v28 = v27 + 24;
        if ( (v11 & 0x10000000) == 0 )
          v28 = v27;
        v22 = v28 + 24;
        if ( (v11 & 0x8000000) == 0 )
          v22 = v28;
        v23 = (v11 & 0x4000000) == 0;
        v24 = v22 + 8;
      }
      if ( v23 )
        v24 = v22;
      v29 = v24 + 8;
      if ( (v11 & 0x2000000) == 0 )
        v29 = v24;
      if ( (unsigned __int64)(v29 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v29, v19);
        v50 = v11;
      }
      else
      {
        if ( ((v19 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v12 = (__int64)Address;
        *(_BYTE *)v12 = *(_BYTE *)v12;
        *(_BYTE *)(v12 + (unsigned int)v29 - 1) = *(_BYTE *)(v12 + (unsigned int)v29 - 1);
        v50 = v11;
      }
    }
    else
    {
      v11 = 0;
    }
    v10 = (__int64)a8;
  }
  else
  {
    if ( a6 )
      v53 = *a6;
    if ( Address )
    {
      v11 = *Address;
      v50 = *Address;
    }
  }
  v58 = (_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v31 = (void *)a1;
    v54 = a1;
    goto LABEL_71;
  }
  v30 = *(void ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v30 - 2), 0LL);
  v31 = *v30;
  v54 = (__int64)v31;
  if ( v31 && ObReferenceObjectSafe((__int64)v31) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v30 - 2);
    KeAbPostRelease((ULONG_PTR)(v30 - 2));
    v10 = (__int64)a8;
    v11 = v50;
LABEL_71:
    v59[0] = a1;
    v62 = a2;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v33 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v59, a3, a9);
    else
      v33 = AlpcpSendMessage((__int64)v59, (__m256i *)a3, a4, a9);
    v35 = v33;
    if ( v33 < 0 )
      goto LABEL_119;
    if ( (a2 & 0x100000) != 0 )
    {
      LOBYTE(PreviousMode) = 1;
    }
    else
    {
      PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
      v10 = (__int64)a8;
      v11 = v50;
    }
    BugCheckParameter2 = 0LL;
    v59[0] = v31;
    v35 = AlpcpReceiveSynchronousReply((unsigned int)v59, PreviousMode, (unsigned int)&BugCheckParameter2, v11, v10);
    if ( v35 )
      goto LABEL_119;
    v36 = BugCheckParameter2;
    v37 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v38 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v38 = 40;
    v39 = (unsigned int)(v37 + v38);
    v52 = v39;
    if ( a6 )
    {
      v55 = v39;
      if ( v39 > v53 )
      {
        memset(v65, 0, 32);
        v35 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v31, (_QWORD *)BugCheckParameter2, v65);
        if ( v35 == -1073741789 )
        {
          AlpcpUnlockMessage(v36);
          *a6 = v55;
          AlpcpExposeCapturedContextAttribute(a2, v65, v11, (__int64)Address);
        }
        else
        {
          AlpcpCancelMessage((__int64)v31, v36, 0x10000);
        }
LABEL_119:
        if ( v31 != (void *)a1 )
          ObfDereferenceObject(v31);
        return v35;
      }
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      *(_WORD *)a5 = v37;
      *(_WORD *)(a5 + 2) = *(_WORD *)(v36 + 240) + 24;
      v40 = *(_WORD *)(v36 + 246);
      if ( v40 )
        *(_WORD *)(a5 + 6) = v40 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v41 = *(_WORD *)(v36 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v41;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v36 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v36 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v36 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v36 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v36 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v41 & 0xC00F;
      v42 = (char *)(a5 + 24);
      if ( *(_QWORD *)(v36 + 176) )
        AlpcpGetDataFromUserVaSafe(v36, v42);
      else
        AlpcpReadMessageData(v36, v42);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v36 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v36 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = *(_WORD *)(v36 + 244) & 0xC00F;
      v43 = (void *)(a5 + 40);
      v57 = a5 + 40;
      if ( *(_QWORD *)(v36 + 176) )
      {
        AlpcpGetDataFromUserVaSafe(v36, a5 + 40);
      }
      else
      {
        v44 = *(_QWORD *)(v36 + 96);
        if ( v44 )
          v45 = *(_QWORD *)(v44 + 32) - 40LL;
        else
          v45 = 512LL;
        v46 = *(unsigned __int16 *)(v36 + 240);
        v55 = v46;
        v47 = (const void *)(v36 + 280);
        if ( v46 > v45 )
        {
          memmove(v43, v47, v45);
          v48 = v55 - v45;
          v43 = (void *)(v45 + v57);
          v47 = *(const void **)(v36 + 224);
        }
        else
        {
          v48 = (unsigned int)v46;
        }
        memmove(v43, v47, v48);
      }
    }
    if ( a6 )
      *a6 = v52;
    if ( Address )
      AlpcpExposeAttributes(a1, a2, v36, v11, (__int64)Address);
    if ( (*(_DWORD *)(v36 + 40) & 0x200) != 0 && !*(_QWORD *)(v36 + 96) && (*v58 & 0x2000) != 0 )
    {
      v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v36, 0LL);
      v36 = BugCheckParameter2;
      if ( !v49 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        AlpcMessageCleanupProcedure(v36);
        if ( !AlpcpMessageLogEnabled )
        {
LABEL_118:
          AlpcpUnlockBlob(v36);
          goto LABEL_119;
        }
        AlpcpEnterFreeEventMessageLog(v36);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v36);
    goto LABEL_118;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v30 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v30 - 2);
  KeAbPostRelease((ULONG_PTR)(v30 - 2));
  return 3221225527LL;
}
