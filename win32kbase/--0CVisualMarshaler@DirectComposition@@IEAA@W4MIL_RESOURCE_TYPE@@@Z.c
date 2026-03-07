__int64 __fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CVisualMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 36) = a2;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 368) = 0;
  return result;
}
