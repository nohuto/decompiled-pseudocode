/*
 * XREFs of ?GetClipboardIL@@YAXUtagUIPI_INFO@@PEAU1@@Z @ 0x1C014976A
 * Callers:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C014972C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetClipboardIL(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int *v3; // r11
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // edx

  v2 = 0;
  v3 = &gaClipILDef[2];
  do
  {
    v5 = v2 + 1;
    if ( a1 >= *v3 && a1 < gaClipILDef[6 * v5 + 2] )
      break;
    v3 += 6;
    ++v2;
  }
  while ( (unsigned int)v5 < 5 );
  if ( v2 > 4 )
  {
LABEL_8:
    *a2 = gaClipILDef[32];
    result = *(_QWORD *)gaClipILDef;
    v8 = gaClipILDef[33];
  }
  else
  {
    while ( 1 )
    {
      v6 = v2 + 1;
      if ( gaClipILDef[6 * v6 + 5] )
        break;
      ++v2;
      if ( (unsigned int)v6 >= 5 )
        goto LABEL_8;
    }
    *a2 = gaClipILDef[6 * v2 + 2];
    result = *(_QWORD *)gaClipILDef;
    v8 = gaClipILDef[6 * v2 + 3];
  }
  a2[1] = v8;
  return result;
}
