__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(__int64 a1, const struct DMMVIDPN *a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  DMMVIDPN *v9; // rax
  DMMVIDPN *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPN>::reset(a3, 0LL);
  v14 = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
  if ( v9 )
    v10 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v10 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v14, (__int64)v10);
  v11 = v14;
  if ( v14 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 72))(v14 + 72) )
    {
      if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
        WdLogSingleEntry0(1LL);
      v12 = v14;
      if ( Set<DMMVIDPN>::Add() != 1 )
        WdLogSingleEntry0(1LL);
      v14 = 0LL;
      auto_rc<DMMVIDPN>::reset(a3, v12);
    }
    else
    {
      WdLogSingleEntry3(7LL, v11, a2, *(int *)(v11 + 80));
      v7 = *(_DWORD *)(v11 + 80);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a2);
    v7 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v14, 0LL);
  return v7;
}
