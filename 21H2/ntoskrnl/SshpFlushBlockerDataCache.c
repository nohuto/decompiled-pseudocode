/*
 * XREFs of SshpFlushBlockerDataCache @ 0x1408FAB60
 * Callers:
 *     SshpSendSessionData @ 0x1408FAE08 (SshpSendSessionData.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SSHSupportEtwWrite @ 0x140580F30 (SSHSupportEtwWrite.c)
 */

__int64 __fastcall SshpFlushBlockerDataCache(ULONG *a1)
{
  ULONG v2; // r11d
  ULONG v3; // ebx
  ULONGLONG v4; // rsi
  ULONG v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONGLONG v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  ULONG i; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+40h] [rbp-C0h] BYREF
  ULONG *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]

  v20 = 0;
  v18 = 0;
  v21 = 0;
  if ( SshpTraceHandleRegistered )
  {
    v2 = a1[4];
    if ( v2 )
    {
      v3 = 0;
      v4 = (ULONGLONG)(a1 + 2);
      i = 0;
      do
      {
        v5 = v3 + 4 * v3 + 2;
        v6 = 2LL * (v5 + 2);
        v20 = **(unsigned __int16 **)&a1[6 * v3 + 6] >> 1;
        v7 = 2LL * (v5 + 1);
        v21 = LOWORD(a1[6 * v3 + 8]) >> 1;
        v8 = 2LL * v5;
        *(&v22.Ptr + v8) = v4;
        *((_QWORD *)&v22.Size + v8) = 16LL;
        *(&v22.Ptr + v7) = (ULONGLONG)&v20;
        *((_QWORD *)&v22.Size + v7) = 4LL;
        v9 = *(unsigned __int16 **)&a1[6 * v3 + 6];
        v10 = *v9;
        *(&v22.Ptr + v6) = *((_QWORD *)v9 + 1);
        v11 = 2LL * (v5 + 3);
        *(&v22.Size + 2 * v6) = v10;
        *(&v22.Reserved + 2 * v6) = 0;
        *(&v22.Ptr + v11) = (ULONGLONG)&v21;
        *((_QWORD *)&v22.Size + v11) = 4LL;
        LODWORD(v6) = LOWORD(a1[6 * v3 + 8]);
        v12 = 2LL * (v5 + 4);
        v13 = *(_QWORD *)&a1[6 * ++v3 + 4];
        i = v3;
        *(&v22.Size + 2 * v12) = v6;
        *(&v22.Ptr + v12) = v13;
        *(&v22.Reserved + 2 * v12) = 0;
      }
      while ( v3 < v2 );
      v18 = SshpSessionId;
      *(_QWORD *)&v22.Size = 1LL;
      v22.Ptr = (ULONGLONG)&v18;
      v24 = 4LL;
      v23 = &i;
      v14 = 2LL * (v2 + 4 * v2 + 2);
      *(&v22.Ptr + v14) = (ULONGLONG)&SshpSessionId;
      *((_QWORD *)&v22.Size + v14) = 8LL;
      SSHSupportEtwWrite(v14, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v10, v3 + 4 * v3 + 3, &v22);
    }
  }
  result = 0LL;
  for ( i = 0; (unsigned int)result < a1[4]; i = result )
  {
    v16 = result + 1;
    v17 = 3 * v16;
    CmpFreeTransientPoolWithTag(*(void **)&a1[6 * v16 + 4], *a1);
    *(_OWORD *)&a1[2 * v17] = 0LL;
    *(_QWORD *)&a1[2 * v17 + 4] = 0LL;
    result = i + 1;
  }
  a1[4] = 0;
  return result;
}
