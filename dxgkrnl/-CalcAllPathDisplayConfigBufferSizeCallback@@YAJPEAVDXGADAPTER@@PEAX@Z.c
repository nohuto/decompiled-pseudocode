__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v11 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *((_QWORD *)a1 + 365) && *((_DWORD *)a1 + 50) == 1 )
  {
    v4 = *((_QWORD *)a1 + 365);
    v5 = *(_QWORD *)(v4 + 104);
    v6 = *(_DWORD *)(v4 + 96);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
    v7 = *(_QWORD *)(v5 + 120);
    a2[1] += *(_DWORD *)(v7 + 40) * v6;
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  }
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  return 0LL;
}
