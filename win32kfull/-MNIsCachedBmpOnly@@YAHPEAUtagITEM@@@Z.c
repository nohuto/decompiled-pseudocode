_BOOL8 __fastcall MNIsCachedBmpOnly(struct tagITEM *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x20000000) != 0 )
    return *((_QWORD *)a1 + 3) == 0LL;
  return result;
}
