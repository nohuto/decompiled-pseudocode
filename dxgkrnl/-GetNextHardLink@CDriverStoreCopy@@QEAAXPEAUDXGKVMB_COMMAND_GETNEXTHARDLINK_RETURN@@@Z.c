void __fastcall CDriverStoreCopy::GetNextHardLink(
        CDriverStoreCopy *this,
        struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *a2)
{
  char *v2; // rcx
  size_t **v4; // rbx
  size_t *v5; // rax
  unsigned int v6; // r11d

  v2 = (char *)this + 1608;
  v4 = *(size_t ***)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *v4, (size_t **)(*v4)[1] != v4) )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  v5[1] = (size_t)v2;
  if ( v4 == (size_t **)v2 )
  {
    *(_DWORD *)a2 = -2147483642;
  }
  else
  {
    RtlStringCbCopyW((unsigned __int16 *)a2 + 266, 0x208uLL, (size_t *)((char *)v4 + 36));
    RtlStringCbCopyW((unsigned __int16 *)a2 + 6, v6, v4[3]);
    *((_DWORD *)a2 + 1) = *((_DWORD *)v4 + 4);
    *((_DWORD *)a2 + 2) = *((_DWORD *)v4 + 5);
    operator delete(v4);
    *(_DWORD *)a2 = 0;
  }
}
