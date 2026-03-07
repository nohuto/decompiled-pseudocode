char __fastcall CDirectFlipInfo::CheckCustomPresentDuration(CDirectFlipInfo *this)
{
  char v2; // si
  unsigned int v3; // r14d
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // r9d
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 104LL))(
         *((_QWORD *)this + 2),
         &v12);
  if ( __PAIR64__(v12, v3) != *((_QWORD *)this + 7) || v4 != *((_BYTE *)this + 64) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    LOBYTE(v6) = v4;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 168LL))(v5, v3, v6, v12);
    v9 = v7;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
    {
      v10 = -1;
      if ( v4 )
        v10 = v12;
      McTemplateU0qqq_EventWriteTransfer(v8, (__int64)&CustomDurationComputeSupportedDuration, v3, v10, v7);
    }
    if ( v9 != *((_DWORD *)this + 17) )
    {
      *((_DWORD *)this + 17) = v9;
      v2 = 1;
    }
    *((_DWORD *)this + 14) = v3;
    *((_BYTE *)this + 64) = v4;
  }
  return v2;
}
