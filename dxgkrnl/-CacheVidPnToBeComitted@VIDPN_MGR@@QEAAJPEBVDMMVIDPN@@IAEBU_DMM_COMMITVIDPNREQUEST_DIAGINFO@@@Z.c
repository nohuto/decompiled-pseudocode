__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  DMMVIDPN *v9; // rax
  DMMVIDPN *v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // xmm0_8
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, __int64); // [rsp+38h] [rbp-20h] BYREF

  v5 = a3;
  v7 = 0;
  v17 = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, 256LL);
  if ( !v9 || (v10 = DMMVIDPN::DMMVIDPN(v9, a2), (v11 = (__int64)v10) == 0) )
  {
    WdLogSingleEntry2(6LL, 320LL, a2);
    v12 = -1073741801;
    goto LABEL_10;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v10 + 9))((__int64)v10 + 72) )
  {
    WdLogSingleEntry3(2LL, v11, a2, *(int *)(v11 + 80));
    v12 = *(_DWORD *)(v11 + 80);
LABEL_10:
    v7 = v12;
    goto LABEL_11;
  }
  auto_rc<DMMVIDPN>::reset(&v17, v11);
  v18 = 0LL;
  v13 = operator new[](0x48uLL, 0x4E506456u, 256LL);
  if ( v13 )
  {
    v14 = *((_DWORD *)a4 + 2);
    v15 = *(_QWORD *)a4;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)(v13 + 40) = 1833173016;
    *(_QWORD *)v13 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    *(_QWORD *)(v13 + 24) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    *(_QWORD *)(v13 + 32) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    *(_QWORD *)(v13 + 48) = v17;
    *(_QWORD *)(v13 + 60) = v15;
    *(_DWORD *)(v13 + 68) = v14;
    *(_DWORD *)(v13 + 56) = v5;
    v17 = 0LL;
    v18 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue((char *)this + 192);
  }
  else
  {
    WdLogSingleEntry5(6LL, 72LL, a2, (int)(*(_DWORD *)a4 << 28) >> 28, v5, (int)(*(_DWORD *)a4 << 24) >> 28);
    v7 = -1073741801;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v18);
LABEL_11:
  auto_rc<DMMVIDPN>::reset(&v17, 0LL);
  return v7;
}
