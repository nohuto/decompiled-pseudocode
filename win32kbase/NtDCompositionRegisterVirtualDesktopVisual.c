__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v4; // rbx
  int v5; // edi
  CompositionObject *v6; // rsi
  PVOID v7; // rdi
  __int64 v8; // rcx
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v4 = *a2;
  Object = 0LL;
  v5 = DirectComposition::ResourceObject::ResolveHandle(a3, 1u, 1, (struct DirectComposition::ResourceObject **)&Object);
  if ( v5 >= 0 )
  {
    v6 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 196 )
    {
      GreLockDwmState();
      Object = 0LL;
      v5 = CompositionObject::OpenDwmHandle(v6, &Object);
      if ( v5 >= 0 )
      {
        v7 = Object;
        v8 = UserReferenceDwmApiPort();
        if ( qword_1C02D6040 )
          v5 = qword_1C02D6040(v8, a1, v4, v7);
        else
          v5 = -1073741637;
      }
      GreUnlockDwmState();
    }
    else
    {
      v5 = -1073741811;
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
