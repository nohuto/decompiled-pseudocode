__int64 __fastcall IrqLibAllocateMessageTarget(
        PVOID Owner,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        _DWORD *a6,
        _BYTE *a7,
        _DWORD *a8)
{
  NTSTATUS Range; // edi
  char *Pool2; // rax
  void *v13; // rbx
  int v14; // eax
  ULONGLONG End; // [rsp+58h] [rbp-81h] BYREF
  int v18; // [rsp+60h] [rbp-79h]
  __int128 v19; // [rsp+68h] [rbp-71h] BYREF
  __int128 v20; // [rsp+78h] [rbp-61h]
  __int128 v21; // [rsp+88h] [rbp-51h] BYREF
  __int128 v22; // [rsp+98h] [rbp-41h]
  _OWORD v23[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-11h]

  v18 = a3;
  v24 = 0LL;
  End = 0LL;
  memset(v23, 0, sizeof(v23));
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !KeGetCurrentIrql() && (unsigned int)(IrqLibRealInterruptModel - 1) <= 3 )
  {
    IrqLibAcquireArbiterLock(1);
    Range = RtlFindRange(RangeList, 0xFFF00000uLL, 0xFFFFFFFEuLL, 1u, 1u, 0, 0, 0LL, 0LL, &End);
    if ( Range >= 0 )
    {
      BYTE1(v19) = 2;
      DWORD1(v20) = 2;
      BYTE2(v19) = a5 != 0 ? 3 : 1;
      WORD2(v19) = 5 - (a4 != 1);
      LOWORD(v20) = 4;
      WORD1(v20) = *(_WORD *)(a2 + 8);
      *((_QWORD *)&v20 + 1) = *(_QWORD *)a2;
      Range = ((__int64 (__fastcall *)(PVOID, __int128 *, _QWORD, _OWORD *, int, bool, _DWORD, _DWORD, __int128 *))ProcessorReserveIdtEntries)(
                Owner,
                &v19,
                (unsigned int)End,
                v23,
                a3,
                a4 == 1,
                0,
                0,
                &v21);
      if ( Range >= 0 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, 120LL, 1232102209LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)Pool2 = 1;
          *((_DWORD *)Pool2 + 1) = 2;
          *((_DWORD *)Pool2 + 2) = 3;
          Pool2[26] = v18;
          *((_DWORD *)Pool2 + 11) = 0;
          *((_DWORD *)Pool2 + 12) = a4 == 1;
          *(_OWORD *)(Pool2 + 56) = v21;
          Range = RtlAddRange(RangeList, End, End, 0, 0x10u, Pool2, Owner);
          if ( Range >= 0 )
          {
            *a7 = HalConvertDeviceIdtToIrql(DWORD1(v22));
            Range = 0;
            v14 = DWORD1(v22);
            *a8 = DWORD1(v22);
            *a6 = v14;
LABEL_12:
            IrqLibReleaseArbiterLock();
            return (unsigned int)Range;
          }
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          Range = -1073741670;
        }
      }
    }
    if ( DWORD1(v22) )
      ProcessorDeleteDeviceIdtAssignment(Owner, End, DWORD1(v22), 0);
    goto LABEL_12;
  }
  return 3221225659LL;
}
