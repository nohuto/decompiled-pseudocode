__int64 __fastcall EnumClipboardFormats(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx
  struct tagWINDOWSTATION *v3; // rdi
  unsigned int *v5; // rcx
  struct tagCLIP *ClipFormat; // rax

  v1 = a1;
  v2 = 0;
  v3 = CheckClipboardAccess(a1);
  if ( !v3 )
    return 0LL;
  if ( *((_QWORD *)v3 + 10) != gptiCurrent )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  v5 = (unsigned int *)*((_QWORD *)v3 + 16);
  if ( v5 )
  {
    if ( !v1
      || (ClipFormat = FindClipFormat(v3, v1, 1)) != 0LL
      && (v5 = (unsigned int *)((char *)ClipFormat + 32), ClipFormat != (struct tagCLIP *)-32LL) )
    {
      if ( (unsigned __int64)v5 < *((_QWORD *)v3 + 16) + 32 * (unsigned __int64)*((unsigned int *)v3 + 34) )
        return *v5;
    }
  }
  return v2;
}
