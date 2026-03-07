__int64 __fastcall NVMeControllerAllocateLocalCommand(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6; // [rsp+48h] [rbp+18h] BYREF
  void *v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v2 = StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
  v4 = v6;
  if ( !v2 && v6 )
  {
    NVMeAllocateDmaBuffer(a1, 4256LL, &v7, &v8, &v6);
    if ( v7 )
    {
      memset(v7, 0, 0x10A0uLL);
      *(_QWORD *)(v6 + 96) = v7;
      *(_QWORD *)(v6 + 104) = v8;
      *(_QWORD *)(v6 + 64) = *(_QWORD *)(v6 + 96);
      *(_QWORD *)(*(_QWORD *)(v6 + 96) + 4232LL) = v6;
      *(_DWORD *)(v6 + 20) = 251658240;
      *(_BYTE *)(v6 + 1) |= 1u;
      return v6;
    }
    goto LABEL_7;
  }
  if ( v7 )
  {
    NVMeFreeDmaBuffer(a1, 4256LL, &v7, v8);
LABEL_7:
    v4 = v6;
  }
  if ( v4 )
    StorPortExtendedFunction(1LL, a1, v4, v3);
  return 0LL;
}
