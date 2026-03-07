_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1, void *Teb)
{
  _DWORD *v2; // r9
  unsigned int v3; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v6; // [rsp+10h] [rbp+10h]

  if ( !Teb )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
  }
  v2 = (_DWORD *)(((unsigned __int64)Teb + 0x2000) & -(__int64)(Teb != 0LL));
  v6 = v2[1];
  v3 = v2[2];
  if ( a1 >= v3 && a1 <= v6 )
    return 1LL;
  return v3 != v2[899] && a1 >= v3 - 4096 && a1 <= v6;
}
