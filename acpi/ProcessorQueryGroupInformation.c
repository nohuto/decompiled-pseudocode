__int64 __fastcall ProcessorQueryGroupInformation(__int64 a1, _DWORD *a2, char *a3)
{
  USHORT MaximumGroupCount; // ax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  char v8; // dl
  __int64 *v9; // rax
  bool v10; // cf

  MaximumGroupCount = KeQueryMaximumGroupCount();
  v6 = 0;
  if ( MaximumGroupCount && (_mm_lfence(), (v7 = *(_QWORD *)ProcessorGroupByNumber) != 0) )
  {
    v8 = 0;
    v9 = *(__int64 **)(v7 + 16);
    while ( v9 != (__int64 *)(v7 + 16) )
    {
      v10 = *((_DWORD *)v9 + 4) < 0xFFFFu;
      v9 = (__int64 *)*v9;
      if ( !v10 )
        v8 = 1;
    }
    *a2 = *(_DWORD *)(v7 + 36);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
