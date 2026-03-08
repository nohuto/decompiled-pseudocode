/*
 * XREFs of CmpTraceHiveSaveStart @ 0x140A101D4
 * Callers:
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  __int64 v2; // r8
  ULONGLONG *v3; // rbx
  ULONG v4; // ecx
  __int16 v5; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG *v6; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v5 = 0;
    v6 = 0LL;
    CmpConstructNameWithStatus(a1, &v6, v2);
    v3 = v6;
    if ( v6 )
    {
      v4 = *(unsigned __int16 *)v6;
      UserData.Ptr = v6[1];
      UserData.Size = v4;
      v9 = &v5;
      UserData.Reserved = 0;
      v10 = 2LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
      CmpFreeTransientPoolWithTag(v3, 0x624E4D43u);
    }
  }
}
