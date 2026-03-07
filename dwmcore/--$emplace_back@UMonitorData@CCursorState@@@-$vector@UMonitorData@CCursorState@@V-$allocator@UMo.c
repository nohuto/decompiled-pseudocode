__int64 __fastcall std::vector<CCursorState::MonitorData>::emplace_back<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(a1, v3, a2);
  *(_QWORD *)v3 = *(_QWORD *)a2;
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(v3 + 12) = *(_OWORD *)(a2 + 12);
  *(_OWORD *)(v3 + 28) = *(_OWORD *)(a2 + 28);
  *(_OWORD *)(v3 + 44) = *(_OWORD *)(a2 + 44);
  *(_OWORD *)(v3 + 60) = *(_OWORD *)(a2 + 60);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(v3 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v3 + 104) = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_DWORD *)(v3 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(v3 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(v3 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(v3 + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(v3 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(v3 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(v3 + 136) = *(_DWORD *)(a2 + 136);
  *(_BYTE *)(v3 + 140) = *(_BYTE *)(a2 + 140);
  result = a1[1];
  a1[1] = result + 144;
  return result;
}
