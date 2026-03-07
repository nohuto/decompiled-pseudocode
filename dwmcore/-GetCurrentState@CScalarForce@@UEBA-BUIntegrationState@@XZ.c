__int64 __fastcall CScalarForce::GetCurrentState(__int64 a1, __int64 a2)
{
  int v2; // xmm0_4
  __int64 v5; // rcx
  int v6; // eax

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
  {
    v6 = *(_DWORD *)(a1 + 44);
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 28);
    *(_DWORD *)(a2 + 16) = v6;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 104);
    *(_DWORD *)a2 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
    else
      v2 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = v2;
  }
  return a2;
}
