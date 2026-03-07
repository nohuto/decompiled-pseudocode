__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, __int64 a5, PVOID *a6)
{
  int inserted; // ebx
  PVOID v8; // rcx
  __int64 v10; // r8
  int appended; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+68h] [rbp-18h]

  v13[0] = 48LL;
  Object = 0LL;
  memset(&v13[1], 0, 24);
  v14 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v13, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_11;
  if ( a4 )
  {
    inserted = SepSetTokenTrust(Object, a5);
    if ( inserted < 0 )
      goto LABEL_11;
  }
  inserted = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
  if ( inserted < 0 )
    goto LABEL_11;
  v8 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v10 = *((_QWORD *)Object + 98);
    if ( v10 )
    {
      appended = SepAppendAceToTokenObjectAcl(Object, 983551LL, v10);
      v8 = Object;
      inserted = appended;
      if ( appended < 0 )
      {
        ObfDereferenceObject(Object);
LABEL_11:
        *a6 = 0LL;
        return (unsigned int)inserted;
      }
    }
  }
  SepFinalizeTokenAcls(v8);
  *a6 = Object;
  return (unsigned int)inserted;
}
