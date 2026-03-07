__int64 __fastcall SepSddlGetSidForString(wchar_t *Str1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int *v4; // rbp
  unsigned int v5; // edi
  __int64 result; // rax
  bool v10; // zf

  v3 = 0LL;
  v4 = (unsigned int *)&unk_1C013B184;
  v5 = 0;
  while ( wcsnicmp_0(Str1, (const wchar_t *)&unk_1C013B170 + 12 * v5 + 6, *v4) )
  {
    ++v5;
    v4 += 6;
    if ( v5 >= 0xE )
    {
      result = 3221225587LL;
      goto LABEL_9;
    }
  }
  v10 = *((_DWORD *)&unk_1C013B170 + 6 * v5 + 2) == 1;
  *a3 = &Str1[*((unsigned int *)&unk_1C013B170 + 6 * v5 + 5)];
  if ( !v10 || IoIsWdmVersionAvailable(1u, 0x20u) )
    v3 = *(__int64 *)((char *)&SeExports->SeCreateTokenPrivilege + *((_QWORD *)&unk_1C013B170 + 3 * v5));
  result = 0LL;
LABEL_9:
  *a2 = v3;
  return result;
}
