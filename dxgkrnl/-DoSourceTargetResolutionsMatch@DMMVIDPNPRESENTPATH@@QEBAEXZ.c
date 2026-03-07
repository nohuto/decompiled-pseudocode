char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  char v12; // bl
  int v13; // eax
  int v14; // eax
  __int64 v16; // rdi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdi
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // [rsp+70h] [rbp+8h]

  v2 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v2 + 104);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 96));
    v4 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *((_DWORD *)this + 29);
  v24 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 76LL);
  if ( (unsigned int)(v9 - 1) <= 0xF )
    v9 = (v9 - 1) / 4 + 1;
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 == 254 && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
    {
      v10 = v24;
      v11 = HIDWORD(v24);
      if ( v24 == *(_QWORD *)(v8 + 84) )
        goto LABEL_18;
    }
    else
    {
      v10 = HIDWORD(v24);
      v11 = v24;
    }
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 76LL);
    v11 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 76LL));
  }
  if ( v11 != *(_DWORD *)(v8 + 84) || v10 != *(_DWORD *)(v8 + 88) )
  {
    v12 = 0;
    goto LABEL_13;
  }
LABEL_18:
  v12 = 1;
LABEL_13:
  v13 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
  if ( v13 )
  {
    if ( v13 < 0 )
    {
      v16 = v13;
      WdLogSingleEntry1(2LL, v13);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0,
            0,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v16,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  else if ( v7 != -88 )
  {
    (**(void (__fastcall ***)(__int64, __int64))(v7 + 88))(v7 + 88, 1LL);
  }
  v14 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 96));
  if ( v14 )
  {
    if ( v14 < 0 )
    {
      v20 = v14;
      WdLogSingleEntry1(2LL, v14);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v22,
            v21,
            v23,
            0,
            0,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  else if ( v4 != -88 )
  {
    (**(void (__fastcall ***)(__int64, __int64))(v4 + 88))(v4 + 88, 1LL);
  }
  return v12;
}
