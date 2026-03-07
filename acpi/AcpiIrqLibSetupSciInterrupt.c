__int64 __fastcall AcpiIrqLibSetupSciInterrupt(unsigned __int16 a1, void *a2)
{
  ULONGLONG v2; // rdi
  _DWORD *Pool2; // rax
  _DWORD *UserData; // rbx
  __int64 result; // rax
  _DWORD *v7; // rsi
  char v8; // bp
  ULONGLONG v9; // rdx
  char v10; // al
  bool v11; // zf
  int v12; // eax
  __int64 v13; // r8
  __int128 v14; // [rsp+50h] [rbp-78h] BYREF
  __int128 v15; // [rsp+60h] [rbp-68h]
  _OWORD v16[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+90h] [rbp-38h]

  v2 = a1;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 120LL, 1232102209LL);
  UserData = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[12] = 0;
  v7 = Pool2 + 8;
  Pool2[8] = 0;
  *Pool2 = 1;
  v8 = 3;
  Pool2[2] = 1;
  v9 = v2;
  Pool2[11] = 2;
  if ( (unsigned int)v2 < 0x10 )
  {
    LODWORD(v2) = *((_DWORD *)&IsaVectorOverrides + 2 * v2);
    v10 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
    if ( v10 != -1 )
    {
      v8 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
      v11 = (v10 & 1) == 0;
      v12 = UserData[11];
      if ( v11 )
        v12 = 1;
      UserData[11] = v12;
    }
  }
  UserData[22] = v2;
  IrqLibSciGsiv = v2;
  RtlAddRange(RangeList, v9, v9, 0, 0x12u, UserData, a2);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _OWORD *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             a2,
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v16,
             1,
             0,
             1,
             1,
             &v14);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v14;
    UserData[9] = DWORD1(v15);
    result = IrqArbGetDeviceIrql(v7, UserData + 10);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      LOBYTE(v13) = v8;
      result = IcSetPossibleInput((unsigned int)v2, &v14, v13, 0LL);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference((unsigned int)v2, 0LL);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState(&IrqLibArbiterInstance, 0LL);
            result = IcCopyData(0LL);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(v7, a2);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
