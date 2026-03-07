void __fastcall ACPIRangeValidatePciResources(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a3)
{
  ULONG_PTR v3; // r13
  int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // r12
  char v11; // cl
  ULONGLONG v12; // rax
  ULONGLONG v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  char v16; // cl
  int v17; // r9d
  int v18; // esi
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int64 Alignment; // [rsp+60h] [rbp-18h] BYREF
  ULONGLONG v23; // [rsp+68h] [rbp-10h]
  ULONG_PTR v25; // [rsp+C8h] [rbp+50h]
  int v26; // [rsp+D0h] [rbp+58h] BYREF
  int v27; // [rsp+D8h] [rbp+60h]

  v25 = BugCheckParameter3;
  v3 = BugCheckParameter3;
  v26 = 0;
  v5 = 0;
  if ( !BugCheckParameter3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(BugCheckParameter3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        BugCheckParameter3,
        13,
        15,
        (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids);
    }
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  }
  v6 = BugCheckParameter3 + 32;
  v7 = 0;
  v27 = 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 28) )
  {
    do
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = 0;
      if ( v8 )
      {
        do
        {
          v10 = 32LL * v9;
          v11 = *(_BYTE *)(v10 + v6 + 9);
          if ( ((v11 - 1) & 0xF9) == 0 && v11 != 5 )
          {
            Alignment = 0LL;
            MinimumAddress = 0LL;
            MaximumAddress = 0LL;
            v12 = RtlIoDecodeMemIoResource(
                    (PIO_RESOURCE_DESCRIPTOR)(v10 + v6 + 8),
                    &Alignment,
                    &MinimumAddress,
                    &MaximumAddress);
            a3 = MaximumAddress;
            v13 = v12;
            BugCheckParameter3 = MinimumAddress;
            v23 = v12;
            v14 = MaximumAddress - MinimumAddress + 1;
            if ( v14 > 0xFFFFFFFF && *(_BYTE *)(v10 + v6 + 9) != 7 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_diiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  MinimumAddress,
                  MaximumAddress,
                  16,
                  BugCheckParameter4,
                  v9,
                  MinimumAddress,
                  MaximumAddress,
                  MaximumAddress - MinimumAddress + 1,
                  *(_DWORD *)(v10 + v6 + 20));
                BugCheckParameter3 = MinimumAddress;
                a3 = MaximumAddress;
                v13 = v23;
              }
              ++v5;
            }
            if ( v14 != v13 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_diiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  BugCheckParameter3,
                  a3,
                  17,
                  BugCheckParameter4,
                  v9,
                  BugCheckParameter3,
                  a3,
                  v13,
                  Alignment);
                BugCheckParameter3 = MinimumAddress;
                a3 = MaximumAddress;
                LOBYTE(v13) = v23;
              }
              ++v5;
            }
            v15 = Alignment;
            if ( !Alignment )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_diiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  BugCheckParameter3,
                  a3,
                  Alignment + 18,
                  BugCheckParameter4,
                  v9,
                  BugCheckParameter3,
                  a3,
                  v13,
                  0);
                v15 = Alignment;
                BugCheckParameter3 = MinimumAddress;
                a3 = MaximumAddress;
              }
              ++v5;
            }
            if ( ((v15 - 1) & BugCheckParameter3) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_diiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  BugCheckParameter3,
                  a3,
                  19,
                  BugCheckParameter4,
                  v9,
                  BugCheckParameter3,
                  a3,
                  v23,
                  v15);
              ++v5;
            }
          }
          LOBYTE(BugCheckParameter3) = *(_BYTE *)(v10 + v6 + 9);
          v16 = BugCheckParameter3;
          if ( (_BYTE)BugCheckParameter3 == 6 )
          {
            a3 = *(unsigned int *)(v10 + v6 + 24);
            v17 = *(_DWORD *)(v10 + v6 + 20);
            if ( *(_DWORD *)(v10 + v6 + 24) - v17 + 1 != *(_DWORD *)(v10 + v6 + 16) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_dDDL(
                  WPP_GLOBAL_Control->DeviceExtension,
                  BugCheckParameter3,
                  a3,
                  v17,
                  BugCheckParameter4,
                  v9,
                  v17,
                  a3,
                  *(_DWORD *)(v10 + v6 + 16));
                v16 = *(_BYTE *)(v10 + v6 + 9);
              }
              ++v5;
            }
          }
          if ( ((v16 - 3) & 0xFB) == 0 )
          {
            ACPIRangeValidatePciMemoryResource(v6, v9, a3, &v26);
            v18 = v26;
            if ( v26 )
            {
              if ( ACPIIgnoreResourceMapValidation((struct _IO_RESOURCE_DESCRIPTOR *)(v10 + v6 + 8)) )
                v18 = 0;
              v26 = v18;
            }
            v5 += v18;
          }
          v8 = *(_DWORD *)(v6 + 4);
          ++v9;
        }
        while ( v9 < v8 );
        v3 = v25;
        v7 = v27;
      }
      v27 = ++v7;
      v6 += 32 * v8 + 8;
    }
    while ( v7 < *(_DWORD *)(v3 + 28) );
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(BugCheckParameter3) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          BugCheckParameter3,
          13,
          21,
          (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids);
      }
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, v3, (ULONG_PTR)E820Info);
    }
  }
}
