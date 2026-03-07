__int64 __fastcall NtQueryValueKey(
        HANDLE Handle,
        UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        unsigned int *a6)
{
  unsigned int v7; // r14d
  unsigned int v10; // r12d
  int v11; // r8d
  unsigned __int8 v12; // r14
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int16 v17; // ax
  __int64 Length; // rbx
  const void *Buffer; // rdi
  __int64 v20; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  _BYTE *TransientPoolWithQuota; // rax
  int v27; // eax
  unsigned int v28; // eax
  PVOID v30; // rax
  void *v31; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v33; // edx
  char v34; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  char v37; // [rsp+40h] [rbp-2A8h]
  char v38; // [rsp+41h] [rbp-2A7h]
  char v40; // [rsp+48h] [rbp-2A0h] BYREF
  char v41; // [rsp+49h] [rbp-29Fh]
  __int64 v42; // [rsp+50h] [rbp-298h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-288h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-278h] BYREF
  int v45; // [rsp+74h] [rbp-274h]
  PVOID Object; // [rsp+78h] [rbp-270h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-268h]
  unsigned int v48; // [rsp+88h] [rbp-260h]
  PVOID v49; // [rsp+90h] [rbp-258h] BYREF
  __int64 v50; // [rsp+98h] [rbp-250h]
  PVOID v51; // [rsp+A0h] [rbp-248h] BYREF
  _QWORD v52[2]; // [rsp+A8h] [rbp-240h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-230h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-228h] BYREF
  __m128i v55; // [rsp+D0h] [rbp-218h]
  UNICODE_STRING v56; // [rsp+E0h] [rbp-208h] BYREF
  __int128 v57; // [rsp+F0h] [rbp-1F8h] BYREF
  __int128 v58; // [rsp+100h] [rbp-1E8h] BYREF
  __int128 *v59; // [rsp+110h] [rbp-1D8h]
  int v60; // [rsp+118h] [rbp-1D0h]
  __int128 v61; // [rsp+11Ch] [rbp-1CCh]
  __int64 v62; // [rsp+12Ch] [rbp-1BCh]
  int v63; // [rsp+134h] [rbp-1B4h]
  __int128 v64[5]; // [rsp+140h] [rbp-1A8h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-158h]
  char v66; // [rsp+1A0h] [rbp-148h]
  _BYTE v67[79]; // [rsp+1A1h] [rbp-147h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68[2]; // [rsp+1F0h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+210h] [rbp-D8h] BYREF
  __int64 *v70; // [rsp+230h] [rbp-B8h]
  __int64 v71; // [rsp+238h] [rbp-B0h]
  char *v72; // [rsp+240h] [rbp-A8h]
  __int64 v73; // [rsp+248h] [rbp-A0h]
  __int64 *v74; // [rsp+250h] [rbp-98h]
  __int64 v75; // [rsp+258h] [rbp-90h]
  _BYTE v76[64]; // [rsp+260h] [rbp-88h] BYREF

  v7 = a3;
  v10 = Size;
  v48 = a3;
  v57 = 0LL;
  DestinationString = 0LL;
  LODWORD(v49) = 0;
  memset(v67, 0, 0x47uLL);
  memset(v68, 0, sizeof(v68));
  v42 = 0LL;
  v50 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v68, 0x20000LL);
  v37 = 0;
  v38 = 0;
  Object = 0LL;
  v44 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v64, 0, 0x48uLL);
  *(_OWORD *)Src = 0LL;
  v66 = 0;
  v52[1] = v52;
  v52[0] = v52;
  CmpInitializeThreadInfo((__int64)&v57);
  v51 = 0LL;
  v41 = CmpAcquireShutdownRundown();
  if ( !v41 )
  {
    v14 = -1073741431;
    v20 = 0LL;
    goto LABEL_73;
  }
  if ( v7 > 4 )
  {
    if ( CmpTraceRoutine
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v49 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v49, 0LL) >= 0) )
    {
      v20 = *((_QWORD *)v49 + 1);
      ObfDereferenceObject(v49);
    }
    else
    {
      v20 = 0LL;
    }
    v14 = -1073741811;
    goto LABEL_73;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v14 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v11, v12, (__int64)&Object, 0LL);
  v45 = v14;
  if ( v14 < 0 )
  {
    v7 = a3;
    v20 = 0LL;
    goto LABEL_73;
  }
  if ( CmpTraceRoutine )
  {
    v13 = (__int64)Object;
    if ( Object )
    {
      v42 = *((_QWORD *)Object + 1);
      v50 = v42;
    }
  }
  if ( v12 == 1 )
  {
    v55 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a2;
    v55.m128i_i32[0] = *(_DWORD *)v15;
    v16 = *(_QWORD *)(v15 + 8);
    v55.m128i_i64[1] = v16;
    DestinationString = (UNICODE_STRING)v55;
    v17 = _mm_cvtsi128_si32(v55);
    if ( v17 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v16 + v17 > 0x7FFFFFFF0000LL || v16 + v17 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (_DWORD)Size )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + (unsigned int)Size > 0x7FFFFFFF0000LL || a4 + (unsigned int)Size < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v13 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
  }
  else
  {
    DestinationString = *a2;
  }
  Length = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  Buffer = DestinationString.Buffer;
  if ( v12
    || *((_QWORD *)&CmpRegistryProcess + 1) && !CmpIsBufferGloballyVisible((unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)Length )
    {
      if ( (unsigned int)Length > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v13, Length, 1853246787LL);
        if ( !Privileges )
        {
          v14 = -1073741670;
          v45 = -1073741670;
          v7 = a3;
          v20 = v42;
          goto LABEL_73;
        }
        Buffer = DestinationString.Buffer;
        LOWORD(Length) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v76;
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)Length);
        LOWORD(Length) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v14 = -1073741811;
    v45 = -1073741811;
    v7 = a3;
    v20 = v42;
    goto LABEL_73;
  }
  while ( (_WORD)Length && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)Length >> 1) - 1) )
  {
    LOWORD(Length) = Length - 2;
    DestinationString.Length = Length;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v38 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_49:
    v14 = CmKeyBodyRemapToVirtualForEnum(&Object, v12, 1LL, &v51);
    if ( v14 < 0 )
      goto LABEL_130;
    Src[0] = (void *)a4;
    if ( !(_DWORD)Size )
    {
      Src[1] = 0LL;
      goto LABEL_60;
    }
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) || !v12 && CmpIsBufferGloballyVisible(a4) )
    {
      Src[1] = (void *)a4;
      goto LABEL_60;
    }
    if ( (unsigned int)dword_140C04328 > 5 && (byte_140C04338 & 4) != 0 && (qword_140C04340 & 4) == qword_140C04340 )
    {
      v53 = 1LL;
      v70 = &v53;
      v71 = 8LL;
      v40 = 3;
      v72 = &v40;
      v73 = 1LL;
      v33 = Size;
      if ( (((_DWORD)Size - 1) & (unsigned int)Size) != 0 )
      {
        v34 = -1;
        do
        {
          ++v34;
          v33 >>= 1;
        }
        while ( v33 );
        v33 = 1 << (v34 + 1);
      }
      v54 = v33;
      v74 = &v54;
      v75 = 8LL;
      tlgWriteAgg((__int64)&dword_140C04328, (unsigned __int8 *)&byte_140036801, v24, 5u, &v69);
    }
    if ( (unsigned int)Size > 0x40uLL )
    {
      if ( (unsigned int)Size <= 0x1000uLL )
      {
        v30 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
        v31 = v30;
        if ( v30 )
        {
          memset(v30, 0, (unsigned int)Size);
          v66 |= 1u;
          Src[1] = v31;
          goto LABEL_60;
        }
      }
      TransientPoolWithQuota = (_BYTE *)CmpAllocateTransientPoolWithQuota(v23, (unsigned int)Size, 1111641411LL);
      if ( !TransientPoolWithQuota )
      {
        v14 = -1073741670;
LABEL_61:
        if ( v14 >= 0 )
        {
          v7 = a3;
          if ( !v51 )
            goto LABEL_63;
          v56 = DestinationString;
          ValueKey = CmQueryValueKey((_DWORD)v51, (unsigned int)&v56, a3, Src[1], Size, (__int64)&v44);
          v14 = ValueKey;
          if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
          {
LABEL_67:
            v28 = v44;
            *a6 = v44;
            if ( v14 != -1073741789 )
            {
              if ( v28 < (unsigned int)Size )
                v10 = v28;
              if ( Src[0] != Src[1] )
                memmove(Src[0], Src[1], v10);
            }
            v20 = v42;
            goto LABEL_73;
          }
          if ( ValueKey == -1073741772 )
          {
LABEL_63:
            v56 = DestinationString;
            v27 = CmQueryValueKey((_DWORD)Object, (unsigned int)&v56, a3, Src[1], Size, (__int64)&v44);
            v14 = v27;
            if ( v27 < 0 && v27 != -2147483643 && v27 != -1073741789 )
              goto LABEL_66;
            goto LABEL_67;
          }
LABEL_66:
          v20 = v42;
          goto LABEL_73;
        }
LABEL_130:
        v7 = a3;
        goto LABEL_66;
      }
    }
    else
    {
      memset(v67, 0, (unsigned int)Size);
      TransientPoolWithQuota = v67;
    }
    Src[1] = TransientPoolWithQuota;
