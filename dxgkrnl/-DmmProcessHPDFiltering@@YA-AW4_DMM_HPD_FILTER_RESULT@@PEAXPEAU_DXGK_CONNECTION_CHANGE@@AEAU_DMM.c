__int64 __fastcall DmmProcessHPDFiltering(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 2920) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, v9);
  LOBYTE(v10) = a4;
  LODWORD(v9) = VIDPN_MGR::ProcessHPDFiltering(v9, a2, a3, v10, a5);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return (unsigned int)v9;
}
