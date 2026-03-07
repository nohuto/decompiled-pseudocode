NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v5; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  NTSTATUS inserted; // ebx
  char *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  PVOID Object; // [rsp+50h] [rbp-9h] BYREF
  __int128 v17; // [rsp+58h] [rbp-1h] BYREF
  __m128i v18; // [rsp+68h] [rbp+Fh]
  __int128 v19; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Handle = 0LL;
  v18 = v5;
  Object = 0LL;
  v17 = v8;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v18.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | 0x200;
  v19 = v10;
  if ( v5.m128i_i64[0] )
  {
    inserted = ObOpenObjectByName((__int64)&v17, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
    if ( inserted >= 0 )
    {
LABEL_3:
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &Object, 0LL);
      ZwClose(Handle);
      if ( inserted >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)Object;
      return inserted;
    }
  }
  else
  {
    inserted = -1073741823;
  }
  if ( Create )
  {
    inserted = ObCreateObjectEx(0, (_DWORD)ExCallbackObjectType, (unsigned int)&v17, 0);
    if ( inserted >= 0 )
    {
      v13 = (char *)Object;
      *(_DWORD *)Object = 1819042115;
      v13[32] = AllowMultipleCallbacks;
      *((_QWORD *)v13 + 3) = v13 + 16;
      *((_QWORD *)v13 + 2) = v13 + 16;
      *((_QWORD *)v13 + 1) = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
      v14 = (_QWORD *)qword_140C2D328;
      v15 = v13 + 40;
      if ( *(__int64 **)qword_140C2D328 != &ExpCallbackListHead )
        __fastfail(3u);
      *v15 = &ExpCallbackListHead;
      *((_QWORD *)v13 + 6) = v14;
      *v14 = v15;
      qword_140C2D328 = (__int64)(v13 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v13, 0LL, 0, 0LL, (__int64)&Handle);
      if ( inserted >= 0 )
        goto LABEL_3;
    }
  }
  return inserted;
}
