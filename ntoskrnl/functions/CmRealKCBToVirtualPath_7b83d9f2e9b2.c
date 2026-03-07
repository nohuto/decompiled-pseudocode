__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v6; // r15
  _QWORD *v8; // rsi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  __int64 Pool2; // rax
  wchar_t *v15; // rax
  UNICODE_STRING v16; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  Source = 0LL;
  v17 = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  *(_QWORD *)&v16.Length = 0LL;
  CmpConstructNameWithStatus(a1, &v16, a3);
  v8 = *(_QWORD **)&v16.Length;
  if ( !*(_QWORD *)&v16.Length )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v17.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v17.Buffer = v12;
      if ( v12 )
      {
        Length = v17.Length;
        if ( v17.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              v17.Buffer = v12 + 1;
              Length = v17.Length - 2;
              v17.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v6 = 1;
            }
          }
        }
      }
    }
    Pool2 = ExAllocatePool2(256LL, v10, 1649298755LL);
    a4->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v16.Length = *v8,
            v16.Buffer = v15,
            v16.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v16),
            VirtualizationID < 0)
        || v6
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v17), VirtualizationID < 0)) )
      {
LABEL_23:
        RtlFreeUnicodeString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)VirtualizationID;
}
