void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  signed __int32 v5; // edx
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    v5 = 2;
  }
  else
  {
    v6 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v6 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v6);
    }
    *(_DWORD *)(a4 + 32) = 2;
    v5 = v4;
  }
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v5);
}
