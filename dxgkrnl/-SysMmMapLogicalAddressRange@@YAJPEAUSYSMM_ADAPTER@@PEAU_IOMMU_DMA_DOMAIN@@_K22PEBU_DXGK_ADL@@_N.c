__int64 __fastcall SysMmMapLogicalAddressRange(
        struct SYSMM_ADAPTER *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        const struct _DXGK_ADL *a6,
        bool a7)
{
  __int16 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rbx
  const wchar_t *v11; // r9
  int v12; // edx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]
  unsigned __int64 v19; // [rsp+68h] [rbp-8h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = a3;
  if ( !SmmUseIommuV3Interface() )
    return 3221225485LL;
  if ( (((unsigned __int16)a5 | (unsigned __int16)(v8 | v7)) & 0xFFF) != 0 )
  {
    v10 = 1102LL;
    WdLogSingleEntry1(2LL, 1102LL);
    v11 = L"Unaligned address";
    goto LABEL_12;
  }
  if ( !v9 )
  {
    v10 = 1115LL;
    WdLogSingleEntry1(1LL, 1115LL);
    v11 = L"The domain cannot be NULL";
    v12 = 262146;
LABEL_13:
    DxgkLogInternalTriageEvent(0LL, v12, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( v8 >> 12 > *(unsigned int *)a6 - (a5 >> 12) )
  {
    v10 = 1123LL;
    WdLogSingleEntry1(2LL, 1123LL);
    v11 = L"Unaligned AdlOffset";
LABEL_12:
    v12 = 0x40000;
    goto LABEL_13;
  }
  v13 = (*((_DWORD *)a6 + 1) & 1) == 0;
  v14 = *((_QWORD *)a6 + 1);
  v17[1] = 0;
  if ( v13 )
  {
    v17[0] = 2;
    v18 = v14 + 8 * (a5 >> 12);
    v19 = v8 >> 12;
  }
  else
  {
    v18 = v14 << 12;
    v17[0] = 1;
    v19 = v8;
  }
  v16 = 0LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_1C013BC38)(
           v9,
           2 * !a7 + 1,
           v17,
           &v20,
           0LL,
           0LL,
           &v16);
}
