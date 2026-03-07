__int64 __fastcall SysMmCreateAdl(
        struct SYSMM_ADAPTER_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _DXGK_ADL **a5)
{
  PHYSICAL_ADDRESS *v5; // rbp
  char v7; // r14
  unsigned int v10; // edi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r13
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r12d
  struct SYSMM_ADL *Adl; // rax
  struct SYSMM_ADL *v19; // r14
  PHYSICAL_ADDRESS v20; // rcx
  PHYSICAL_ADDRESS *v21; // rax
  PHYSICAL_ADDRESS **v22; // rdx

  v5 = (PHYSICAL_ADDRESS *)((char *)a1 - 64);
  v7 = a4;
  v10 = 0;
  if ( !SmmValidateParameters((__int64)a1 - 64, a2, a3, a4) )
    return 3221225485LL;
  v12 = a2 >> 12;
  v13 = a3 >> 12;
  ExAcquirePushLockExclusiveEx(&v5[4], 0LL);
  if ( (v5[5].HighPart & 1) != 0 || v5[6].LowPart )
  {
    v17 = SmmDetermineAdlType((__int64)a1, (__int64)v5, v7);
    Adl = (struct SYSMM_ADL *)SmmAllocateAdl(v13, v17);
    v19 = Adl;
    if ( Adl )
    {
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          SmmSetAdlBaseAddress((__int64)a1, (__int64)v5, (__int64)Adl, v12);
        }
        else if ( v17 == 2 )
        {
          SmmSetAdlPageArray((__int64)v5, (__int64)Adl, v12);
        }
      }
      else
      {
        SmmBuildAdl(a1, v5, Adl, v12, v13);
      }
      ++*((_DWORD *)a1 + 8);
      if ( (dword_1C013BCE0 & 0x20) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)v19 + 16LL) = a1;
        v20 = v5[3];
        v21 = *(PHYSICAL_ADDRESS **)v19;
        v22 = *(PHYSICAL_ADDRESS ***)(v20.QuadPart + 8);
        if ( *v22 != (PHYSICAL_ADDRESS *)v20.QuadPart )
          __fastfail(3u);
        *v21 = v20;
        v21[1].QuadPart = (LONGLONG)v22;
        *v22 = v21;
        *(_QWORD *)(v20.QuadPart + 8) = v21;
      }
      *a5 = (struct SYSMM_ADL *)((char *)v19 + 8);
    }
    else
    {
      *a5 = 0LL;
      v10 = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0LL,
          0,
          -1,
          L"Creating ADL against unlocked memory",
          a1,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    v10 = -1073741811;
  }
  ExReleasePushLockExclusiveEx(&v5[4], 0LL);
  return v10;
}
