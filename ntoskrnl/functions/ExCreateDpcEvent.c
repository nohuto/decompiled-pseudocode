__int64 __fastcall ExCreateDpcEvent(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 Pool2; // rdi
  __int64 result; // rax
  int v8; // ebx
  PVOID v9; // rbx
  _QWORD *v10; // rcx
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1466134596LL);
  if ( !Pool2 )
    return 3221225626LL;
  v8 = ObCreateObject(0, (_DWORD)ExEventObjectType, 0, 0, 0, 24, 0, 0, (__int64)&Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v10 = Object;
    *((_DWORD *)Object + 1) = 0;
    v10[2] = v10 + 1;
    v10[1] = v10 + 1;
    *(_WORD *)v10 = 1;
    *((_BYTE *)v10 + 2) = 6;
    ObDeleteCapturedInsertInfo(v10);
    ObfReferenceObjectWithTag(v9, 0x65447845u);
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    *(_QWORD *)(Pool2 + 48) = a3;
    result = 0LL;
    *(_QWORD *)(Pool2 + 56) = v9;
    *(_BYTE *)(Pool2 + 17) = 5;
    *a1 = Pool2;
    *a2 = v9;
  }
  else
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v8;
  }
  return result;
}
