NTSTATUS __fastcall NtWaitForDebugEvent(HANDLE Handle, BOOLEAN a2, LARGE_INTEGER *a3, _OWORD *a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rdx
  NTSTATUS result; // eax
  void *v10; // r13
  BOOLEAN v11; // r9
  char *v12; // rdi
  char v13; // r14
  _QWORD *v14; // rdx
  __int64 i; // rax
  __int64 v16; // rbx
  int v17; // r8d
  _QWORD *v18; // rcx
  NTSTATUS v19; // ebx
  bool v20; // sf
  _OWORD *v21; // rsi
  LONGLONG QuadPart; // [rsp+38h] [rbp-140h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+40h] [rbp-138h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  __int64 v26; // [rsp+50h] [rbp-128h]
  PVOID v27; // [rsp+58h] [rbp-120h]
  _OWORD v28[12]; // [rsp+70h] [rbp-108h] BYREF

  Timeout = a3;
  QuadPart = 0LL;
  v26 = 0LL;
  DWORD1(v28[0]) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v28, 0, 0xB8uLL);
  v8 = 0x7FFFFFFF0000LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    Timeout = (PLARGE_INTEGER)&QuadPart;
    v26 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a4;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 183) = *(_BYTE *)(v8 + 183);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = 0LL;
    v27 = 0LL;
    v11 = a2;
    v12 = (char *)Object;
    while ( 1 )
    {
      v19 = KeWaitForSingleObject(v12, Executive, PreviousMode, v11, Timeout);
      if ( v19 < 0 || v19 == 192 || (unsigned int)(v19 - 257) <= 1 )
        break;
      v13 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v19 = -1073740972;
      }
      else
      {
        v14 = v12 + 80;
        for ( i = *((_QWORD *)v12 + 10); ; i = *(_QWORD *)i )
        {
          if ( (_QWORD *)i == v14 )
          {
            KeResetEvent((PRKEVENT)v12);
            goto LABEL_24;
          }
          v16 = i;
          v17 = *(_DWORD *)(i + 76);
          if ( (v17 & 5) == 0 )
          {
            v13 = 1;
            v18 = (_QWORD *)*v14;
            if ( *v14 != i )
            {
              while ( *(_QWORD *)(i + 40) != v18[5] )
              {
                v18 = (_QWORD *)*v18;
                if ( v18 == (_QWORD *)i )
                  goto LABEL_19;
              }
              *(_DWORD *)(i + 76) = v17 | 4;
              *(_QWORD *)(i + 80) = 0LL;
              v13 = 0;
            }
LABEL_19:
            if ( v13 )
              break;
          }
        }
        v10 = *(void **)(i + 56);
        v27 = *(PVOID *)(i + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v10, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v28, v16);
        *(_DWORD *)(v16 + 76) |= 1u;
LABEL_24:
        v19 = 0;
      }
      ExReleaseFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( v19 < 0 )
        break;
      if ( v13 )
      {
        DbgkpOpenHandles((__int64)v28, v10, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v10, 0x4F676244u);
        break;
      }
      if ( QuadPart < 0 )
      {
        v20 = MEMORY[0xFFFFF78000000014] - v26 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v26;
        v26 = MEMORY[0xFFFFF78000000014];
        v12 = (char *)Object;
        if ( !v20 )
        {
          v19 = 258;
          break;
        }
      }
      v11 = a2;
    }
    ObfDereferenceObject(v12);
    *a4 = v28[0];
    a4[1] = v28[1];
    a4[2] = v28[2];
    a4[3] = v28[3];
    a4[4] = v28[4];
    a4[5] = v28[5];
    a4[6] = v28[6];
    v21 = a4 + 8;
    *(v21 - 1) = v28[7];
    *v21 = v28[8];
    v21[1] = v28[9];
    v21[2] = v28[10];
    *((_QWORD *)v21 + 6) = *(_QWORD *)&v28[11];
    return v19;
  }
  return result;
}
