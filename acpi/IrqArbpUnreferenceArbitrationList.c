__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, _QWORD **a2)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  _QWORD **v3; // r13
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  PRTL_RANGE i; // rcx
  PVOID UserData; // rbx
  _QWORD *j; // r15
  void **v10; // r14
  int v11; // eax
  unsigned int Start; // esi
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // r12d
  int v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD **v25; // [rsp+C8h] [rbp+48h]

  v25 = a2;
  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  Range = 0LL;
  v3 = a2;
  v22 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v20, i->Start, i->End, (char)i->Owner);
      i = Range;
    }
    UserData = i->UserData;
    *((_DWORD *)UserData + 1) &= ~8u;
    for ( j = *v3; v3 != j; j = (_QWORD *)*j )
    {
      v10 = (void **)(j + 4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_i(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          20,
          20,
          (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids,
          (char)*v10);
      }
      if ( Range->Owner == *v10 )
      {
        v11 = *((_DWORD *)UserData + 1);
        if ( (v11 & 8) == 0 )
        {
          *((_DWORD *)UserData + 1) = v11 | 8;
          Start = Range->Start;
          if ( LODWORD(Range->Start) <= LODWORD(Range->End) )
          {
            do
            {
              v13 = IrqArbGsivFromIrq(Start);
              v15 = v13;
              if ( v13 < 0xFFF00000 && (int)IcGetPossibleInput(v13, v14, 0LL) >= 0 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v16) = 4;
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v16,
                    v17 + 20,
                    v17 + 21,
                    (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
                }
                LOBYTE(v16) = Range->Attributes & 1;
                IcRemovePossibleReference(v15, v16);
              }
              if ( (int)ProcessorGetDeviceIdtAssignment(*v10, v15, 1, &v21) >= 0 )
              {
                v18 = DWORD1(v22);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v4) = 4;
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v4,
                    20,
                    22,
                    (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
                }
                ProcessorDeleteDeviceIdtAssignment(*v10, v15, v18, 1);
              }
              ++Start;
            }
            while ( Start <= LODWORD(Range->End) );
            v3 = v25;
          }
          if ( *((_DWORD *)UserData + 2) == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
