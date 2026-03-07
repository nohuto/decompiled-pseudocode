__int64 __fastcall VIDPN_MGR::CreateClientVidPn(struct VIDPN_MGR *a1, __int64 *a2)
{
  unsigned int v2; // edi
  DMMVIDPN *v5; // rax
  DMMVIDPN *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  v10 = 0LL;
  v5 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
  if ( v5 )
    v6 = DMMVIDPN::DMMVIDPN(v5, a1);
  else
    v6 = 0LL;
  auto_rc<DMMVIDPN>::reset(&v10, (__int64)v6);
  v7 = v10;
  if ( v10 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v10 + 72))(v10 + 72) )
    {
      if ( *((struct _KTHREAD **)a1 + 8) != KeGetCurrentThread() )
        WdLogSingleEntry0(1LL);
      v8 = v10;
      if ( Set<DMMVIDPN>::Add() != 1 )
        WdLogSingleEntry0(1LL);
      v10 = 0LL;
      auto_rc<DMMVIDPN>::reset(a2, v8);
    }
    else
    {
      WdLogSingleEntry2(7LL, v7, *(int *)(v7 + 80));
      v2 = *(_DWORD *)(v7 + 80);
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v2 = -1073741801;
  }
  auto_rc<DMMVIDPN>::reset(&v10, 0LL);
  return v2;
}
