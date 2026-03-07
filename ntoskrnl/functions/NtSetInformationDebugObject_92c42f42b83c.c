NTSTATUS __fastcall NtSetInformationDebugObject(HANDLE Handle, int a2, int *a3, unsigned int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  NTSTATUS result; // eax
  int v12; // esi
  char *v13; // rdi
  unsigned int v14; // edx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v10 = (_DWORD *)a5;
LABEL_14:
    if ( v10 )
      *v10 = 0;
    goto LABEL_16;
  }
  if ( a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a3 + a4;
    v9 = 0x7FFFFFFF0000LL;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
  }
  v10 = (_DWORD *)a5;
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v9 = a5;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    goto LABEL_14;
  }
LABEL_16:
  if ( a2 != 1 )
    return -1073741811;
  if ( a4 == 4 )
  {
    v12 = *a3;
    if ( (*a3 & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v13 = (char *)Object;
        ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
        v14 = *((_DWORD *)v13 + 24) | 2;
        if ( (v12 & 1) == 0 )
          v14 = *((_DWORD *)v13 + 24) & 0xFFFFFFFD;
        *((_DWORD *)v13 + 24) = v14;
        ExReleaseFastMutex((PFAST_MUTEX)(v13 + 24));
        ObfDereferenceObject(v13);
        return 0;
      }
    }
  }
  else
  {
    if ( v10 )
      *v10 = 4;
    return -1073741820;
  }
  return result;
}
