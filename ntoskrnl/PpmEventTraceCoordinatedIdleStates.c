/*
 * XREFs of PpmEventTraceCoordinatedIdleStates @ 0x140995CC8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PpmEventTraceCoordinatedIdleStates()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v5; // r9d
  _DWORD *v6; // r8
  int v7; // edx
  __int64 v8; // r11
  struct _EVENT_DATA_DESCRIPTOR *v9; // rcx
  const wchar_t *v10; // r10
  int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN) )
  {
    v0 = PpmPlatformStates;
    v1 = PpmPlatformStates ? *(_DWORD *)PpmPlatformStates : 0;
    v12 = v1;
    v2 = 2 * v1 + 1;
    Pool2 = ExAllocatePool2(256LL, 16 * v2 + 12 * v1, 1699565648LL);
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 12) = 0;
      v5 = 0;
      v6 = (_DWORD *)(Pool2 + 16LL * v2);
      *(_DWORD *)(Pool2 + 8) = 4;
      for ( *(_QWORD *)Pool2 = &v12; v5 < v12; UserData[v7 + 2].Reserved = 0 )
      {
        v7 = 2 * v5;
        v8 = 448LL * v5;
        v9 = &UserData[2 * v5 + 1];
        *v6 = *(_DWORD *)(v8 + v0 + 72);
        v6[1] = *(_DWORD *)(v8 + v0 + 76);
        v6[2] = *(unsigned __int8 *)(v8 + v0 + 121);
        v9->Reserved = 0;
        v9->Ptr = (ULONGLONG)v6;
        v9->Size = 12;
        v10 = *(const wchar_t **)(v8 + v0 + 400);
        if ( v10 )
        {
          v11 = *(unsigned __int16 *)(v8 + v0 + 394);
        }
        else
        {
          v11 = 28;
          v10 = L"<unspecified>";
        }
        UserData[v7 + 2].Ptr = (ULONGLONG)v10;
        v6 += 3;
        UserData[v7 + 2].Size = v11;
        ++v5;
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
