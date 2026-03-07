__int64 __fastcall sub_140831820(_QWORD *a1, _QWORD *a2)
{
  unsigned __int16 *v2; // r8
  const WCHAR *v3; // r10
  bool v4; // zf
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  const WCHAR *v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int16 *v9; // rax
  int v10; // ebx
  LONG v11; // eax

  v2 = (unsigned __int16 *)a1[1];
  v3 = v2 + 8;
  v4 = *(_BYTE *)a1 == 2;
  if ( *(_BYTE *)a1 != 2 )
    v3 = (const WCHAR *)*((_QWORD *)v2 + 1);
  v5 = a2[1];
  v6 = v2 + 1;
  if ( !v4 )
    v6 = v2;
  v7 = (const WCHAR *)(v5 + 16);
  v8 = *v6;
  if ( *(_BYTE *)a2 != 2 )
    v7 = *(const WCHAR **)(v5 + 8);
  v9 = (unsigned __int16 *)(v5 + 2);
  if ( *(_BYTE *)a2 != 2 )
    v9 = (unsigned __int16 *)a2[1];
  v10 = 0;
  v11 = RtlCompareUnicodeStrings(v3, v8 >> 1, v7, (unsigned __int64)*v9 >> 1, 0);
  if ( v11 > 0 )
    return 1LL;
  LOBYTE(v10) = v11 >= 0;
  return (unsigned int)(v10 - 1);
}
