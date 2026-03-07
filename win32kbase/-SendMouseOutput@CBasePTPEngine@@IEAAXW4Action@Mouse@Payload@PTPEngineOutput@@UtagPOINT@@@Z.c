void *__fastcall CBasePTPEngine::SendMouseOutput(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = (_DWORD *)(a1 + 572);
  *(_DWORD *)(a1 + 576) = a2;
  *(_QWORD *)(a1 + 580) = a3;
  v4 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v3 = 1;
  (**v4)(v4, v3);
  return memset(v3, 0, 0x254uLL);
}
