/*
 * XREFs of PnpDiagRundownParentPdoForEachDevice @ 0x140954F60
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagRundownParentPdoForEachDevice(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  if ( !*(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = a1 + 32;
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
      v2 = *(_QWORD *)(v1 + 32);
    else
      v2 = 0LL;
    v4 = v2;
    v7 = 8LL;
    v6 = &v4;
    EtwWrite(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo, 0LL, 2u, &UserData);
  }
  return 0LL;
}
