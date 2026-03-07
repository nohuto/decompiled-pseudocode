__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(__int64 a1, char *a2, void *a3, ULONG_PTR a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  char v13; // al
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v11 = SmEtwEnabled((unsigned __int8)*(_DWORD *)(a1 + 776) == 0 ? 2 : 0);
  if ( v11 )
  {
    v16 = 0LL;
    if ( a6 == -1073741116 )
    {
      BYTE1(v16) = 2;
    }
    else
    {
      v13 = BYTE1(v16);
      v10 = 1LL;
      if ( a6 == -1073741761 )
        v13 = 1;
      BYTE1(v16) = v13;
    }
    SmEtwLogStoreCorruption(v11, v10, a1, a2, *(_WORD *)(v12 + 4), &v16);
  }
  v14 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v14 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
    || a6 != -1073741116
    || (result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5), !(_DWORD)result) )
  {
    if ( v14 >= 3 )
      KeBugCheckEx(0x12Bu, a6, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
    return 0LL;
  }
  return result;
}
