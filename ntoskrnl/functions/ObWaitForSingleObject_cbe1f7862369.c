__int64 __fastcall ObWaitForSingleObject(ULONG_PTR a1, char a2, KPROCESSOR_MODE a3, BOOLEAN a4, PLARGE_INTEGER Timeout)
{
  int v7; // edi
  PVOID v8; // rbx
  struct _OBJECT_TYPE *v9; // r8
  __int64 DefaultObject; // r10
  PVOID Object[2]; // [rsp+48h] [rbp-10h] BYREF

  Object[0] = 0LL;
  v7 = ObpReferenceObjectByHandleWithTag(a1, 0x100000, 0LL, a2, 0x7457624Fu, Object, 0LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = Object[0];
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
  DefaultObject = (__int64)v9->DefaultObject;
  if ( (DefaultObject & 1) == 0 )
  {
    if ( DefaultObject < 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( (DefaultObject & 2) != 0 )
  {
    if ( (v9->TypeInfo.WaitObjectFlagMask & *(_DWORD *)((_BYTE *)Object[0] + v9->TypeInfo.WaitObjectFlagOffset)) != v9->TypeInfo.WaitObjectFlagMask )
    {
      DefaultObject -= 3LL;
LABEL_4:
      DefaultObject += (__int64)Object[0];
      goto LABEL_5;
    }
    DefaultObject = *(_QWORD *)((char *)Object[0] + v9->TypeInfo.WaitObjectPointerOffset);
  }
  else
  {
    DefaultObject = *(_QWORD *)((char *)Object[0] + DefaultObject - 1);
  }
LABEL_5:
  if ( ExCrossVmMutantObjectType != v9 )
  {
    v7 = KeWaitForSingleObject((PVOID)DefaultObject, UserRequest, a3, a4, Timeout);
    ObfDereferenceObjectWithTag(v8, 0x7457624Fu);
    return (unsigned int)v7;
  }
  ObfDereferenceObjectWithTag(Object[0], 0x7457624Fu);
  return 3221225508LL;
}
