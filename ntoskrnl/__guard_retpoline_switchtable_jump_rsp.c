void _guard_retpoline_switchtable_jump_rsp()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  retaddr = &retaddr;
}
