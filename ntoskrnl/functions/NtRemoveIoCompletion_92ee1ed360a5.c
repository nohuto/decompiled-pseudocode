NTSTATUS __fastcall NtRemoveIoCompletion(HANDLE Handle, _QWORD *a2, _QWORD *a3, _OWORD *a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  LARGE_INTEGER *Timeout; // rbx
  NTSTATUS result; // eax
  int v16; // edi
  ULONG v17[3]; // [rsp+44h] [rbp-64h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v20; // [rsp+60h] [rbp-48h] BYREF
  __int128 v21; // [rsp+70h] [rbp-38h]
  PLIST_ENTRY v22; // [rsp+88h] [rbp-20h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = a5;
    if ( a5 )
    {
      *(_QWORD *)&v17[1] = &v18;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v18 = *(_QWORD *)v13;
    }
    Timeout = *(LARGE_INTEGER **)&v17[1];
  }
  else
  {
    Timeout = *(LARGE_INTEGER **)&v17[1];
    if ( a5 )
      Timeout = (LARGE_INTEGER *)a5;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)&v20, &v22, 1u, v17, PreviousMode, Timeout, 0);
    ObfDereferenceObject(Object);
    if ( !v16 )
    {
      *a2 = v20;
      *a3 = *((_QWORD *)&v20 + 1);
      *a4 = v21;
    }
    return v16;
  }
  return result;
}
