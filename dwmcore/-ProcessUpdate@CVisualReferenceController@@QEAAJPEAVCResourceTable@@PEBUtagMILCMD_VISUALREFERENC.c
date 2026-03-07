__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CVisualReferenceController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALREFERENCECONTROLLER *a3)
{
  struct CResourceTable *v6; // rdx
  __int64 Resource; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  CVisualReferenceController::UnRegisterNotifiers(this);
  v6 = (struct CResourceTable *)*((unsigned int *)a3 + 2);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, (unsigned int)v6, 0xC4u);
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x295u, 0LL);
LABEL_8:
      CVisualReferenceController::UnRegisterNotifiers(this);
      goto LABEL_4;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = CVisualReferenceController::RegisterNotifiers(this, v6);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x29Eu, 0LL);
    goto LABEL_8;
  }
LABEL_4:
  CResource::NotifyOnChanged((__int64)this, 0, (__int64)this);
  return v11;
}
