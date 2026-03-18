/*
 * XREFs of LocalConvertStringSDToSD_Rev1 @ 0x14069BA60
 * Callers:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14020BC40 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x14069BD60 (RtlAbsoluteToSelfRelativeSD.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     SddlpAlloc @ 0x14069DF28 (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x14069E1D0 (LocalGetSidForString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140736AB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140782500 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x1407AA930 (RtlNtStatusToDosError.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF640 (RtlSetGroupSecurityDescriptor.c)
 *     LocalGetSDControlForString @ 0x14080B404 (LocalGetSDControlForString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

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
  __int64 v16; // rdx
  int v17; // eax
  void *v18; // rax
  int v19; // eax
  ULONG SidForString; // eax
  int v22; // eax
  int v23; // eax
  wchar_t *v24; // rax
  ULONG v25; // eax
  ULONG v26; // eax
  NTSTATUS v27; // eax
  __int64 v28; // [rsp+28h] [rbp-79h]
  __int64 v29; // [rsp+30h] [rbp-71h]
  __int64 v30; // [rsp+38h] [rbp-69h]
  int v31; // [rsp+40h] [rbp-61h]
  wchar_t *v32; // [rsp+48h] [rbp-59h] BYREF
  __int16 v33; // [rsp+50h] [rbp-51h]
  ULONG BufferLength; // [rsp+54h] [rbp-4Dh] BYREF
  PACL Dacl; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  void *v37; // [rsp+68h] [rbp-39h] BYREF
  void *v38; // [rsp+70h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v40; // [rsp+98h] [rbp-9h]
  __int64 v41; // [rsp+F8h] [rbp+57h] BYREF
  __int64 v42; // [rsp+100h] [rbp+5Fh] BYREF
  char v43; // [rsp+108h] [rbp+67h]
  __int16 v44; // [rsp+110h] [rbp+6Fh]

  v42 = a2;
  v41 = a1;
  v37 = 0LL;
  v38 = 0LL;
  v6 = a4;
  Dacl = 0LL;
  SDControlForString = 0;
  P = 0LL;
  v8 = 0LL;
  v40 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v10 = 0;
  LOBYTE(v42) = 0;
  LOBYTE(v41) = 0;
  BufferLength = 0;
  v43 = 0;
  v33 = 0;
  v44 = 0;
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
            v14 = v32;
          }
          LOBYTE(v31) = 0;
          v30 = 0LL;
          v29 = 0LL;
          v28 = 0LL;
          SDControlForString = LocalGetAclForString(v14);
          if ( SDControlForString )
            goto LABEL_29;
          v6 = v32;
          v10 = 1;
          break;
        case 'G':
          SDControlForString = 87;
          if ( v6[1] != 58 || v9 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(v6 + 2, &v38, &v32, &v41, v28, v29, v30, v31);
          v9 = v38;
          goto LABEL_40;
        case 'O':
          SDControlForString = 87;
          if ( v6[1] != 58 || v8 )
            goto LABEL_29;
          SidForString = LocalGetSidForString(v6 + 2, &v37, &v32, &v42, v28, v29, v30, v31);
          v8 = v37;
LABEL_40:
          SDControlForString = SidForString;
          if ( SidForString )
            goto LABEL_29;
          v6 = v32;
          break;
        case ' ':
          ++v6;
          break;
        default:
          if ( v13 != 83 || v6[1] != 58 || (v24 = v6 + 2, P) )
          {
LABEL_60:
            SDControlForString = 87;
            goto LABEL_29;
          }
          if ( *v24 != 40 )
          {
            SDControlForString = LocalGetSDControlForString(v24);
            if ( SDControlForString )
              goto LABEL_29;
            v24 = v32;
          }
          LOBYTE(v31) = 0;
          v30 = 0LL;
          v29 = 0LL;
          v28 = 0LL;
          SDControlForString = LocalGetAclForString(v24);
          if ( SDControlForString )
            goto LABEL_29;
          v6 = v32;
          v43 = 1;
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
  WORD1(SecurityDescriptor[0]) |= v33 | v44;
  if ( !SDControlForString )
  {
    if ( !v8
      || (v22 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 0), v22 >= 0)
      || (v25 = RtlNtStatusToDosError(v22), (SDControlForString = v25) == 0) )
    {
      if ( !v9
        || (v23 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v9, 0), v23 >= 0)
        || (v26 = RtlNtStatusToDosError(v23), (SDControlForString = v26) == 0) )
      {
        if ( !v10
          || (v17 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, v10, Dacl, 0), v17 >= 0)
          || (SDControlForString = RtlNtStatusToDosError(v17)) == 0 )
        {
          if ( !v43
            || (LOBYTE(v16) = v43, v27 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v16, P, 0LL), v27 >= 0)
            || (SDControlForString = RtlNtStatusToDosError(v27)) == 0 )
          {
            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, *v11, &BufferLength) == -1073741789 )
            {
              SDControlForString = 0;
              v18 = (void *)SddlpAlloc(BufferLength);
              *v11 = v18;
              if ( v18 )
              {
                v19 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v18, &BufferLength);
                if ( v19 >= 0 )
                  goto LABEL_27;
                SDControlForString = RtlNtStatusToDosError(v19);
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
  if ( (_BYTE)v42 == 1 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (_BYTE)v41 == 1 && v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Dacl )
    ExFreePoolWithTag(Dacl, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return SDControlForString;
}
