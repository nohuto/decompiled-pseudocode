/*
 * XREFs of PopIsSystemIdle @ 0x14073BC88
 * Callers:
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopAssessSystemIdleEvent @ 0x14073BD8C (PopAssessSystemIdleEvent.c)
 */

bool __fastcall PopIsSystemIdle(__int64 a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned int i; // esi
  bool v11; // bl
  unsigned __int128 v12; // rax
  bool v13; // zf
  REGHANDLE v14; // rdi
  unsigned __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-31h] BYREF
  int v18; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-21h] BYREF
  int *v20; // [rsp+58h] [rbp-11h]
  __int64 v21; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v22; // [rsp+68h] [rbp-1h]
  __int64 v23; // [rsp+70h] [rbp+7h]

  v16 = 0LL;
  v4 = 0;
  v5 = -1LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned int)PopAssessSystemIdleEvent(a1, a2, &v16) )
      v4 |= 1 << i;
    if ( v5 >= v16 )
      v5 = v16;
    a1 += 56LL;
  }
  *a3 = v5;
  v11 = v4 == 0;
  v12 = MEMORY[0xFFFFF78000000008] * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  *(_DWORD *)(a4 + 8) = a2;
  v13 = PopDiagHandleRegistered == 0;
  *(_QWORD *)a4 = *((_QWORD *)&v12 + 1) >> 23;
  *(_DWORD *)(a4 + 12) = v4;
  *(_BYTE *)(a4 + 16) = v4 == 0;
  v18 = v4;
  v17 = a2;
  if ( !v13 )
  {
    v14 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_ASSESSMENT) )
    {
      UserData.Ptr = (ULONGLONG)&v17;
      LODWORD(v16) = v11;
      v20 = &v18;
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = &v16;
      v21 = 4LL;
      v23 = 4LL;
      EtwWrite(v14, &POP_ETW_EVENT_SYSTEM_IDLE_ASSESSMENT, 0LL, 3u, &UserData);
    }
  }
  return v11;
}
