__int64 __fastcall VrpTranslatePath(
        signed __int64 *Object,
        void *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8,
        _DWORD *a9)
{
  signed __int64 *v9; // r14
  signed __int64 *v10; // rsi
  int v11; // eax
  int v12; // r13d
  UNICODE_STRING v13; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  wchar_t *Buffer; // r14
  unsigned __int16 v21; // r15
  NTSTATUS v22; // edi
  UNICODE_STRING v23; // xmm6
  int v24; // ecx
  int v25; // r13d
  int v26; // ecx
  int v27; // eax
  void *v28; // rdi
  char v29; // dl
  int v30; // r8d
  PVOID v31; // rax
  __int64 v32; // r15
  wchar_t *v33; // r12
  unsigned __int16 Length; // di
  unsigned __int64 i; // rcx
  __int64 v36; // r14
  __int16 v37; // di
  wchar_t *v38; // rax
  char v40; // [rsp+38h] [rbp-B1h]
  unsigned __int64 v41; // [rsp+40h] [rbp-A9h] BYREF
  UNICODE_STRING v42; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int64 Source; // [rsp+60h] [rbp-89h]
  UNICODE_STRING Source_8; // [rsp+68h] [rbp-81h] BYREF
  __int64 v46; // [rsp+78h] [rbp-71h] BYREF
  PVOID v47; // [rsp+80h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-61h] BYREF
  unsigned __int16 *v49; // [rsp+98h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-49h] BYREF
  int v53; // [rsp+148h] [rbp+5Fh]

  v46 = 0LL;
  Source_8 = 0LL;
  v9 = Object;
  memset(&ObjectAttributes, 0, 44);
  v10 = Object;
  v11 = *(unsigned __int16 *)(a3 + 32);
  v12 = 0;
  KeyHandle = 0LL;
  v13 = *a4;
  v53 = v11;
  DestinationString = 0LL;
  v40 = 0;
  v42 = v13;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = v10 + 2;
    --CurrentThread->KernelApcDisable;
    v16 = KeAbPreAcquire((__int64)(v10 + 2), 0LL);
    if ( _InterlockedCompareExchange64(v10 + 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10 + 2, 0, v16, (__int64)(v10 + 2));
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    Source = VrpFindNamespaceNode((_DWORD)v10, (unsigned int)&v42, 1, 0, (__int64)&v46);
    v17 = Source;
    if ( !Source )
      break;
    v18 = v46;
    v19 = 0LL;
    v41 = 0LL;
    if ( v46 )
    {
      do
      {
        VrpGetNextToken(&v42, &v41, &Source_8);
        --v18;
      }
      while ( v18 );
      v19 = v41;
    }
    Buffer = v42.Buffer;
    v21 = v42.Length - 2 * v19;
    Source_8.Buffer = &v42.Buffer[v19];
    Source_8.Length = v21;
    Source_8.MaximumLength = v21;
    v49 = (unsigned __int16 *)(v17 + 24);
    v22 = VrpBuildKeyPath((PCUNICODE_STRING)(v17 + 24), &Source_8, &DestinationString);
    if ( v22 < 0 )
      goto LABEL_38;
    VrpStripTrailingCharacters(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v23 = DestinationString;
    v42 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v24 = *(_DWORD *)(v17 + 56);
    v9 = Object;
    v25 = v24 & 4 | v12;
    if ( v10 == Object )
      v25 |= v24 & 2;
    v26 = *(unsigned __int16 *)(v17 + 64);
    v27 = v25 | 0x20000000;
    v28 = *(void **)(v17 + 16);
    if ( v21 )
      v27 = v25;
    v29 = v40;
    v12 = v27;
    if ( v53 < v26 )
      v29 = 1;
    v30 = *(unsigned __int16 *)(v17 + 66) - v26 + v53;
    v40 = v29;
    v53 = v30;
    if ( !v28 )
    {
      if ( !a6 )
        goto LABEL_25;
      if ( !v29 )
      {
        ObfReferenceObject(a2);
        v31 = a2;
        goto LABEL_24;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v17 + 24);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v22 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
      if ( v22 >= 0 )
      {
        v47 = 0LL;
        v22 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v47, 0LL);
        v31 = v47;
        if ( v22 >= 0 )
        {
LABEL_24:
          v29 = v40;
          v30 = v53;
          *a6 = v31;
LABEL_25:
          v32 = a7;
          if ( a7 )
          {
            v33 = v42.Buffer;
            Length = v42.Length;
            if ( v29 )
            {
              for ( i = (unsigned __int64)*v49 >> 1; ; ++i )
              {
                v41 = i;
                if ( 2 * i >= v42.Length || v42.Buffer[i] != 92 )
                  break;
              }
            }
            else
            {
              v41 = 0LL;
              i = 0LL;
              v36 = 0LL;
              if ( v30 > 0 )
              {
                do
                {
                  VrpGetNextToken(&v42, &v41, &Source_8);
                  ++v36;
                }
                while ( (int)v36 < v53 );
                i = v41;
                v15 = v10 + 2;
                v32 = a7;
              }
            }
            v37 = Length - 2 * i;
            v38 = &v33[i];
            v17 = Source;
            *(_QWORD *)(v32 + 8) = v38;
            *(_WORD *)v32 = v37;
            *(_WORD *)(v32 + 2) = v37;
          }
          if ( a8 )
            *a8 = v12;
          *a9 = *(_DWORD *)(v17 + 60);
          *a5 = v23;
          RtlInitUnicodeString(&v42, 0LL);
          v22 = 0;
        }
      }
LABEL_38:
      v9 = Object;
      goto LABEL_39;
    }
    ObfReferenceObjectWithTag(v28, 0x67655256u);
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 2);
    KeAbPostRelease((ULONG_PTR)(v10 + 2));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v10 != Object )
      ObfDereferenceObjectWithTag(v10, 0x67655256u);
    v10 = (signed __int64 *)v28;
  }
  v22 = -1073741772;
LABEL_39:
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 && v10 != v9 )
    ObfDereferenceObjectWithTag(v10, 0x67655256u);
  if ( v42.Buffer && v42.Buffer != a4->Buffer )
    ExFreePoolWithTag(v42.Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v22;
}
