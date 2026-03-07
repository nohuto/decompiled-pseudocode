__int64 __fastcall VIDPN_MGR::GetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v8; // eax
  unsigned int v9; // edi

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v6 = *((_QWORD *)this + 15);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    v8 = *((_DWORD *)TargetById + 100);
    *a3 = v8;
    if ( v8 == -1 )
      v9 = -1073741811;
    else
      v9 = 0;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v4, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    v9 = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return v9;
}
