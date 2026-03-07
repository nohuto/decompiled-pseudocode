__int64 __fastcall NtCreateKeyedEvent(__int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  char PreviousMode; // cl
  __int64 result; // rax
  char *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v13[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  if ( a4 )
    return 3221225714LL;
  result = ObCreateObjectEx(PreviousMode, ExpKeyedEventObjectType, a3, PreviousMode, v11, 1536, 0, 0, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = (char *)Object;
    v9 = (char *)Object + 8;
    v10 = 64LL;
    do
    {
      *(v9 - 1) = 0LL;
      v9[1] = v9;
      *v9 = v9;
      v9 += 3;
      --v10;
    }
    while ( v10 );
    result = ObInsertObjectEx(v8, 0LL, a2, 0, 0, 0LL, v13);
    if ( (int)result >= 0 )
    {
      *a1 = v13[0];
      return (unsigned int)result;
    }
  }
  return result;
}
