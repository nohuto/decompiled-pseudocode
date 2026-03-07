__int64 __fastcall RtlUnwind(ULONG_PTR a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  __int64 v14; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(v14) = 0;
  v8 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2((unsigned int)(v8 + 1048587), &v14, 0LL);
  v9 = (unsigned int)v14 + 15LL;
  if ( v9 <= (unsigned int)v14 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  RtlInitializeExtendedContext2((__int64)&v14, v8 + 1048587, &v14, 0LL);
  return RtlUnwindEx(a1, a2, a3, a4, (unsigned int *)&v14, 0LL);
}
