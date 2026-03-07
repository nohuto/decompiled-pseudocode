char *MiInitializeNumaRangesTemporary()
{
  char *result; // rax
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // rcx
  char *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  qword_140C65738 = -1LL;
  if ( ((int (__fastcall *)(__int64, __int64, char **))off_140C020E8[0])(30LL, 16LL, &v4) >= 0 && (result = v4) != 0LL )
  {
    v1 = 0;
    if ( *(_QWORD *)v4 != -1LL )
    {
      v2 = (unsigned __int16)KeNumberNodes;
      v3 = 0LL;
      do
      {
        if ( *(_DWORD *)&result[v3 + 8] >= v2 )
        {
          *(_DWORD *)&result[v3 + 8] = 0;
          result = v4;
        }
        dword_140C65708 = v1++;
        v3 = 16LL * v1;
      }
      while ( *(_QWORD *)&result[v3] != -1LL );
    }
  }
  else
  {
    result = (char *)&unk_140C65728;
  }
  qword_140C65748 = result;
  return result;
}
