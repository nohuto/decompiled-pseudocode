__int64 __fastcall DrvDbGetDriverPackageSignerName(
        __int64 a1,
        __int64 a2,
        void *a3,
        _WORD *a4,
        int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rbx
  __int64 (**v8)[3]; // r10
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 (**v13)[3]; // r8
  int v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v16 = HIDWORD(a2);
  v6 = a6;
  v15 = 0;
  v8 = &off_140004640;
  *a6 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (__int64 *)*v8;
    if ( LODWORD((**v8)[2]) == 7 )
    {
      v11 = *v10 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *v10 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v11 = v10[1] + 0x4524B8338B5D1E6CLL;
      if ( !v11 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    v8 += 5;
    if ( (unsigned int)v9 >= 0x22 )
      return 3221225701LL;
  }
  v13 = &off_140004640 + 5 * v9;
  if ( !v13 )
    return 3221225701LL;
  result = DrvDbGetRegValueMappedProperty((__int64)&v15, a3, (__int64)v13, &v14, a4, 2 * a5, &v15);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
    *v6 = v15 >> 1;
  return result;
}
