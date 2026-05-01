/*
 * XREFs of ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18003F964
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003F710 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     RtlQueryResourcePolicy @ 0x18003FA7C (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemGetQuiesceSerializationConfig(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  char v4; // r9
  int v5; // r10d
  char v7; // [rsp+30h] [rbp-29h] BYREF
  char v8; // [rsp+31h] [rbp-28h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-19h] BYREF
  int *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  char *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  char *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  __int64 *v18; // [rsp+90h] [rbp+37h]
  __int64 v19; // [rsp+98h] [rbp+3Fh]

  v9 = 0;
  v2 = 2;
  if ( (int)RtlQueryResourcePolicy(2LL, a2, &v9) < 0 )
  {
    v2 = 0;
  }
  else if ( v9 > 10 )
  {
    v2 = 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v7 = v4;
    v18 = &v10;
    v10 = 0x1000000LL;
    v16 = &v7;
    v8 = v2;
    v14 = &v8;
    v9 = v5;
    v12 = &v9;
    v19 = 8LL;
    v17 = 1LL;
    v15 = 1LL;
    v13 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18009E9B1, 0LL, 0LL, 6u, &v11);
  }
  return v2;
}
