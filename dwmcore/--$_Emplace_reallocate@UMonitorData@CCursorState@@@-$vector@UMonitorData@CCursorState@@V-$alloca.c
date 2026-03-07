__int64 __fastcall std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = (a2 - *a1) / 144;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x1C71C71C71C71C7LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0x8E38E38E38E38E39uLL * ((a1[2] - *a1) >> 4);
  v10 = v9 >> 1;
  if ( v9 <= 0x1C71C71C71C71C7LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1C71C71C71C71C7LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1C71C71C71C71C7LL;
  }
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(144 * v11);
  v13 = v12 + 144 * v6;
  v14 = v12;
  *(_QWORD *)v13 = *(_QWORD *)a3;
  *(_DWORD *)(v13 + 8) = *(_DWORD *)(a3 + 8);
  *(_OWORD *)(v13 + 12) = *(_OWORD *)(a3 + 12);
  *(_OWORD *)(v13 + 28) = *(_OWORD *)(a3 + 28);
  *(_OWORD *)(v13 + 44) = *(_OWORD *)(a3 + 44);
  *(_OWORD *)(v13 + 60) = *(_OWORD *)(a3 + 60);
  *(_DWORD *)(v13 + 76) = *(_DWORD *)(a3 + 76);
  *(_OWORD *)(v13 + 80) = *(_OWORD *)(a3 + 80);
  *(_QWORD *)(v13 + 96) = 0LL;
  *(_QWORD *)(v13 + 104) = 0LL;
  *(_QWORD *)(v13 + 96) = *(_QWORD *)(a3 + 96);
  *(_QWORD *)(v13 + 104) = *(_QWORD *)(a3 + 104);
  *(_QWORD *)(a3 + 96) = 0LL;
  *(_QWORD *)(a3 + 104) = 0LL;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(a3 + 112);
  *(_DWORD *)(v13 + 116) = *(_DWORD *)(a3 + 116);
  *(_DWORD *)(v13 + 120) = *(_DWORD *)(a3 + 120);
  *(_DWORD *)(v13 + 124) = *(_DWORD *)(a3 + 124);
  *(_DWORD *)(v13 + 128) = *(_DWORD *)(a3 + 128);
  *(_DWORD *)(v13 + 132) = *(_DWORD *)(a3 + 132);
  *(_DWORD *)(v13 + 136) = *(_DWORD *)(a3 + 136);
  *(_BYTE *)(v13 + 140) = *(_BYTE *)(a3 + 140);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CCursorState::MonitorData *>(v16, a2, v12);
    v15 = a1[1];
    v14 = v13 + 144;
    v16 = a2;
  }
  std::_Uninitialized_move<CCursorState::MonitorData *>(v16, v15, v14);
  std::vector<CCursorState::MonitorData>::_Change_array(a1, v12, v8, v11);
  return v13;
}