LABEL_60:
    v14 = 0;
    goto LABEL_61;
  }
  *(_QWORD *)&v64[0] = Object;
  *((_QWORD *)&v64[0] + 1) = &DestinationString;
  LODWORD(v64[1]) = a3;
  *((_QWORD *)&v64[1] + 1) = a4;
  LODWORD(v64[2]) = Size;
  *((_QWORD *)&v64[2] + 1) = a6;
  v22 = CmpCallCallBacksEx(8u, v64, 0LL, 1, 0x17u, (__int64)Object, (__int64)v52);
  v14 = v22;
  if ( v22 >= 0 )
  {
    v37 = 1;
    goto LABEL_49;
  }
  v7 = a3;
  v20 = v42;
  if ( v22 == -1073740541 )
    v14 = 0;
LABEL_73:
  if ( v51 )
    ObfDereferenceObject(v51);
  if ( v37 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v52[0] != v52 )
  {
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0;
    *(_QWORD *)&v58 = Object;
    *((_QWORD *)&v58 + 1) = (unsigned int)v14;
    v60 = v14;
    v59 = v64;
    CmpCallCallBacksEx(0x17u, &v58, 0LL, 0, 0x17u, (__int64)Object, (__int64)v52);
    v14 = v60;
  }
  if ( v38 )
    KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v67 )
  {
    if ( (v66 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    CmpTraceRoutine(p_DestinationString, v68, (unsigned int)v14, v7, v20, &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v76 )
    CmSiFreeMemory(Privileges);
  if ( v41 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v57);
  return (unsigned int)v14;
}
