__int64 __fastcall DXGSHAREDVMOBJECT::ReleaseReference(DXGSHAREDVMOBJECT *this)
{
  unsigned __int32 v2; // edi
  int v3; // eax
  PERESOURCE *Global; // rax

  if ( *((int *)this + 6) <= 0 )
  {
    WdLogSingleEntry1(1LL, 16209LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Reference > 0", 16209LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(_DWORD *)this;
    if ( *(_DWORD *)this == 4 )
    {
      *((_QWORD *)this + 1) = 0LL;
    }
    else
    {
      if ( v3 == 8 || v3 == 11 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 1), 0);
        *((_QWORD *)this + 1) = 0LL;
        goto LABEL_12;
      }
      if ( v3 != 16 )
      {
        WdLogSingleEntry1(2LL, *(int *)this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid DXGSHAREDVMOBJECT type: 0x%I64x",
          *(int *)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_12:
        DXGSHAREDVMOBJECT::~DXGSHAREDVMOBJECT(this);
        operator delete(this);
        return v2;
      }
    }
    ObCloseHandle(*((HANDLE *)this + 2), 0);
    *((_QWORD *)this + 2) = 0LL;
    goto LABEL_12;
  }
  return v2;
}
