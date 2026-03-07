__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct PFE *v8; // r8
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)this + 844LL);
  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v11, a2);
  v7 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
  v8 = *(struct PFE **)((v5 != 0 ? 8 : 0) + v7 + 19336);
  if ( !v8 )
    v8 = *(struct PFE **)(v7 + 19336);
  RFONTOBJ::vInit((RFONTOBJ *)&v10, a2, v8, (struct _EUDCLOGFONT *)v11);
  if ( v10 )
    *(_QWORD *)(*(_QWORD *)this + 720LL) = v10;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 720LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  return v3;
}
