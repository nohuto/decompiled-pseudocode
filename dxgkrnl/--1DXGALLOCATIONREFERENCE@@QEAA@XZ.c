void __fastcall DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  struct DXGTHREAD *DxgThread; // rax
  struct DXGTHREAD *v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v3 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v3) >= 0 )
    {
      DxgThread = v3;
      if ( v3 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v3 = DxgThread) != 0LL) )
      {
        if ( *((_DWORD *)DxgThread + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
      }
    }
  }
}
