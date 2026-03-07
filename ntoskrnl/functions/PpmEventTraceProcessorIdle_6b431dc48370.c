void __fastcall PpmEventTraceProcessorIdle(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  unsigned int v4; // eax
  ULONG v5; // ebp
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r9
  struct _EVENT_DATA_DESCRIPTOR *v11; // rcx
  const wchar_t *v12; // r10
  __int64 v13; // rcx
  int v14; // eax
  __int16 v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN) )
  {
    v2 = *(_QWORD *)(a1 + 33600);
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 + 40);
      v16 = v4;
      v3 = *(_DWORD *)(v2 + 44);
    }
    else
    {
      v16 = 0;
      v3 = 0;
      v4 = 0;
    }
    v5 = 2 * v4 + 4;
    v17 = v3;
    Pool2 = ExAllocatePool2(256LL, 16 * v5 + 37 * v4, 1699565648LL);
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
    if ( Pool2 )
    {
      v8 = 0;
      v15 = *(unsigned __int8 *)(a1 + 208);
      *(_DWORD *)(Pool2 + 12) = 0;
      *(_DWORD *)(Pool2 + 28) = 0;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_DWORD *)(Pool2 + 60) = 0;
      v9 = Pool2 + 16LL * v5;
      *(_DWORD *)(Pool2 + 8) = 2;
      *(_DWORD *)(Pool2 + 24) = 1;
      *(_QWORD *)Pool2 = &v15;
      *(_QWORD *)(Pool2 + 16) = a1 + 209;
      *(_QWORD *)(Pool2 + 32) = &v17;
      *(_QWORD *)(Pool2 + 48) = &v16;
      *(_DWORD *)(Pool2 + 40) = 4;
      for ( *(_DWORD *)(Pool2 + 56) = 4; v8 < v16; UserData[v13].Reserved = 0 )
      {
        v10 = 344LL * v8;
        v11 = &UserData[2 * v8 + 4];
        *(_DWORD *)v9 = *(_DWORD *)(v10 + v2 + 1392);
        *(_DWORD *)(v9 + 4) = *(_DWORD *)(v10 + v2 + 1396);
        *(_BYTE *)(v9 + 8) = *(_BYTE *)(v10 + v2 + 1448);
        *(_DWORD *)(v9 + 9) = *(unsigned __int8 *)(v10 + v2 + 1449);
        *(_DWORD *)(v9 + 13) = *(unsigned __int8 *)(v10 + v2 + 1450);
        *(_DWORD *)(v9 + 17) = *(unsigned __int8 *)(v10 + v2 + 1451);
        *(_DWORD *)(v9 + 21) = *(unsigned __int8 *)(v10 + v2 + 1452);
        *(_DWORD *)(v9 + 25) = *(unsigned __int8 *)(v10 + v2 + 1453);
        *(_DWORD *)(v9 + 29) = *(unsigned __int8 *)(v10 + v2 + 1454);
        *(_DWORD *)(v9 + 33) = *(unsigned __int8 *)(v10 + v2 + 1455);
        v11->Reserved = 0;
        v11->Ptr = v9;
        v11->Size = 37;
        v12 = *(const wchar_t **)(v10 + v2 + 1384);
        v13 = 2 * v8 + 5;
        if ( v12 )
        {
          v14 = *(unsigned __int16 *)(v10 + v2 + 1378);
        }
        else
        {
          v14 = 28;
          v12 = L"<unspecified>";
        }
        UserData[2 * v8 + 5].Ptr = (ULONGLONG)v12;
        v9 += 37LL;
        UserData[2 * v8++ + 5].Size = v14;
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_IDLE_RUNDOWN, 0LL, v5, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
