NTSTATUS __fastcall SeGetLogonSessionToken(void *a1, KPROCESSOR_MODE a2, __int64 *a3)
{
  NTSTATUS result; // eax
  PVOID v6; // rdi
  int inserted; // ebx
  PVOID v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v10[1] = 0;
  v14 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    if ( *(_QWORD *)(*((_QWORD *)Object + 27) + 48LL) )
    {
      v10[0] = 48;
      v11 = 0LL;
      v12 = 0LL;
      v15 = 0LL;
      v13 = a2 == 0 ? 0x200 : 0;
      inserted = SepDuplicateToken(
                   *(_QWORD *)(*((_QWORD *)Object + 27) + 48LL),
                   (unsigned int)v10,
                   0,
                   1,
                   0,
                   0,
                   0,
                   (__int64)&v8);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx(v8, 0LL, 0, 0LL, (__int64)&v9);
        if ( inserted >= 0 )
          *a3 = v9;
      }
    }
    else
    {
      inserted = -1073741700;
    }
    ObfDereferenceObject(v6);
    return inserted;
  }
  return result;
}
