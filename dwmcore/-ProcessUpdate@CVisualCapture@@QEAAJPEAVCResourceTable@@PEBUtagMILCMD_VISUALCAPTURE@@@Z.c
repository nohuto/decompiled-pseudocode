__int64 __fastcall CVisualCapture::ProcessUpdate(
        CVisualCapture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALCAPTURE *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct CResourceTable *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 64LL))(this);
  v6 = *((_DWORD *)a3 + 2);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0xC4u);
    *((_QWORD *)this + 233) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x22Eu, 0LL);
LABEL_15:
      (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 64LL))(this);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 233) = 0LL;
  }
  v10 = *((_DWORD *)a3 + 3);
  if ( v10 )
  {
    v11 = CResourceTable::GetResource((__int64)a2, v10, 0xC4u);
    *((_QWORD *)this + 234) = v11;
    if ( !v11 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x240u, 0LL);
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 234) = 0LL;
  }
  v13 = (struct CResourceTable *)*((unsigned int *)a3 + 4);
  if ( (_DWORD)v13 )
  {
    v14 = CResourceTable::GetResource((__int64)a2, (unsigned int)v13, 0x2Au);
    *((_QWORD *)this + 235) = v14;
    if ( !v14 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2003303421, 0x252u, 0LL);
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 235) = 0LL;
  }
  *((_DWORD *)this + 472) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 473) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 474) = *((_DWORD *)a3 + 7);
  *((_BYTE *)this + 1900) = *((_BYTE *)a3 + 32);
  v16 = CVisualCapture::RegisterNotifiers(this, v13);
  v9 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x260u, 0LL);
    goto LABEL_15;
  }
LABEL_16:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v9;
}
