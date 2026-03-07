char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2)
{
  CInputConfig *v3; // r14
  DWORD LowPart; // ebx
  char v5; // di
  CInputConfig *v6; // r9
  CInputConfig *i; // r8
  _DWORD *v8; // rcx
  LONG HighPart; // [rsp+34h] [rbp+Ch]

  HighPart = a1.HighPart;
  *(_QWORD *)a2 = 0LL;
  v3 = gpInputConfig;
  LowPart = a1.LowPart;
  KeEnterCriticalRegion();
  v5 = 1;
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v6 = *(CInputConfig **)v3;
  for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
  {
    v8 = 0LL;
    if ( v6 != v3 )
      v8 = (_DWORD *)((char *)v6 + 16);
    if ( !v8 )
      break;
    if ( LowPart == *v8 && HighPart == v8[1] )
    {
      *(_QWORD *)a2 = v8;
      goto LABEL_10;
    }
    v6 = i;
  }
  v5 = 0;
LABEL_10:
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  return v5;
}
