/*
 * XREFs of PpmEventTraceProcessorIdle @ 0x1408F36F0
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  unsigned int v4; // eax
  ULONG v5; // ebp
  unsigned int v6; // r14d
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v9; // r8d
  struct _EVENT_DATA_DESCRIPTOR *v10; // rdx
  __int64 v11; // r9
  struct _EVENT_DATA_DESCRIPTOR *v12; // rcx
  const wchar_t *v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  __int16 v16; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 0x8000);
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 + 32);
      v17 = v4;
      v3 = *(_DWORD *)(v2 + 36);
    }
    else
    {
      v17 = 0;
      v3 = 0;
      v4 = 0;
    }
    v18 = v3;
    v5 = 2 * v4 + 4;
    v6 = 16 * v5 + 37 * v4;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v6, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v16 = *(unsigned __int8 *)(a1 + 208);
      v9 = 0;
      UserData->Reserved = 0;
      UserData[1].Reserved = 0;
      UserData[2].Reserved = 0;
      UserData[3].Reserved = 0;
      UserData->Ptr = (ULONGLONG)&v16;
      UserData[1].Ptr = a1 + 209;
      UserData[2].Ptr = (ULONGLONG)&v18;
      v10 = &UserData[v5];
      UserData[3].Ptr = (ULONGLONG)&v17;
      UserData->Size = 2;
      UserData[1].Size = 1;
      UserData[2].Size = 4;
      for ( UserData[3].Size = 4; v9 < v17; UserData[v14].Reserved = 0 )
      {
        v11 = 248LL * v9;
        v12 = &UserData[2 * v9 + 4];
        LODWORD(v10->Ptr) = *(_DWORD *)(v11 + v2 + 1000);
        HIDWORD(v10->Ptr) = *(_DWORD *)(v11 + v2 + 1004);
        LOBYTE(v10->Size) = *(_BYTE *)(v11 + v2 + 1056);
        *(ULONG *)((char *)&v10->Size + 1) = *(unsigned __int8 *)(v11 + v2 + 1057);
        *(ULONG *)((char *)&v10->Reserved + 1) = *(unsigned __int8 *)(v11 + v2 + 1058);
        *(_DWORD *)((char *)&v10[1].Ptr + 1) = *(unsigned __int8 *)(v11 + v2 + 1059);
        *(_DWORD *)((char *)&v10[1].Ptr + 5) = *(unsigned __int8 *)(v11 + v2 + 1060);
        *(ULONG *)((char *)&v10[1].Size + 1) = *(unsigned __int8 *)(v11 + v2 + 1061);
        *(ULONG *)((char *)&v10[1].Reserved + 1) = *(unsigned __int8 *)(v11 + v2 + 1062);
        *(_DWORD *)((char *)&v10[2].Ptr + 1) = *(unsigned __int8 *)(v11 + v2 + 1063);
        v12->Reserved = 0;
        v12->Ptr = (ULONGLONG)v10;
        v12->Size = 37;
        v13 = *(const wchar_t **)(v11 + v2 + 992);
        v14 = 2 * v9 + 5;
        if ( v13 )
        {
          v15 = *(unsigned __int16 *)(v11 + v2 + 986);
        }
        else
        {
          v15 = 28;
          v13 = L"<unspecified>";
        }
        UserData[2 * v9 + 5].Ptr = (ULONGLONG)v13;
        v10 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v10 + 37);
        UserData[2 * v9++ + 5].Size = v15;
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v5, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
