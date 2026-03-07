__int64 __fastcall NtSetValueKey(
        __int64 a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        unsigned int a4,
        struct _PRIVILEGE_SET *a5,
        size_t Size)
{
  char v7; // r13
  char v8; // r15
  char v9; // r14
  unsigned __int8 PreviousMode; // di
  char v11; // si
  int v12; // r8d
  signed int v13; // edi
  signed __int8 v14; // cl
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int16 Length; // di
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  wchar_t *Buffer; // rsi
  __int64 v23; // rcx
  PPRIVILEGE_SET v24; // r14
  wchar_t *v25; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v27; // r14d
  int v29; // r8d
  bool v30; // zf
  __int64 v31; // rcx
  unsigned __int8 v32; // [rsp+40h] [rbp-1B8h]
  char v33; // [rsp+41h] [rbp-1B7h]
  int v34; // [rsp+44h] [rbp-1B4h]
  char v35; // [rsp+49h] [rbp-1AFh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  PPRIVILEGE_SET v38; // [rsp+68h] [rbp-190h]
  void *v39; // [rsp+70h] [rbp-188h]
  int v40; // [rsp+78h] [rbp-180h] BYREF
  unsigned int v41; // [rsp+7Ch] [rbp-17Ch]
  void *Src; // [rsp+80h] [rbp-178h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-170h]
  unsigned int v44; // [rsp+90h] [rbp-168h]
  __int64 v45; // [rsp+98h] [rbp-160h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-158h]
  __int64 v47; // [rsp+A8h] [rbp-150h]
  _QWORD v48[2]; // [rsp+B0h] [rbp-148h] BYREF
  int v49; // [rsp+C0h] [rbp-138h]
  struct _PRIVILEGE_SET *v50; // [rsp+C8h] [rbp-130h]
  __m128i v51; // [rsp+D0h] [rbp-128h]
  __int128 v52; // [rsp+E0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-108h] BYREF
  __int128 v54[4]; // [rsp+110h] [rbp-E8h] BYREF
  _OWORD v55[2]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v56[64]; // [rsp+170h] [rbp-88h] BYREF

  v41 = a4;
  v44 = a3;
  v46 = a1;
  v38 = a5;
  v52 = 0LL;
  DestinationString = 0LL;
  v45 = 0LL;
  memset(v55, 0, sizeof(v55));
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v55, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v52);
  v7 = 0;
  v8 = 0;
  Object = 0LL;
  v9 = 0;
  v33 = 0;
  v49 = -1;
  v48[1] = v48;
  v48[0] = v48;
  memset(v54, 0, sizeof(v54));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v39 = 0LL;
  v50 = 0LL;
  v40 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  v11 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v35 = CmpAcquireShutdownRundown();
  if ( !v35 )
  {
    v13 = -1073741431;
    v34 = -1073741431;
    goto LABEL_72;
  }
  v13 = CmObReferenceObjectByHandle(v46, 2, v12, PreviousMode, (__int64)&Object, (__int64)&v45);
  v34 = v13;
  if ( v13 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v11 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v40) )
  {
    v13 = -1073741790;
    v34 = -1073741790;
    goto LABEL_72;
  }
  v13 = CmObReferenceObjectByHandle(v46, 131097, v29, v32, (__int64)&Object, (__int64)&v45);
  v34 = v13;
  if ( v13 >= 0 )
  {
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v13 = -1073741790;
      v34 = -1073741790;
      goto LABEL_72;
    }
    v9 = 1;
    v33 = 1;
