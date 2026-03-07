__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR a1, __int64 *a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  unsigned int v8; // edi
  void *Pool2; // r12
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // eax
  PVOID *v19; // rdi
  PVOID *v21; // rbx
  __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned int v23; // [rsp+40h] [rbp-28h] BYREF
  int v24; // [rsp+44h] [rbp-24h]
  unsigned int v25; // [rsp+48h] [rbp-20h] BYREF
  PVOID *v26; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+48h] BYREF
  __int64 *v28; // [rsp+B8h] [rbp+50h]
  _DWORD *v29; // [rsp+C0h] [rbp+58h]
  unsigned int *v30; // [rsp+C8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v4 = *(_DWORD *)(a1 + 180);
  v26 = 0LL;
  v23 = 0;
  v6 = v4 == 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 88));
  CmpLogDirtyVectorUse(a1, 1, 0, v7);
  v8 = ((v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(a1 + 104) << 9)) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(264LL, 0LL, 1867074883LL);
  if ( Pool2 )
  {
    v10 = HvpAllocateLogBuffers((__int64 *)&v26, &v25, v8);
    v12 = v25;
    v13 = v10;
    if ( v10 < 0 )
    {
      v19 = v26;
    }
    else
    {
      v14 = (__int64)v26;
      HvpGenerateLogEntryHeader(a1, (__int64)v26, v11, (__int64)&v27, &v23, v8, 0, v6);
      HvpGenerateLogEntryMetadata(a1, v14, v15, (__int64)&v27, (__int64)&v23, (__int64)Pool2, v24);
      HvpGenerateLogEntryDirtyData(a1, v14, v16, &v27, &v23, v22);
      v18 = *(_DWORD *)(v14 + 24LL * v27 + 16);
      if ( v23 < v18 )
        memset((void *)(*(_QWORD *)(v14 + 24LL * v27 + 8) + v23), 0, v18 - v23);
      LOBYTE(v17) = v6;
      HvpGenerateLogEntryChecksums(v14, (unsigned int)v12, v17);
      *v28 = v14;
      *v29 = v12;
      *v30 = v8;
      v19 = 0LL;
      v13 = 0;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v19 )
    {
      if ( (_DWORD)v12 )
      {
        v21 = v19 + 1;
        do
        {
          if ( *v21 )
          {
            ExFreePoolWithTag(*v21, 0);
            *v21 = 0LL;
          }
          v21 += 3;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v19, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v13;
}
