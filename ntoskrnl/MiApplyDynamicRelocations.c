__int64 __fastcall MiApplyDynamicRelocations(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  unsigned int *v8; // rax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v15[5]; // [rsp+44h] [rbp-14h] BYREF

  v14 = 0;
  v15[0] = 0;
  v6 = a2;
  if ( (MiFlags & 0x4000) != 0 )
    return VslApplyDynamicRelocations(a1, a3, a4);
  LOBYTE(a2) = 1;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, a2, 10, (int)&v14);
  if ( !v8 || v14 != *v8 )
    return 0LL;
  result = LdrCaptureDynamicRelocationTableHeader(a1, v6, (__int64)v8, *v8, 0LL, 523, v15, 0LL);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations(a1, (_DWORD *)(a1 + v15[0]), v10, v11, v12, v13, a3, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
