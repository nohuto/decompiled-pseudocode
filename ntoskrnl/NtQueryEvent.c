__int64 __fastcall NtQueryEvent(HANDLE Handle, int a2, int *a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  NTSTATUS v11; // esi
  _DWORD *v12; // r14
  int v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  PVOID v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0;
  v14 = 0;
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 8 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, 8uLL, 4u);
    v8 = (_DWORD *)a5;
    if ( a5 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v8 = (_DWORD *)a5;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v11 = v10;
  v12 = Object;
  v16 = Object;
  LODWORD(Object) = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(Handle, 1u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v12 = Object;
        v16 = Object;
        LODWORD(Object) = v11;
        if ( v11 >= 0 )
        {
          v11 = ExpQueryCrossVmEvent(v12, &v17, &v14);
          LODWORD(Object) = v11;
        }
      }
    }
  }
  else
  {
    v14 = v12[1];
    v17 = *(_BYTE *)v12 & 0x7F;
  }
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      *a3 = v17;
      a3[1] = v14;
      if ( v8 )
        *v8 = 8;
    }
    else
    {
      *a3 = v17;
      a3[1] = v14;
      if ( v8 )
        *v8 = 8;
    }
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return (unsigned int)v11;
}
