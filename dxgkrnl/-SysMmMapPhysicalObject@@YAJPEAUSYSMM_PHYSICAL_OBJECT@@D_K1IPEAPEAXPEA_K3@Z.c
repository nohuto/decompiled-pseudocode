__int64 __fastcall SysMmMapPhysicalObject(
        struct SYSMM_PHYSICAL_OBJECT *a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // edi
  unsigned __int64 *v18; // rsi
  void **v19; // r15
  unsigned __int64 *v20; // r14
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d

  if ( (a5 & 1) != 0 && !SmmValidateParameters_0((__int64)a1, a2, a3, a4) )
    return 3221225485LL;
  v13 = *((_DWORD *)a1 + 11);
  if ( ((v13 >> 1) & 0xF) == 1 )
  {
    v18 = a8;
    v20 = a7;
    v19 = a6;
    v21 = SmmMapSection(*((_QWORD *)a1 + 1), a2, a3, a4, (v13 >> 10) & 3, (__int64)a6, (__int64)a7, (__int64)a8);
    goto LABEL_18;
  }
  switch ( (*((_DWORD *)a1 + 11) >> 1) & 0xF )
  {
    case 2:
      v18 = a8;
      v20 = a7;
      v19 = a6;
      v21 = SmmMapMdl(
              (__int64)a1,
              *((_QWORD *)a1 + 1),
              a2,
              a3,
              a4,
              (MEMORY_CACHING_TYPE)((v13 >> 10) & 3),
              a6,
              (__int64 *)a7,
              (__int64 *)a8);
      goto LABEL_18;
    case 3:
      v18 = a8;
      v20 = a7;
      v19 = a6;
      v21 = SmmMapIoSpace(*((_QWORD *)a1 + 1), a3, a4, (v13 >> 10) & 3, (__int64 *)a6, a7, (__int64 *)a8);
      goto LABEL_18;
    case 4:
      v18 = a8;
      v19 = a6;
      v20 = a7;
      v21 = SmmMapVirtualMemory(*((_QWORD *)a1 + 1), a3, a4, (_DWORD)a6, (__int64)a7, (__int64)a8);
      goto LABEL_18;
    case 5:
      v18 = a8;
      v19 = a6;
      v20 = a7;
      v21 = SmmMapContiguousMemory(*((_QWORD *)a1 + 1), a3, a4, a6, a7, a8);
LABEL_18:
      v17 = v21;
      if ( v21 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
        if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
          McTemplateK0pqxxpxx_EtwWriteTransfer(v23, v22, v24, (_DWORD)a1, a2, a3, a4, (char)*v19, *v20, *v18);
      }
      return v17;
  }
  WdLogSingleEntry1(1LL, 755LL);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(v15, v14, v16, 0LL, 2, -1, L"0", 755LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)-1073741822;
}
