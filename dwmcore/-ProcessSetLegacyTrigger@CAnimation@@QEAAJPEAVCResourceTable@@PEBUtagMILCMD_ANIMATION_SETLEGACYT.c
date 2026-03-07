__int64 __fastcall CAnimation::ProcessSetLegacyTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETLEGACYTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  CAnimation *v15; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x5Eu);
  *((_QWORD *)this + 18) = Resource;
  v6 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v7 = *(unsigned int *)(v6 + 88);
  v15 = this;
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD9u, 0LL);
    return v9;
  }
  v9 = 0;
  if ( v8 > *(_DWORD *)(v6 + 84) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(v6 + 64, 8, 1, &v15);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
      goto LABEL_11;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 64) + 8 * v7) = this;
    *(_DWORD *)(v6 + 88) = v8;
  }
  v13 = *(_QWORD *)(v6 + 96);
  if ( v13 )
  {
    *((_QWORD *)this + 17) = v13;
    *((_QWORD *)this + 26) = v13;
  }
  return v9;
}
