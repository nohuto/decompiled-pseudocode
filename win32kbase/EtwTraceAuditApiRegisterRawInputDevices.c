void __fastcall EtwTraceAuditApiRegisterRawInputDevices(
        int a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        struct tagTHREADINFO *a6,
        PVOID BaseAddress,
        __int64 a8,
        char a9)
{
  PEPROCESS *v11; // rcx
  int v12; // eax
  char v13; // r15
  PVOID v14; // rbx
  const WCHAR *v15; // rdi
  unsigned int ThreadInfoFlags; // eax
  char v17; // r11
  PVOID P; // [rsp+C8h] [rbp-80h] BYREF
  LONGLONG TimeQuadPart; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+F0h] [rbp-58h]
  __int128 v23; // [rsp+100h] [rbp-48h]

  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x400) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x400) != 0
    && (qword_1C02C4058 & 0x400) == qword_1C02C4058 )
  {
    P = 0LL;
    MemoryInformation = 0LL;
    v11 = (PEPROCESS *)*((_QWORD *)a6 + 53);
    v22 = 0LL;
    v23 = 0LL;
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v11);
    v20 = a8;
    v12 = EtwpTraceAuditApiQueryAddressVADInformation(
            BaseAddress,
            &MemoryInformation,
            (struct _OBJECT_NAME_INFORMATION **)&P);
    v13 = v12;
    if ( v12 < 0 )
    {
      MemoryInformation = 0LL;
      v22 = 0LL;
      v23 = 0LL;
    }
    v14 = P;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
    {
      if ( P )
        v15 = (const WCHAR *)*((_QWORD *)P + 1);
      else
        v15 = &word_1C02856D8;
      PsGetProcessStartKey(**((_QWORD **)a6 + 53));
      ThreadInfoFlags = EtwpGetThreadInfoFlags(a6);
      McTemplateK0qhhqppmqqqxqmxzqpqqpq_EtwWriteTransfer(
        DWORD2(MemoryInformation),
        *((_QWORD *)a6 + 53),
        ThreadInfoFlags,
        a1,
        a2,
        a3,
        a4,
        a5,
        (char)BaseAddress,
        (__int64)&v20,
        a9,
        *((_DWORD *)a6 + 226),
        *((_DWORD *)a6 + 227),
        ThreadInfoFlags,
        *(_DWORD *)(*((_QWORD *)a6 + 53) + 56LL),
        (__int64)&TimeQuadPart,
        v17,
        (__int64)v15,
        v13,
        SBYTE8(MemoryInformation),
        v22,
        SBYTE8(v23),
        SBYTE8(v22),
        SBYTE4(v23));
    }
    if ( v14 )
      ExFreePoolWithTag(v14, 0x6D6D4B45u);
  }
}
