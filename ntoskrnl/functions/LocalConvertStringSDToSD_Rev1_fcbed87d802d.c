__int64 __fastcall LocalConvertStringSDToSD_Rev1(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, PVOID *a5, ULONG *a6)
{
  wchar_t *v6; // rax
  ULONG SDControlForString; // ebx
  void *v8; // r14
  void *v9; // rsi
  BOOLEAN v10; // r13
  PVOID *v11; // r15
  ULONG *v12; // r12
  wchar_t v13; // cx
  wchar_t *v14; // rax
  int v15; // eax
  int v16; // eax
  void *v17; // rax
  int v18; // eax
  ULONG SidForString; // eax
  int v21; // eax
  int v22; // eax
  wchar_t *v23; // rax
  ULONG v24; // eax
  ULONG v25; // eax
  NTSTATUS v26; // eax
  __int64 v27; // [rsp+28h] [rbp-79h]
  __int64 v28; // [rsp+30h] [rbp-71h]
  __int64 v29; // [rsp+38h] [rbp-69h]
  int v30; // [rsp+40h] [rbp-61h]
  wchar_t *v31; // [rsp+48h] [rbp-59h] BYREF
  __int16 v32; // [rsp+50h] [rbp-51h]
  ULONG BufferLength; // [rsp+54h] [rbp-4Dh] BYREF
  PACL Dacl; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  void *v36; // [rsp+68h] [rbp-39h] BYREF
  void *v37; // [rsp+70h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v39; // [rsp+98h] [rbp-9h]
  __int64 v40; // [rsp+F8h] [rbp+57h] BYREF
  __int64 v41; // [rsp+100h] [rbp+5Fh] BYREF
  char v42; // [rsp+108h] [rbp+67h]
  __int16 v43; // [rsp+110h] [rbp+6Fh]

  v41 = a2;
  v40 = a1;
  v36 = 0LL;
  v37 = 0LL;
  v6 = a4;
  Dacl = 0LL;
  SDControlForString = 0;
  P = 0LL;
  v8 = 0LL;
  v39 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 0;
  LOBYTE(v41) = 0;
  LOBYTE(v40) = 0;
  BufferLength = 0;
  v42 = 0;
  v32 = 0;
  v43 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a4 )
    return 87LL;
  v11 = a5;
  if ( !a5 )
    return 87LL;
  v12 = a6;
  if ( a6 )
    *a6 = 0;
  while ( v6 )
  {
    v13 = *v6;
    if ( *v6 )
    {
      switch ( v13 )
      {
        case 'D':
          if ( v6[1] != 58 )
            goto LABEL_60;
          v14 = v6 + 2;
          if ( Dacl )
            goto LABEL_60;
          if ( *v14 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v14);
            if ( SDControlForString )
              goto LABEL_29;
            v14 = v31;
          }
          LOBYTE(v30) = 0;
          v29 = 0LL;
          v28 = 0LL;
          v27 = 0LL;
          SDControlForString = LocalGetAclForString(v14);
          if ( SDControlForString )
            goto LABEL_29;
          v6 = v31;
          v10 = 1;
          break;
        case 'G':
          SDControlForString = 87;
          if ( v6[1] != 58 || v9 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(v6 + 2, &v37, &v31, &v40, v27, v28, v29, v30);
          v9 = v37;
          goto LABEL_40;
        case 'O':
          SDControlForString = 87;
          if ( v6[1] != 58 || v8 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(v6 + 2, &v36, &v31, &v41, v27, v28, v29, v30);
          v8 = v36;
LABEL_40:
          SDControlForString = SidForString;
          if ( SidForString )
            goto LABEL_29;
          v6 = v31;
          break;
        case ' ':
          ++v6;
          break;
        default:
          if ( v13 != 83 || v6[1] != 58 || (v23 = v6 + 2, P) )
          {
LABEL_60:
            SDControlForString = 87;
            goto LABEL_29;
          }
          if ( *v23 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v23);
            if ( SDControlForString )
              goto LABEL_29;
            v23 = v31;
          }
          LOBYTE(v30) = 0;
          v29 = 0LL;
          v28 = 0LL;
          v27 = 0LL;
          SDControlForString = LocalGetAclForString(v23);
          if ( SDControlForString )
            goto LABEL_29;
          v6 = v31;
          v42 = 1;
          break;
      }
    }
    else
    {
      v6 = 0LL;
    }
  }
  v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v15 < 0 )
    SDControlForString = RtlNtStatusToDosError(v15);
  WORD1(SecurityDescriptor[0]) |= v32 | v43;
  if ( !SDControlForString )
  {
    if ( !v8
      || (v21 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 0), v21 >= 0)
      || (v24 = RtlNtStatusToDosError(v21), (SDControlForString = v24) == 0) )
    {
      if ( !v9
        || (v22 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0), v22 >= 0)
        || (v25 = RtlNtStatusToDosError(v22), (SDControlForString = v25) == 0) )
      {
        if ( !v10
          || (v16 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, v10, Dacl, 0), v16 >= 0)
          || (SDControlForString = RtlNtStatusToDosError(v16)) == 0 )
        {
          if ( !v42
            || (v26 = RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, v42, (__int64)P, 0), v26 >= 0)
            || (SDControlForString = RtlNtStatusToDosError(v26)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v11, &BufferLength) == -1073741789 )
            {
              SDControlForString = 0;
              v17 = (void *)SddlpAlloc(BufferLength);
              *v11 = v17;
              if ( v17 )
              {
                v18 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v17, &BufferLength);
                if ( v18 >= 0 )
                  goto LABEL_27;
                SDControlForString = RtlNtStatusToDosError(v18);
                if ( *v11 )
                  ExFreePoolWithTag(*v11, 0);
                *v11 = 0LL;
                if ( !SDControlForString )
                {
LABEL_27:
                  if ( v12 )
                    *v12 = BufferLength;
                }
              }
              else
              {
                SDControlForString = 8;
              }
            }
            else
            {
              SDControlForString = 122;
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (_BYTE)v41 == 1 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (_BYTE)v40 == 1 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return SDControlForString;
}
