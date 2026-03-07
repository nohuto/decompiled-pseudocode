__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // edi
  unsigned int v2; // ebx
  char v3; // bp
  struct CComposition *v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx

  v1 = *((_DWORD *)this + 12);
  v2 = 0;
  v3 = *((_BYTE *)this + 124);
  if ( v1 != 3 )
    CDirectFlipInfo::CalcIndependentFlipSupport(this);
  v5 = g_pComposition;
  *((_BYTE *)this + 124) = 0;
  if ( *(_BYTE *)(*((_QWORD *)v5 + 27) + 577LL) )
  {
    if ( *((_DWORD *)this + 13) == 1 )
      goto LABEL_10;
    if ( *((_DWORD *)this + 13) != 2 )
    {
      if ( *((_DWORD *)this + 13) != 4 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( !*((_BYTE *)this + 122)
      && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2)) == 2 )
    {
LABEL_10:
      *((_BYTE *)this + 124) = 1;
    }
  }
LABEL_11:
  if ( v1 != 3 || v3 != *((_BYTE *)this + 124) )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v6 + 240LL);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    LOBYTE(v9) = *((_BYTE *)this + 124);
    v10 = v7(v6, *((_QWORD *)this + 3), v9, v8);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x102u, 0LL);
      return v2;
    }
    *((_DWORD *)this + 12) = 3;
  }
  if ( *((_BYTE *)this + 122) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 336LL))(*((_QWORD *)this + 2)) == -1 )
      {
        CDirectFlipInfo::DisableIndependentFlip(this);
      }
      else
      {
        v12 = *(_QWORD *)this + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        LOBYTE(v14) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)this + 2) + 216LL))(
          *((_QWORD *)this + 2),
          v14,
          1LL,
          v13);
        if ( CDirectFlipInfo::CheckCustomPresentDuration(this) )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 368LL))(
            *((_QWORD *)this + 2),
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 17));
      }
    }
    else if ( (int)CDirectFlipInfo::EnableIndependentFlip(this) >= 0 )
    {
      CDirectFlipInfo::CheckCustomPresentDuration(this);
      if ( *((_DWORD *)this + 17) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 368LL))(
          *((_QWORD *)this + 2),
          *((_QWORD *)this + 3));
    }
  }
  *((_BYTE *)this + 121) |= CDirectFlipInfo::RenderingRealizationChanged(this);
  return v2;
}
