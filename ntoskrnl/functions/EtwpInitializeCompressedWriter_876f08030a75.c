__int64 __fastcall EtwpInitializeCompressedWriter(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  __int64 v8; // rax
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF
  ULONG v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0;
  v10 = 0;
  RtlGetCompressionWorkSpaceSize(3u, &v10, &v11);
  Pool2 = ExAllocatePool2(256LL, v10, 1517777989LL);
  *(_QWORD *)(a1 + 32) = Pool2;
  if ( Pool2
    && (*(_DWORD *)(a1 + 16) = a2,
        *(_DWORD *)(a1 + 48) = 2 * a2,
        v8 = ExAllocatePool2(256LL, (unsigned int)(2 * a2), 1517777989LL),
        (*(_QWORD *)(a1 + 40) = v8) != 0LL) )
  {
    *(_QWORD *)a1 = a3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
