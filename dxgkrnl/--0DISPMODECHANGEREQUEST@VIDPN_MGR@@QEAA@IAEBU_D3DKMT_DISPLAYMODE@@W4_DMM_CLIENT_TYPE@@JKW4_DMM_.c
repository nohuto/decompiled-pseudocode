__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::DISPMODECHANGEREQUEST(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 *a8)
{
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = 1833173017;
  *(_QWORD *)a1 = &VIDPN_MGR::DISPMODECHANGEREQUEST::`vftable'{for `QueueElement'};
  *(_QWORD *)(a1 + 24) = &VIDPN_MGR::DISPMODECHANGEREQUEST::`vftable'{for `NonReferenceCounted'};
  *(_QWORD *)(a1 + 32) = &VIDPN_MGR::DISPMODECHANGEREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::DISPMODECHANGEREQUEST>'};
  *(_DWORD *)(a1 + 48) = a2;
  *(_OWORD *)(a1 + 52) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 68) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 84) = *(_QWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a1 + 100) = a5;
  *(_DWORD *)(a1 + 104) = a6;
  *(_DWORD *)(a1 + 96) = a4;
  v9 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 112) = v9 * KeQueryTimeIncrement();
  v10 = *a8;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 136) = a7;
  result = a1;
  *(_OWORD *)(a1 + 120) = v10;
  return result;
}
