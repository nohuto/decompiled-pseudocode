void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  struct DXGKEYEDMUTEX **v4; // rdx
  struct DXGKEYEDMUTEX **v5; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4755LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pKeyedMutex != NULL", 4755LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 76));
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGKEYEDMUTEX *)a2 || (v5 = a2[1], *v5 != (struct DXGKEYEDMUTEX *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGKEYEDMUTEX *)v4;
  v4[1] = (struct DXGKEYEDMUTEX *)v5;
  DXGFASTMUTEX::Release(this + 76);
  DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)a2);
}
