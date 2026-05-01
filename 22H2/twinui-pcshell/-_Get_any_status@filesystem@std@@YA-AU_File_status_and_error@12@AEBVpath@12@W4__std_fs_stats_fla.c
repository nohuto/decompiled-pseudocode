/*
 * XREFs of ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x180126794
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180127F28 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 * Callees:
 *     __std_fs_get_stats @ 0x18014DB4C (__std_fs_get_stats.c)
 */

unsigned int *__fastcall std::filesystem::_Get_any_status(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  const WCHAR *v3; // rax
  unsigned int stats; // eax
  __int16 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v2 = 0;
  a1[1] = 0xFFFF;
  *a1 = 0;
  v3 = (const WCHAR *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v3 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v3);
  a1[2] = stats;
  if ( stats )
  {
    a1[1] = 0xFFFF;
    LOBYTE(v2) = stats - 2 <= 1;
    goto LABEL_11;
  }
  a1[1] = (v7 & 1) != 0 ? 365 : 511;
  if ( (v7 & 0x400) == 0 )
    goto LABEL_9;
  if ( v8 != -1610612724 )
  {
    if ( v8 == -1610612733 )
    {
      v2 = 10;
      goto LABEL_11;
    }
LABEL_9:
    v2 = (v7 & 0x10 | 0x20u) >> 4;
    goto LABEL_11;
  }
  v2 = 4;
LABEL_11:
  *a1 = v2;
  return a1;
}
