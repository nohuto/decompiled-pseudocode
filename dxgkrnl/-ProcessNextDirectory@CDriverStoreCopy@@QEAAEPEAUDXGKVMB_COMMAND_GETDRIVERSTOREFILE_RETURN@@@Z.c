unsigned __int8 __fastcall CDriverStoreCopy::ProcessNextDirectory(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *a2)
{
  void *v4; // rcx
  CDriverStoreCopy **v5; // rax
  CDriverStoreCopy **v6; // r11
  CDriverStoreCopy *v7; // rcx
  __int64 v9; // r11

  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 != (void *)-1LL )
  {
    ZwClose(v4);
    *((_QWORD *)this + 2) = -1LL;
  }
  v5 = (CDriverStoreCopy **)((char *)this + 1592);
  v6 = (CDriverStoreCopy **)*((_QWORD *)this + 199);
  if ( v6[1] != (CDriverStoreCopy *)((char *)this + 1592) || (v7 = *v6, *((CDriverStoreCopy ***)*v6 + 1) != v6) )
    __fastfail(3u);
  *v5 = v7;
  *((_QWORD *)v7 + 1) = v5;
  if ( v6 == v5 )
    return 0;
  *((_DWORD *)a2 + 4) = RtlStringCbCopyW((unsigned __int16 *)a2 + 30, 0x208uLL, (size_t *)v6 - 65);
  ExFreePoolWithTag((PVOID)(v9 - 520), 0);
  if ( *((int *)a2 + 4) >= 0 )
    CDriverStoreCopy::EnumDirectory(this, a2);
  return 1;
}
