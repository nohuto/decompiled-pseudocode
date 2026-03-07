__int64 __fastcall NtDuplicateObject(ULONG_PTR a1, int a2, ULONG_PTR a3, _QWORD *a4, int a5, int a6, int a7)
{
  PVOID v10; // rdi
  char PreviousMode; // bl
  __int64 result; // rax
  int v13; // r14d
  int v14; // edx
  PVOID v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rdx
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 && PreviousMode )
  {
    v17 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    *a4 = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag(a1, 0x7544624Fu, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v13 = ObpReferenceObjectByHandleWithTag(a3, 0x7544624Fu, (__int64)&v18, 0LL, 0LL);
      if ( v13 < 0 )
      {
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
    v10 = v18;
LABEL_7:
    v14 = a2;
    v15 = Object;
    v16 = ObDuplicateObject((_DWORD)Object, v14, (_DWORD)v10, (unsigned int)&v20, a5, a6, a7, PreviousMode);
    if ( a4 )
      *a4 = v20;
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return (unsigned int)v13;
    return v16;
  }
  return result;
}
