void PpmEventHgsNormalizedTable()
{
  ULONG MaximumProcessorCount; // edi
  unsigned int v1; // ebx
  _BYTE *Pool2; // rbx
  ULONG v3; // r9d
  ULONG v4; // eax
  _QWORD *v5; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // r11d
  char *v8; // r10
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // r8
  char v12; // al
  unsigned int v13; // [rsp+40h] [rbp-19h] BYREF
  ULONG v14; // [rsp+44h] [rbp-15h] BYREF
  int v15; // [rsp+48h] [rbp-11h] BYREF
  int v16; // [rsp+4Ch] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  ULONG *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  unsigned int *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int *v24; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]
  _BYTE *v27; // [rsp+90h] [rbp+37h]
  int v28; // [rsp+98h] [rbp+3Fh]
  int v29; // [rsp+9Ch] [rbp+43h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v14 = MaximumProcessorCount;
  v1 = *((_DWORD *)PpmHeteroCapability + 1);
  v13 = v1;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HGS_ORDER_VALUE_TABLE_RUNDOWN) )
    {
      v15 = MaximumProcessorCount * v1;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 11 * MaximumProcessorCount * v1, 1699565648LL);
      if ( Pool2 )
      {
        UserData.Reserved = 0;
        v3 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        UserData.Ptr = (ULONGLONG)&v16;
        v18 = &v14;
        v21 = &v13;
        v24 = &v15;
        v4 = v14;
        v16 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        UserData.Size = 4;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        if ( v14 )
        {
          v5 = PpmHeteroCapability;
          v6 = v13;
          do
          {
            v7 = 0;
            v8 = (char *)(v5[1] + v3);
            if ( v6 )
            {
              do
              {
                v9 = v7 + v3 * v6;
                v10 = PpmHeteroCapability;
                v11 = 11 * v9;
                Pool2[v11 + 9] = *((_BYTE *)PpmHeteroCapability + 4 * v9 + 25);
                Pool2[v11 + 10] = v10[4 * v9 + 24];
                v12 = *v8;
                *(_DWORD *)&Pool2[v11 + 4] = v7++;
                Pool2[v11 + 8] = v12;
                *(_DWORD *)&Pool2[v11] = v3;
                v6 = v13;
              }
              while ( v7 < v13 );
              v4 = v14;
            }
            ++v3;
          }
          while ( v3 < v4 );
        }
        v29 = 0;
        v27 = Pool2;
        v28 = 11 * v15;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_HGS_ORDER_VALUE_TABLE_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
