void __fastcall PopDiagTraceAppPowerMessage(HANDLE *a1)
{
  NTSTATUS v2; // eax
  PEPROCESS v3; // rbx
  unsigned __int16 *v4; // r8
  int v5; // ecx
  __int16 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int16 *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v6 = 0;
  v7 = 0;
  Process = 0LL;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP) )
  {
    v2 = PsLookupProcessByProcessId(*a1, &Process);
    v3 = Process;
    if ( v2 >= 0 )
    {
      v4 = (unsigned __int16 *)Process[1].ActiveProcessors.StaticBitmap[2];
      v7 = *(_DWORD *)a1;
      v6 = *v4 >> 1;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = &v6;
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = 2LL;
      v5 = *v4;
      v12 = *((_QWORD *)v4 + 1);
      v13 = v5;
      v14 = 0;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SUSPENDAPP, 0LL, 3u, &UserData);
    }
    if ( v3 )
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
}
