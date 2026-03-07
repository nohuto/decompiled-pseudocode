__int64 __fastcall GreValidateServerHandle(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // ecx

  if ( (_DWORD)a2 != 4 )
    return HmgValidHandle();
  LOBYTE(a2) = 4;
  v3 = 0;
  v4 = HmgLockIgnoreOwner(a1, a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 80);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
    LOBYTE(v3) = v5 == 0;
  }
  return v3;
}
