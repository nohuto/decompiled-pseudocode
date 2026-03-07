__int64 __fastcall DWMSPRITEREF::hspLookupWindow(Gre::Base *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  v1 = 0LL;
  Buffer[0] = a1;
  v2 = Gre::Base::Globals(a1);
  v3 = *((_QWORD *)v2 + 38) + 72LL;
  if ( *((_QWORD *)v2 + 38) != -72LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  v4 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v2 + 38), Buffer);
  if ( v4 )
    v1 = v4[1];
  if ( v3 )
  {
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
  return v1;
}
