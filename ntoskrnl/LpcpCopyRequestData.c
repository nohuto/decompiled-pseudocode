NTSTATUS __fastcall LpcpCopyRequestData(
        char a1,
        void *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char *Address,
        SIZE_T Length,
        __int64 *a7)
{
  unsigned __int64 v7; // r13
  struct _OBJECT_HANDLE_INFORMATION *HandleInformation; // r10
  KPROCESSOR_MODE PreviousMode; // r12
  size_t v13; // rdi
  __int64 *v14; // r9
  __int64 *v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // r9
  signed int v18; // ebx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // r8
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR Process; // rcx
  ULONG_PTR v28; // r8
  char *v29; // r9
  char *v30; // rdx
  ULONG_PTR v31; // [rsp+48h] [rbp-70h] BYREF
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+58h] [rbp-60h] BYREF
  __m128i v34; // [rsp+60h] [rbp-58h]
  __int128 v35; // [rsp+70h] [rbp-48h] BYREF
  __int128 v36; // [rsp+80h] [rbp-38h]
  __int64 v37; // [rsp+90h] [rbp-28h]

  v7 = a4;
  HandleInformation = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = Length;
    if ( a1 )
    {
      if ( Length && ((unsigned __int64)&Address[Length] > 0x7FFFFFFF0000LL || &Address[Length] < Address) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      ProbeForWrite(Address, Length, 1u);
    }
    AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&v35, 0);
    v15 = a7;
    if ( a7 )
    {
      if ( a7 < v14 )
        v14 = a7;
      *v14 = *v14;
    }
  }
  else
  {
    v35 = *(_OWORD *)a3;
    v36 = *(_OWORD *)(a3 + 16);
    v37 = *(_QWORD *)(a3 + 32);
    v15 = a7;
    v13 = Length;
  }
  if ( !WORD3(v35) )
    return -1073741811;
  Object = HandleInformation;
  result = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, PreviousMode, &Object, HandleInformation);
  if ( result >= 0 )
  {
    v18 = AlpcpLookupMessage((__int64)Object, SDWORD2(v36), v37, v17, &v31);
    if ( v18 < 0 )
    {
LABEL_38:
      ObfDereferenceObject(Object);
      return v18;
    }
    v19 = *(_QWORD *)(v31 + 32);
    if ( v19 )
    {
      v18 = -1073741811;
      v20 = *(__int16 *)(v31 + 246);
      if ( (_WORD)v20 )
      {
        v21 = (int)v20 + 8;
        v22 = *(_QWORD *)(v31 + 96);
        if ( v22 )
          v23 = *(_QWORD *)(v22 + 32) - 40LL;
        else
          v23 = 512LL;
        v24 = *(unsigned __int16 *)(v31 + 242);
        if ( v23 <= v24 )
          v24 = v23;
        if ( v21 >= v24 || v7 >= (v24 - v21) >> 4 )
          goto LABEL_37;
        v25 = v31 + v20;
        if ( *(_DWORD *)(v25 + 240) > (unsigned int)v7 )
        {
          v34 = *(__m128i *)(v25 + 16 * v7 + 248);
          v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v34, 8)) < v13 ? 0xC000000D : 0;
        }
      }
      if ( v18 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( a1 )
        {
          Process = (ULONG_PTR)CurrentThread->ApcState.Process;
          v28 = *(_QWORD *)(v19 + 544);
          v29 = (char *)v34.m128i_i64[0];
          v30 = Address;
        }
        else
        {
          v28 = (ULONG_PTR)CurrentThread->ApcState.Process;
          Process = *(_QWORD *)(v19 + 544);
          v29 = Address;
          v30 = (char *)v34.m128i_i64[0];
        }
        v18 = MiCopyVirtualMemory(Process, v30, v28, v29, v13, PreviousMode, (size_t *)&v33, 0);
        if ( v18 >= 0 )
        {
          if ( v15 )
            *v15 = v33;
        }
      }
    }
    else
    {
      v18 = -1073741790;
    }
LABEL_37:
    AlpcpUnlockMessage(v31);
    goto LABEL_38;
  }
  return result;
}