LABEL_5:
    v11 = v9;
    if ( v13 < 0 )
      goto LABEL_72;
    if ( CmpTraceRoutine && Object )
      v47 = *((_QWORD *)Object + 1);
    v14 = v32;
    if ( v32 == 1 )
    {
      v51 = 0LL;
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a2;
      v51.m128i_i32[0] = *(_DWORD *)v15;
      v16 = *(_QWORD *)(v15 + 8);
      v51.m128i_i64[1] = v16;
      DestinationString = (UNICODE_STRING)v51;
      DestinationString.MaximumLength = _mm_cvtsi128_si32(v51);
      Length = v51.m128i_i16[0];
      if ( v51.m128i_i16[0] )
      {
        if ( (v16 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v51.m128i_u16[0] + v16 > 0x7FFFFFFF0000LL || v51.m128i_u16[0] + v16 < v16 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v18 = Size;
      if ( (_DWORD)Size )
      {
        Src = v38;
        if ( (unsigned __int64)v38 + (unsigned int)Size > 0x7FFFFFFF0000LL
          || (PPRIVILEGE_SET)((char *)v38 + (unsigned int)Size) < v38 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
        goto LABEL_17;
      }
    }
    else
    {
      DestinationString = *a2;
      v39 = 0LL;
      v18 = Size;
      if ( !(_DWORD)Size )
      {
        Length = DestinationString.Length;
        Src = v38;
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v18 > 0x7FFFF000 )
        {
          v13 = -1073741811;
          v34 = -1073741811;
          v11 = v9;
          goto LABEL_72;
        }
        v19 = Length;
        v20 = (Length + 7) & 0xFFFFFFF8;
        v21 = v20 + v18;
        if ( v20 + v18 < v18 )
        {
          v13 = -1073741811;
          v34 = -1073741811;
          v11 = v33;
          v7 = 0;
          v8 = 0;
          goto LABEL_72;
        }
        Buffer = DestinationString.Buffer;
        if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v14, DestinationString.Buffer)
          || (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)(char)v32, Src) )
        {
          if ( v21 )
          {
            if ( v21 <= 0x40 )
              goto LABEL_25;
            if ( v18 <= 0x40 )
            {
              if ( Length <= 0x40u && v18 < Length )
                v19 = v18;
            }
            else
            {
              v19 = Length > 0x40u ? v20 + v18 : v18;
            }
            if ( v19 )
            {
              Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v23, v19, 1851157827LL);
              if ( !Privileges )
              {
                v13 = -1073741670;
                v34 = -1073741670;
                v11 = v33;
                v7 = 0;
                v8 = 0;
                goto LABEL_72;
              }
              Buffer = DestinationString.Buffer;
              Length = DestinationString.Length;
              if ( v19 == v18 )
              {
                v39 = v56;
                v24 = Privileges;
              }
              else
              {
                v39 = Privileges;
                if ( v19 == DestinationString.Length )
                  v24 = (PPRIVILEGE_SET)v56;
                else
                  v24 = (PPRIVILEGE_SET)((char *)Privileges + v20);
              }
            }
            else
            {
LABEL_25:
              v39 = v56;
              v24 = (PPRIVILEGE_SET)&v56[v20];
            }
          }
          else
          {
            v24 = v50;
          }
          if ( Length )
          {
            v25 = Buffer;
            Buffer = (wchar_t *)v39;
            memmove(v39, v25, Length);
            DestinationString.Buffer = Buffer;
            Length = DestinationString.Length;
          }
          else
          {
            Buffer = 0LL;
            DestinationString.Buffer = 0LL;
          }
          if ( v18 )
          {
            memmove(v24, Src, v18);
            v38 = v24;
            Buffer = DestinationString.Buffer;
            Length = DestinationString.Length;
          }
          else
          {
            v38 = 0LL;
          }
        }
        if ( Length )
        {
          do
          {
            if ( Buffer[((unsigned __int64)Length >> 1) - 1] )
              break;
            v30 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v30 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
          {
            v27 = (int)v38;
            v7 = 0;
          }
          else
          {
            *(_QWORD *)&v54[0] = Object;
            *((_QWORD *)&v54[0] + 1) = &DestinationString;
            *(_QWORD *)&v54[1] = __PAIR64__(v41, v44);
            v27 = (int)v38;
            *((_QWORD *)&v54[1] + 1) = v38;
            LODWORD(v54[2]) = v18;
            v13 = CmpCallCallBacksEx(1u, v54, 0LL, 1, 0x10u, (__int64)Object, (__int64)v48);
            if ( v13 < 0 )
            {
              if ( v13 == -1073740541 )
                v13 = 0;
              v34 = v13;
              v11 = v33;
              v7 = 0;
              goto LABEL_71;
            }
            v7 = 1;
          }
          if ( !v33
            || (v13 = CmKeyBodyReplicateToVirtual(&Object, v32, 2LL, &SubjectContext, &v40),
                v34 = v13,
                v11 = v33,
                v13 >= 0) )
          {
            v13 = CmSetValueKey((_DWORD)Object, (unsigned int)&DestinationString, v41, v27, v18, v46, (v45 & 4) != 0);
            v34 = v13;
            v11 = v33;
          }
LABEL_71:
          v8 = 1;
          goto LABEL_72;
        }
        v13 = -1073741790;
        v34 = -1073741790;
        v11 = v33;
        v7 = 0;
        v8 = 0;
        goto LABEL_72;
      }
      Length = DestinationString.Length;
    }
    Src = v38;
LABEL_17:
    v14 = v32;
    goto LABEL_18;
  }
LABEL_72:
  if ( v11 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v13 = CmPostCallbackNotificationEx(16, (__int64)Object, v13, (__int64)v54, 0LL, v48);
    v34 = v13;
  }
  if ( v8 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v13 = v34;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v31 = v47;
    LOBYTE(v31) = 14;
    CmpTraceRoutine(v31, v55, (unsigned int)v13, 0LL, v47, &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v35 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v52);
  return (unsigned int)v13;
}
