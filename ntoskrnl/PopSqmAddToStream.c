/*
 * XREFs of PopSqmAddToStream @ 0x14059FD10
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

NTSTATUS __fastcall PopSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  const wchar_t **v6; // r10
  unsigned int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  __int64 *v10; // rdx
  __int64 v11; // rcx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // r8
  __int64 v14; // rax
  ULONG v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+80h] [rbp-88h]
  int *v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _BYTE v28[432]; // [rsp+A8h] [rbp-60h] BYREF

  v19 = 11131;
  v20 = 4;
  result = (unsigned int)memset(v28, 0, sizeof(v28));
  v18 = 11;
  if ( PopDiagHandleRegistered && a4 )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v18;
    v6 = (const wchar_t **)(a4 + 8);
    v23 = 16LL;
    v22 = qword_140040FE0;
    v7 = 0;
    v25 = 4LL;
    v24 = &v19;
    v26 = &v20;
    v27 = 4LL;
    do
    {
      v8 = 3 * v7;
      v9 = *((_DWORD *)v6 - 2);
      v10 = &qword_140040FF0;
      if ( v9 == 1 )
        v10 = (__int64 *)v6;
      *(&UserData.Ptr + 2 * (unsigned int)(v8 + 4)) = (ULONGLONG)(v6 - 1);
      *((_QWORD *)&UserData.Size + 2 * (unsigned int)(v8 + 4)) = 4LL;
      v11 = 2LL * (unsigned int)(v8 + 5);
      *(&UserData.Ptr + v11) = (ULONGLONG)v10;
      *((_QWORD *)&UserData.Size + v11) = 4LL;
      if ( v9 == 2 )
      {
        v12 = *v6;
        v13 = *v6;
      }
      else
      {
        v12 = L"0";
        v13 = L"0";
      }
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
      v6 += 2;
      v16 = v7 + 2;
      ++v7;
      v17 = 6LL * v16;
      *(&UserData.Ptr + v17) = (ULONGLONG)v13;
      *(&UserData.Size + 2 * v17) = v15;
      *(&UserData.Reserved + 2 * v17) = 0;
    }
    while ( v7 < 4 );
    return EtwWriteEx(PopDiagHandle, &PopSqm_Add_StreamRow, 0LL, 0, 0LL, 0LL, 0x1Fu, &UserData);
  }
  return result;
}
