/*
 * XREFs of wcsncpycch @ 0x1C00115C4
 * Callers:
 *     _GetKeyNameText @ 0x1C00114E0 (_GetKeyNameText.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0011CCC (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wcsncpycch(_WORD *a1, __int64 a2, int a3)
{
  _WORD *v3; // r9
  __int64 v4; // rdx
  __int16 v5; // ax

  v3 = a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = *(_WORD *)((char *)a1 + v4);
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)(a1 - v3);
}
