/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x18001A1F0
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     RtlDoesFileExists_UEx @ 0x180046798 (RtlDoesFileExists_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DF5E0 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18001A320 (RtlReleaseRelativeName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009DC80 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(int a1, char a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+40h] [rbp-49h] BYREF
  __int128 v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 v10; // [rsp+60h] [rbp-29h]
  int v11; // [rsp+70h] [rbp-19h] BYREF
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int128 *v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  __int128 v15; // [rsp+90h] [rbp+7h]
  _BYTE v16[40]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, a1, 0, (unsigned int)&v8, 0LL, 0LL, (__int64)&v9) < 0 )
    return 0;
  v4 = *((_QWORD *)&v8 + 1);
  if ( (_WORD)v9 )
  {
    v5 = v10;
    v8 = v9;
  }
  else
  {
    v5 = 0LL;
    v10 = 0LL;
  }
  v12 = v5;
  v11 = 48;
  v13 = &v8;
  v14 = 64;
  v15 = 0LL;
  v6 = ZwQueryAttributesFile(&v11, v16);
  RtlReleaseRelativeName(&v9);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741790 || v6 == -1073741757 )
    return a2 != 0;
  return v2;
}
