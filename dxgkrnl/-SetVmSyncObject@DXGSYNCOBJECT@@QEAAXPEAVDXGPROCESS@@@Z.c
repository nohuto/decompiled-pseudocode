void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax

  v2 = 0;
  v3 = (_DWORD *)(a2 + 424);
  if ( !a2 || (v6 = 16, (*v3 & 0x180) == 0) )
    v6 = 0;
  v7 = v6 | *((_DWORD *)this + 71) & 0xFFFFFFEF;
  *((_DWORD *)this + 71) = v7;
  if ( (v7 & 0x10) != 0 )
  {
    if ( (*v3 & 0x100) != 0 )
      v8 = *(_QWORD *)(a2 + 608);
    else
      v8 = a2 & -(__int64)((*v3 & 0x80u) != 0);
    *((_QWORD *)this + 36) = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(1LL, 5808LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVmwpProcess", 5808LL, 0LL, 0LL, 0LL, 0LL);
      v7 = *((_DWORD *)this + 71);
    }
  }
  else
  {
    *((_QWORD *)this + 36) = 0LL;
  }
  if ( a2 )
  {
    if ( (*v3 & 0x104) == 0x104 )
    {
      v9 = (2 * *((_DWORD *)this + 70)) >> 1;
      if ( v9 == 5 || v9 == 18 )
        v2 = 32;
    }
  }
  *((_DWORD *)this + 71) = v2 | v7 & 0xFFFFFFDF;
}
