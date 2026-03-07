NTSTATUS __fastcall RtlCalculateUserShadowStackSizes(__int64 a1, ULONGLONG *a2)
{
  ULONGLONG v3; // rcx
  NTSTATUS result; // eax
  ULONGLONG v6; // rcx
  __int64 v7; // r10
  ULONGLONG *v8; // r11
  ULONGLONG v9; // rcx
  ULONGLONG v10; // rdx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF
  ULONGLONG v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  pullResult = 0LL;
  result = RtlULongLongSub(v3, *(_QWORD *)(a1 + 32), &pullResult);
  if ( result >= 0 )
  {
    result = RtlULongLongSub(v6, *(_QWORD *)(v7 + 24), &v12);
    if ( result >= 0 )
    {
      v9 = pullResult;
      if ( pullResult < 0x1000 || (pullResult & 0xFFF) != 0 || v12 < 0x1000 || (v12 & 0xFFF) != 0 || v12 > pullResult )
      {
        return -1073741811;
      }
      else
      {
        v10 = (v12 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( pullResult < v10 + 0x2000 )
          v9 = v10 + 0x2000;
        *a2 = v9;
        *v8 = v10;
      }
    }
  }
  return result;
}
