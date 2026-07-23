/*
 * XREFs of CmpFindControlSet @ 0x1407ACF80
 * Callers:
 *     CmpGetSystemControlValues @ 0x140A5FC0C (CmpGetSystemControlValues.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A60258 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D74F0 (sprintf_s.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x1406E242C (CmpFindValueByName.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACD38 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpValueToData @ 0x1407AD334 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v6; // r12d
  __int64 (__fastcall *v7)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int ValueByName; // edi
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rax
  NTSTATUS v17; // eax
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // edi
  __int64 v22; // rax
  _DWORD *v23; // rax
  _BYTE *v25; // rdi
  __int64 *v26; // rdx
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v30[3]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  char DstBuf[128]; // [rsp+90h] [rbp-70h] BYREF
  char v37; // [rsp+110h] [rbp+10h] BYREF

  v30[2] = 0;
  v30[1] = 0;
  v28[1] = 0;
  v6 = a2;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  DestinationString = 0LL;
  v30[0] = -1;
  SourceString = 0LL;
  v29 = 0xFFFFFFFFLL;
  v34 = 0xFFFFFFFFLL;
  v28[0] = -1;
  v33 = 0xFFFFFFFFLL;
  v9 = v7(BugCheckParameter3, a2, v28);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  v27 = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, &DestinationString.Length, &v27);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
  if ( v27 == -1 )
    return 0xFFFFFFFFLL;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v27, v28);
  if ( !v10 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (__int64)&DestinationString);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
  if ( ValueByName == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v30) )
      return 0xFFFFFFFFLL;
    v25 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v33);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
    if ( !v25 )
      return 0xFFFFFFFFLL;
    *a4 = *v25;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v33);
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v27, v28);
  if ( v12 )
  {
    v13 = CmpFindValueByName(BugCheckParameter3, v12, a3);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
    if ( v13 != -1 )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v13,
              v30);
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 12) != 4 )
        {
          v26 = (__int64 *)v30;
          goto LABEL_30;
        }
        v15 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v29);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
        if ( v15 )
        {
          sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v15);
          v16 = -1LL;
          do
            ++v16;
          while ( DstBuf[v16] );
          SourceString.MaximumLength = v16;
          SourceString.Length = v16;
          *(_DWORD *)&DestinationString.Length = 0x1000000;
          SourceString.Buffer = DstBuf;
          DestinationString.Buffer = (wchar_t *)&v37;
          v17 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
          v18 = BugCheckParameter3;
          if ( v17 < 0
            || (v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v6,
                        v28),
                v18 = BugCheckParameter3,
                !v19)
            || (v31 = 0,
                CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v19, &DestinationString.Length, &v31),
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28),
                v18 = BugCheckParameter3,
                v31 == -1) )
          {
            v26 = &v29;
            goto LABEL_32;
          }
          v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v27,
                  v28);
          if ( v20 )
          {
            RtlInitUnicodeString(&DestinationString, L"Current");
            v21 = CmpFindValueByName(BugCheckParameter3, v20, (__int64)&DestinationString);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
            if ( v21 == -1 )
            {
LABEL_23:
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v29);
              return v31;
            }
            v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v21,
                    v30);
            if ( v22 )
            {
              if ( *(_DWORD *)(v22 + 12) != 4 )
              {
LABEL_22:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
                goto LABEL_23;
              }
              v23 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v34);
              if ( v23 )
              {
                *v23 = *v15;
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
                goto LABEL_22;
              }
            }
          }
          v26 = &v29;
LABEL_30:
          v18 = BugCheckParameter3;
LABEL_32:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(v18, v26);
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
