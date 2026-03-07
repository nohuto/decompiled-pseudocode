void __fastcall PpmEventHgsHardwareTable(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  unsigned int v3; // edi
  _BYTE *Pool2; // rbx
  unsigned int v5; // edi
  __int64 Prcb; // rax
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned int i; // eax
  char v10; // r8
  __int64 v11; // rcx
  char v12; // al
  unsigned int v13; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-45h] BYREF
  int v15; // [rsp+40h] [rbp-41h] BYREF
  int v16; // [rsp+44h] [rbp-3Dh] BYREF
  ULONG MaximumProcessorCount; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 *v18[2]; // [rsp+50h] [rbp-31h] BYREF
  __int16 v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+62h] [rbp-1Fh]
  __int16 v21; // [rsp+66h] [rbp-1Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+78h] [rbp-9h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  unsigned int *v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  int *v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  _BYTE *v29; // [rsp+A8h] [rbp+27h]
  int v30; // [rsp+B0h] [rbp+2Fh]
  int v31; // [rsp+B4h] [rbp+33h]

  v20 = 0;
  v21 = 0;
  v14 = 0;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_HGS_RAW_HARDWARE_TABLE_RUNDOWN;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( !a1 )
    v2 = &PPM_ETW_HGS_RAW_HARDWARE_TABLE_CHANGED;
  v3 = *((_DWORD *)PpmHeteroCapability + 1);
  v13 = v3;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v2) )
    {
      v15 = MaximumProcessorCount * v3;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 10 * MaximumProcessorCount * v3, 1699565648LL);
      if ( Pool2 )
      {
        UserData.Ptr = (ULONGLONG)&v16;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v25 = &v13;
        v27 = &v15;
        v18[1] = (unsigned __int16 *)qword_140C0BD78[0];
        v18[0] = (unsigned __int16 *)&PpmCheckRegistered;
        v16 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        *(_QWORD *)&UserData.Size = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v19 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v18) )
        {
          v5 = v14;
          Prcb = KeGetPrcb(v14);
          v7 = 0;
          v8 = *(_QWORD *)(Prcb + 34128);
          for ( i = v13; v7 < v13; i = v13 )
          {
            v10 = *(_BYTE *)(v8 + 4LL * v7 + 7);
            v11 = 5LL * (v7 + v5 * i);
            v12 = *(_BYTE *)(v8 + 4LL * v7 + 6);
            *(_DWORD *)&Pool2[2 * v11 + 4] = v7++;
            Pool2[2 * v11 + 8] = v12;
            Pool2[2 * v11 + 9] = v10;
            *(_DWORD *)&Pool2[2 * v11] = v5;
          }
        }
        v29 = Pool2;
        v31 = 0;
        v30 = 10 * v15;
        EtwWrite(PpmEtwHandle, v2, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
