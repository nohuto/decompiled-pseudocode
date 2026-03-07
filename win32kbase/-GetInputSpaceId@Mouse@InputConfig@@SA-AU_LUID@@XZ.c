struct _LUID InputConfig::Mouse::GetInputSpaceId(void)
{
  __int64 *v0; // rbx
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v4; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v3);
  v0 = (__int64 *)*((_QWORD *)gpInputConfig + 3);
  if ( !v0 )
    v0 = (__int64 *)((char *)gpInputConfig + 32);
  v1 = *v0;
  ExReleaseResourceLite(*v4);
  KeLeaveCriticalRegion();
  return (struct _LUID)v1;
}
