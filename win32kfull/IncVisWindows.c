__int64 __fastcall IncVisWindows(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _WORD v6[32]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v6, 0, sizeof(v6));
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 2);
    v4 = *(_QWORD *)(v3 + 424);
    ++*(_DWORD *)(v3 + 908);
    ++*(_DWORD *)(v4 + 1008);
    if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6)
      && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
    {
      ++*(_DWORD *)(*(_QWORD *)(v3 + 424) + 1012LL);
    }
    v5 = *(_DWORD **)(v3 + 424);
    if ( v5[252] > v5[253] && (v5[203] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 424), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 424) + 812LL) |= 0x4000u;
    }
    *(_QWORD *)(v3 + 1272) |= 0x100000000uLL;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
