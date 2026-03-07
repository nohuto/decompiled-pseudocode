__int64 __fastcall CAnimationLoggingManager::ProcessSetPropertyUpdate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE *a3)
{
  char *v3; // r10
  __int64 v4; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]

  v3 = (char *)this + 64;
  v14 = *(_QWORD *)((char *)a3 + 12);
  v15 = *((_DWORD *)a3 + 2);
  v4 = *((unsigned int *)this + 22);
  v5 = v4 + 1;
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
    v8 = -2147024362;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x84u, 0LL);
    return v8;
  }
  if ( v5 > *((_DWORD *)this + 21) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 12, 1, &v14);
    v6 = v12;
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    v9 = *(_QWORD *)v3;
    v10 = 3 * v4;
    *(_QWORD *)(v9 + 4 * v10) = v14;
    *(_DWORD *)(v9 + 4 * v10 + 8) = v15;
    *((_DWORD *)v3 + 6) = v5;
  }
  return 0;
}
