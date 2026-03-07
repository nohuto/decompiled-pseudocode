_BOOL8 __fastcall MiAllowGuardFault(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _BYTE *v2; // rax
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex != 1 )
  {
    v2 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1 & 1) != 0 )
    {
      if ( *v2 != 1 && *v2 != 3 && *v2 != 6 )
        return (CurrentThread->MiscFlags & 0x20) == 0;
      v3 = *v2 == 6;
    }
    else
    {
      v3 = (unsigned __int8)KeInvalidAccessAllowed(a1, 0LL) == 0;
    }
    if ( v3 )
      return (CurrentThread->MiscFlags & 0x20) == 0;
  }
  return 0LL;
}
